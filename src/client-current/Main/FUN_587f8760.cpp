// Complete Ghidra body ranges for the selected function.
// 8 discontiguous segments; total 10038 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F8760 .. +0x62D bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_00() {
    __asm {
        ; Exact mapped bytes B8 34 12 00 00: mov eax, 0x1234
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 46 18 00: call 0x5897ce60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x18
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
        ; Exact mapped bytes 89 84 24 30 12 00 00: mov dword ptr [esp + 0x1230], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 38 1D 08 49 A2 58: cmp byte ptr [0x58a24908], bl
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x587f8895
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 01 00 00: push 0x114
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 30: lea eax, [esp + 0x30]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AC 44 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 64 24 7C C1: and dword ptr [esp + 0x7c], 0xffffffc1
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x7c
        __asm _emit 0xc1
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes B9 FF FF 00 00: mov ecx, 0xffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 84 24 A2 00 00 00: mov word ptr [esp + 0xa2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 54 24 3A: mov word ptr [esp + 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3a
        ; Exact mapped bytes 88 54 24 3D: mov byte ptr [esp + 0x3d], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3d
        ; Exact mapped bytes 88 94 24 A1 00 00 00: mov byte ptr [esp + 0xa1], dl
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 3E: lea eax, [esp + 0x3e]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3e
        ; Exact mapped bytes 66 89 4C 24 38: mov word ptr [esp + 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes BA 78 CD 99 58: mov edx, 0x5899cd78
        __asm _emit 0xba
        __asm _emit 0x78
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C6 44 24 30 04: mov byte ptr [esp + 0x30], 4
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 94 00 00 00 01: mov byte ptr [esp + 0x94], 1
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes C6 84 24 9C 00 00 00 03: mov byte ptr [esp + 0x9c], 3
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes C6 84 24 98 00 00 00 02: mov byte ptr [esp + 0x98], 2
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes C6 84 24 AC 00 00 00 04: mov byte ptr [esp + 0xac], 4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 A8 00 00 00 04: mov byte ptr [esp + 0xa8], 4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 A0 00 00 00 04: mov byte ptr [esp + 0xa0], 4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes C6 84 24 A4 00 00 00 04: mov byte ptr [esp + 0xa4], 4
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes C7 44 24 74 64 00 00 00: mov dword ptr [esp + 0x74], 0x64
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 73 18: lea esi, [ebx + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x73
        __asm _emit 0x18
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8D 8E E6 FF FF 7F: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x587f883b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0C 02: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x02
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0A: je 0x587f883b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x587f8820
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x587f883f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 3B F3: cmp esi, ebx
        __asm _emit 0x3b
        __asm _emit 0xf3
        ; Exact mapped bytes 75 01: jne 0x587f8840
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 88 18: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D 44 24 34: lea eax, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 9C 24 34 01 00 00: mov dword ptr [esp + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 9C 24 38 01 00 00: mov byte ptr [esp + 0x138], bl
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 24 42 01 00 00: mov word ptr [esp + 0x142], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 17 F9 FF: call 0x58789fe0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 10 19 02 00: mov dword ptr [ebp + 0x21910], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 98 6C 60 00 00: mov dword ptr [eax + 0x606c], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 30 1F 02 00: mov dword ptr [ebp + 0x21f30], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 38 1F 02 00: mov dword ptr [ebp + 0x21f38], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x38
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 17 F9 FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 34 1F 02 00: mov dword ptr [ebp + 0x21f34], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 91 06 0A 00 00: movzx edx, word ptr [ecx + 0xa06]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 55 6C: mov dword ptr [ebp + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x6c
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 88 04 0A 00 00: movzx ecx, word ptr [eax + 0xa04]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 24 05 01 00: mov edx, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D 70: mov dword ptr [ebp + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x70
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 89 9D 14 19 02 00: mov dword ptr [ebp + 0x21914], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 88 A6 10 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa6
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B B4 24 48 12 00 00: mov esi, dword ptr [esp + 0x1248]
        __asm _emit 0x8b
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 0F B6 46 32: movzx eax, byte ptr [esi + 0x32]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x46
        __asm _emit 0x32
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 89 85 D0 04 01 00: mov dword ptr [ebp + 0x104d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8D BD 6C 05 01 00: lea edi, [ebp + 0x1056c]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 31 00 00 00: mov ecx, 0x31
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 6C 04 01 00: mov dword ptr [ebp + 0x1046c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 70 04 01 00: mov dword ptr [ebp + 0x10470], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 0F B7 85 F0 05 01 00: movzx eax, word ptr [ebp + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 85 31 04 00 00: jne 0x587f8d55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 50 0B 01 00: mov eax, dword ptr [ebp + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 85 54 0B 01 00: mov eax, dword ptr [ebp + 0x10b54]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 85 58 0B 01 00: mov eax, dword ptr [ebp + 0x10b58]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 39 98 B8 63 00 00: cmp dword ptr [eax + 0x63b8], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x587f8b45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 60 0B 01 00: mov eax, dword ptr [ebp + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes B8 C8 F5 FE FF: mov eax, 0xfffef5c8
        __asm _emit 0xb8
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 B4 F5 FE FF: mov eax, 0xfffef5b4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes BF 48 00 00 00: mov edi, 0x48
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 6C 0B 01 00: lea esi, [ebp + 0x10b6c]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 39 88 60 01 00 00: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x587f89b6
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0E: jl 0x587f89b6
        __asm _emit 0x7c
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x587f89b6
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes EB 02: jmp 0x587f89b8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E F8: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf8
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f89ea
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F 05: lea ecx, [edi + 5]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x05
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8a17
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 15: jl 0x587f8a17
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8a17
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 04 30: mov eax, dword ptr [eax + esi]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587f8a19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8a4a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8a74
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7C 15: jl 0x587f8a74
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8a74
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 04 30: mov eax, dword ptr [eax + esi]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587f8a76
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8aa8
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 31 01 00 00: push 0x131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 57 03 00 00: push 0x357
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 A7 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 40: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C C4 FE FF FF: jl 0x587f8990
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 85 D9 18 02 00 01: mov byte ptr [ebp + 0x218d9], 1
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 0C 10 00 00: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 68: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 2B 88 C4 63 00 00: sub ecx, dword ptr [eax + 0x63c4]
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 5C F8 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 15 5C F8 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 E9 01 00 00: push 0x1e9
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 65 03 00 00: push 0x365
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 50 A7 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa7
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x587f8d02
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 BC 63 00 00: cmp dword ptr [eax + 0x63bc], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 60 0B 01 00: mov eax, dword ptr [ebp + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x587f8cfe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes B8 C0 F5 FE FF: mov eax, 0xfffef5c0
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 B4 F5 FE FF: mov eax, 0xfffef5b4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes BF 48 00 00 00: mov edi, 0x48
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 6C 0B 01 00: lea esi, [ebp + 0x10b6c]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B 95 4C 1C 02 00: mov edx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 39 88 60 01 00 00: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x587f8ba6
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0E: jl 0x587f8ba6
        __asm _emit 0x7c
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x587f8ba6
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes EB 02: jmp 0x587f8ba8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E F8: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf8
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8bda
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F 03: lea ecx, [edi + 3]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x03
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8c07
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 15: jl 0x587f8c07
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8c07
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 04 30: mov eax, dword ptr [eax + esi]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x30
        ; Exact mapped bytes EB 02: jmp 0x587f8c09
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8c3a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8c64
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7C 15: jl 0x587f8c64
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8c64
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 04 10: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f8c66
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8c98
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 31 01 00 00: push 0x131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 66 03 00 00: push 0x366
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 A5 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 40: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C C4 FE FF FF: jl 0x587f8b80
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 85 D9 18 02 00 01: mov byte ptr [ebp + 0x218d9], 1
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 0C 10 00 00: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 68: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 2B 88 C4 63 00 00: sub ecx, dword ptr [eax + 0x63c4]
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 A4 5A F8 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x587f8d02
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8D B5 74 0B 01 00: lea esi, [ebp + 0x10b74]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E F0: mov ecx, dword ptr [esi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf0
        ; Exact mapped bytes 68 86 01 00 00: push 0x186
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 43 03 00 00: push 0x343
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E A5 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 86 01 00 00: push 0x186
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3B 03 00 00: push 0x33b
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5D A5 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 D5: jne 0x587f8d10
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 E9 01 00 00: push 0x1e9
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 65 03 00 00: push 0x365
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 40 A5 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E9 CC 04 00 00: jmp 0x587f9221
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 0F 85 B3 04 00 00: jne 0x587f9212
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0F FB F8 FF: call 0x58788880
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D D8 AD A0 58: mov ecx, dword ptr [0x58a0add8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 89 8D D0 18 02 00: mov dword ptr [ebp + 0x218d0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 15 D0 AD A0 58: mov dx, word ptr [0x58a0add0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes B8 B0 AA 9B 58: mov eax, 0x589baab0
        __asm _emit 0xb8
        __asm _emit 0xb0
        __asm _emit 0xaa
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes EB 03: jmp 0x587f8d90
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F8D90 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_01() {
    __asm {
        ; Exact mapped bytes 66 39 10: cmp word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 74 0F: je 0x587f8da4
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 05 84 0E 00 00: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3D 54 2D 9C 58: cmp eax, 0x589c2d54
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 7C EE: jl 0x587f8d90
        __asm _emit 0x7c
        __asm _emit 0xee
        ; Exact mapped bytes EB 18: jmp 0x587f8dbc
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 69 C9 84 0E 00 00: imul ecx, ecx, 0xe84
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 38 B8 9B 58: add ecx, 0x589bb838
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0xb8
        __asm _emit 0x9b
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 48 1C 02 00: mov ecx, dword ptr [ebp + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 14 F3 F7 FF: call 0x587780d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf3
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8D 8D 54 0B 01 00: lea ecx, [ebp + 0x10b54]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x587f8dd0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F8DD0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_02() {
    __asm {
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
        ; Exact mapped bytes 75 F1: jne 0x587f8dd0
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 15 D4 AD A0 58: mov edx, dword ptr [0x58a0add4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes A1 D8 AD A0 58: mov eax, dword ptr [0x58a0add8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 5C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b5c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A9 59 F8 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x59
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 50 0B 01 00: mov eax, dword ptr [ebp + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 39 98 B8 63 00 00: cmp dword ptr [eax + 0x63b8], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x587f8ff0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 60 0B 01 00: mov eax, dword ptr [ebp + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes B8 C8 F5 FE FF: mov eax, 0xfffef5c8
        __asm _emit 0xb8
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 B4 F5 FE FF: mov eax, 0xfffef5b4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes BF 48 00 00 00: mov edi, 0x48
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 6C 0B 01 00: lea esi, [ebp + 0x10b6c]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x587f8e50
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F8E50 .. +0x377 bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 95 4C 1C 02 00: mov edx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 39 88 60 01 00 00: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x587f8e76
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0E: jl 0x587f8e76
        __asm _emit 0x7c
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x587f8e76
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes EB 02: jmp 0x587f8e78
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E F8: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf8
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8eaa
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F 05: lea ecx, [edi + 5]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x05
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8ed7
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 15: jl 0x587f8ed7
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8ed7
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 04 10: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f8ed9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8f0a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f8f34
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7C 15: jl 0x587f8f34
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f8f34
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 04 10: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f8f36
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f8f68
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 31 01 00 00: push 0x131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 57 03 00 00: push 0x357
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 A3 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 40: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C C4 FE FF FF: jl 0x587f8e50
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 85 D9 18 02 00 01: mov byte ptr [ebp + 0x218d9], 1
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 0C 10 00 00: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 68: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 2B 88 C4 63 00 00: sub ecx, dword ptr [eax + 0x63c4]
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 57 F8 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 57 F8 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x587f91b5
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 BC 63 00 00: cmp dword ptr [eax + 0x63bc], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 60 0B 01 00: mov eax, dword ptr [ebp + 0x10b60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 AA 01 00 00: je 0x587f91ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes B8 C0 F5 FE FF: mov eax, 0xfffef5c0
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 B4 F5 FE FF: mov eax, 0xfffef5b4
        __asm _emit 0xb8
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes BF 48 00 00 00: mov edi, 0x48
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B5 6C 0B 01 00: lea esi, [ebp + 0x10b6c]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 4C 1C 02 00: mov edx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 39 88 60 01 00 00: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 12: jle 0x587f9056
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 0E: jl 0x587f9056
        __asm _emit 0x7c
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x587f9056
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 03 C3: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xc3
        ; Exact mapped bytes EB 02: jmp 0x587f9058
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E F8: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf8
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f908a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4F 03: lea ecx, [edi + 3]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x03
        ; Exact mapped bytes 39 88 64 01 00 00: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 19: jle 0x587f90b7
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 7C 15: jl 0x587f90b7
        __asm _emit 0x7c
        __asm _emit 0x15
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0B: je 0x587f90b7
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 04 10: mov eax, dword ptr [eax + edx]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x10
        ; Exact mapped bytes EB 02: jmp 0x587f90b9
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f90ea
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 4C 1C 02 00: mov ecx, dword ptr [ebp + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 1A: jle 0x587f9115
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 7C 16: jl 0x587f9115
        __asm _emit 0x7c
        __asm _emit 0x16
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0C: je 0x587f9115
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 0C 16: lea ecx, [esi + edx]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x16
        ; Exact mapped bytes 8B 04 01: mov eax, dword ptr [ecx + eax]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes EB 02: jmp 0x587f9117
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x587f9149
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 31 01 00 00: push 0x131
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 66 03 00 00: push 0x366
        __asm _emit 0x68
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 A1 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 8D 4F B8: lea ecx, [edi - 0x48]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0xb8
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 40: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x40
        ; Exact mapped bytes 83 F9 02: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C C3 FE FF FF: jl 0x587f9030
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C6 85 D9 18 02 00 01: mov byte ptr [ebp + 0x218d9], 1
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 8B 88 0C 10 00 00: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 68: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 8B 88 98 03 00 00: mov ecx, dword ptr [eax + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB AA AA AA AA: mov ebx, 0xaaaaaaaa
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 33 CB: xor ecx, ebx
        __asm _emit 0x33
        __asm _emit 0xcb
        ; Exact mapped bytes 03 C9: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xc9
        ; Exact mapped bytes 2B 88 C4 63 00 00: sub ecx, dword ptr [eax + 0x63c4]
        __asm _emit 0x2b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 F6 55 F8 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x587f91ba
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes BB AA AA AA AA: mov ebx, 0xaaaaaaaa
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8D B5 74 0B 01 00: lea esi, [ebp + 0x10b74]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x587f91d0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F91D0 .. +0x32D bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 4E F0: mov ecx, dword ptr [esi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf0
        ; Exact mapped bytes 68 86 01 00 00: push 0x186
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 43 03 00 00: push 0x343
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE A0 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 86 01 00 00: push 0x186
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 3B 03 00 00: push 0x33b
        __asm _emit 0x68
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9D A0 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 D5: jne 0x587f91d0
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 8D 7C 0B 01 00: mov ecx, dword ptr [ebp + 0x10b7c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 E9 01 00 00: push 0x1e9
        __asm _emit 0x68
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 65 03 00 00: push 0x365
        __asm _emit 0x68
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 80 A0 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x587f9226
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 50 0B 01 00: mov eax, dword ptr [ebp + 0x10b50]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes BB AA AA AA AA: mov ebx, 0xaaaaaaaa
        __asm _emit 0xbb
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 84 24 48 12 00 00: mov eax, dword ptr [esp + 0x1248]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 BD B0 18 02 00: mov dword ptr [ebp + 0x218b0], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes F6 40 32 20: test byte ptr [eax + 0x32], 0x20
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x32
        __asm _emit 0x20
        ; Exact mapped bytes C6 85 64 0D 02 00 00: mov byte ptr [ebp + 0x20d64], 0
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x587f924b
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 50 40: mov edx, dword ptr [eax + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x40
        ; Exact mapped bytes 89 95 B0 18 02 00: mov dword ptr [ebp + 0x218b0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes F6 85 A8 05 01 00 01: test byte ptr [ebp + 0x105a8], 1
        __asm _emit 0xf6
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x587f925e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 B0 18 02 00 41 42 0F 00: mov dword ptr [ebp + 0x218b0], 0xf4241
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 B0 18 02 00: mov eax, dword ptr [ebp + 0x218b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 7C 0C: jl 0x587f9279
        __asm _emit 0x7c
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 48 1C 02 00: mov ecx, dword ptr [ebp + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B7 EC F7 FF: call 0x58777f30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes D9 05 4C BD 99 58: fld dword ptr [0x5899bd4c]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C6 85 78 03 00 00 00: mov byte ptr [ebp + 0x378], 0
        __asm _emit 0xc6
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 9D 20 0A 01 00: fstp dword ptr [ebp + 0x10a20]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 78 04 01 00: mov dword ptr [ebp + 0x10478], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 44 BD 99 58: fld dword ptr [0x5899bd44]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 9D 24 0A 01 00: fstp dword ptr [ebp + 0x10a24]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 B1 A0 58: mov eax, dword ptr [0x58a0b1c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 40 64 01: test byte ptr [eax + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f92af
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 4C 0A 01 00: mov dword ptr [ebp + 0x10a4c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 6C 0A 01 00: mov dword ptr [ebp + 0x10a6c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 2C 0A 01 00: mov dword ptr [ebp + 0x10a2c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 8C 0A 01 00: mov dword ptr [ebp + 0x10a8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D AC 0A 01 00: mov dword ptr [ebp + 0x10aac], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD EC 0A 01 00: mov dword ptr [ebp + 0x10aec], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 0C 0B 01 00: mov dword ptr [ebp + 0x10b0c], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x0c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 2C 0B 01 00: mov dword ptr [ebp + 0x10b2c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 B1 A0 58: mov ecx, dword ptr [0x58a0b1c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 41 64 01: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f92f1
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 50 0A 01 00: mov dword ptr [ebp + 0x10a50], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 70 0A 01 00: mov dword ptr [ebp + 0x10a70], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 30 0A 01 00: mov dword ptr [ebp + 0x10a30], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x30
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 90 0A 01 00: mov dword ptr [ebp + 0x10a90], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D B0 0A 01 00: mov dword ptr [ebp + 0x10ab0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD F0 0A 01 00: mov dword ptr [ebp + 0x10af0], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 10 0B 01 00: mov dword ptr [ebp + 0x10b10], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 30 0B 01 00: mov dword ptr [ebp + 0x10b30], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x30
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC B1 A0 58: mov edx, dword ptr [0x58a0b1cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 42 64 01: test byte ptr [edx + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f9333
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 54 0A 01 00: mov dword ptr [ebp + 0x10a54], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 74 0A 01 00: mov dword ptr [ebp + 0x10a74], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 34 0A 01 00: mov dword ptr [ebp + 0x10a34], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x34
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 94 0A 01 00: mov dword ptr [ebp + 0x10a94], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D B4 0A 01 00: mov dword ptr [ebp + 0x10ab4], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xb4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD F4 0A 01 00: mov dword ptr [ebp + 0x10af4], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 14 0B 01 00: mov dword ptr [ebp + 0x10b14], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 34 0B 01 00: mov dword ptr [ebp + 0x10b34], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x34
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 B1 A0 58: mov eax, dword ptr [0x58a0b1d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 40 64 01: test byte ptr [eax + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f9374
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 58 0A 01 00: mov dword ptr [ebp + 0x10a58], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 78 0A 01 00: mov dword ptr [ebp + 0x10a78], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 38 0A 01 00: mov dword ptr [ebp + 0x10a38], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 98 0A 01 00: mov dword ptr [ebp + 0x10a98], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D B8 0A 01 00: mov dword ptr [ebp + 0x10ab8], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD F8 0A 01 00: mov dword ptr [ebp + 0x10af8], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 18 0B 01 00: mov dword ptr [ebp + 0x10b18], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 38 0B 01 00: mov dword ptr [ebp + 0x10b38], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 B1 A0 58: mov ecx, dword ptr [0x58a0b1d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 41 64 01: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f93b6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 5C 0A 01 00: mov dword ptr [ebp + 0x10a5c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 7C 0A 01 00: mov dword ptr [ebp + 0x10a7c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 3C 0A 01 00: mov dword ptr [ebp + 0x10a3c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 9C 0A 01 00: mov dword ptr [ebp + 0x10a9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D BC 0A 01 00: mov dword ptr [ebp + 0x10abc], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xbc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD FC 0A 01 00: mov dword ptr [ebp + 0x10afc], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 1C 0B 01 00: mov dword ptr [ebp + 0x10b1c], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 3C 0B 01 00: mov dword ptr [ebp + 0x10b3c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D8 B1 A0 58: mov edx, dword ptr [0x58a0b1d8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 42 64 01: test byte ptr [edx + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f93f8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 60 0A 01 00: mov dword ptr [ebp + 0x10a60], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 80 0A 01 00: mov dword ptr [ebp + 0x10a80], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 40 0A 01 00: mov dword ptr [ebp + 0x10a40], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D A0 0A 01 00: mov dword ptr [ebp + 0x10aa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D C0 0A 01 00: mov dword ptr [ebp + 0x10ac0], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 00 0B 01 00: mov dword ptr [ebp + 0x10b00], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 20 0B 01 00: mov dword ptr [ebp + 0x10b20], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x20
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 40 0B 01 00: mov dword ptr [ebp + 0x10b40], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 DC B1 A0 58: mov eax, dword ptr [0x58a0b1dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 40 64 01: test byte ptr [eax + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f9439
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 64 0A 01 00: mov dword ptr [ebp + 0x10a64], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x64
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 84 0A 01 00: mov dword ptr [ebp + 0x10a84], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 44 0A 01 00: mov dword ptr [ebp + 0x10a44], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D A4 0A 01 00: mov dword ptr [ebp + 0x10aa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D C4 0A 01 00: mov dword ptr [ebp + 0x10ac4], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xc4
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 04 0B 01 00: mov dword ptr [ebp + 0x10b04], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 24 0B 01 00: mov dword ptr [ebp + 0x10b24], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 44 0B 01 00: mov dword ptr [ebp + 0x10b44], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x44
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E0 B1 A0 58: mov ecx, dword ptr [0x58a0b1e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes F6 41 64 01: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x587f947b
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 01 B5 6C 04 01 00: add dword ptr [ebp + 0x1046c], esi
        __asm _emit 0x01
        __asm _emit 0xb5
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 68 0A 01 00: mov dword ptr [ebp + 0x10a68], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 88 0A 01 00: mov dword ptr [ebp + 0x10a88], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 48 0A 01 00: mov dword ptr [ebp + 0x10a48], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D A8 0A 01 00: mov dword ptr [ebp + 0x10aa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D C8 0A 01 00: mov dword ptr [ebp + 0x10ac8], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 08 0B 01 00: mov dword ptr [ebp + 0x10b08], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 28 0B 01 00: mov dword ptr [ebp + 0x10b28], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x28
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 48 0B 01 00: mov dword ptr [ebp + 0x10b48], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x48
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 6C 04 01 00: mov edx, dword ptr [ebp + 0x1046c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D FC 0B 01 00: mov ecx, dword ptr [ebp + 0x10bfc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 80 0B 01 00: mov dword ptr [ebp + 0x10b80], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D E8 0D 02 00: mov dword ptr [ebp + 0x20de8], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9D 28 0A 01 00: mov dword ptr [ebp + 0x10a28], ebx
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 70 04 01 00: mov dword ptr [ebp + 0x10470], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 1C 42 0B 00: call 0x588ad6f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 0A F9 FF: call 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 89 85 80 04 01 00: mov dword ptr [ebp + 0x10480], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 98 0C 02 00: mov dword ptr [ebp + 0x20c98], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 70 0C: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x587f967d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x587f9500
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F9500 .. +0x38D bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_05() {
    __asm {
        ; Exact mapped bytes 39 BE 0C 10 00 00: cmp dword ptr [esi + 0x100c], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x587f9672
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 8E 54 03 00 00: movzx cx, byte ptr [esi + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 0F B7 F9: movzx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf9
        ; Exact mapped bytes 89 7C 24 1C: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 31: je 0x587f955e
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 39 9E 70 60 00 00: cmp dword ptr [esi + 0x6070], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x587f954f
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 48 1C 02 00: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 38 C4 F7 FF: call 0x58775980
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 75 11: jne 0x587f955e
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes EB 0D: jmp 0x587f955c
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 66 0F B6 90 54 03 00 00: movzx dx, byte ptr [eax + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 74 02: je 0x587f955e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 83 BE 70 60 00 00 00: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x587f958d
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 40 10: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 15 9D 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 48 10: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 55 0C 0E 00: call 0x588da1e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 48: jmp 0x587f95d5
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes 0F B7 7C 24 1C: movzx edi, word ptr [esp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 0F B7 96 52 03 00 00: movzx edx, word ptr [esi + 0x352]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E7 0A: shl edi, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe7
        __asm _emit 0x0a
        ; Exact mapped bytes 03 D7: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8C D5 5C 04 00 00: mov ecx, dword ptr [ebp + edx*8 + 0x45c]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0xd5
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 D5 58 04 00 00: lea eax, [ebp + edx*8 + 0x458]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D9 9C 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 86 52 03 00 00: movzx eax, word ptr [esi + 0x352]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 8D 8C C5 58 04 00 00: lea ecx, [ebp + eax*8 + 0x458]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0xc5
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 0F 0C 0E 00: call 0x588da1e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 80 BE 54 03 00 00 04: cmp byte ptr [esi + 0x354], 4
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 34: jne 0x587f9612
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 BA F0 05 01 00 03: cmp word ptr [edx + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 74 24: je 0x587f9612
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes B8 18 FC FF FF: mov eax, 0xfffffc18
        __asm _emit 0xb8
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 44 24 2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes 89 44 24 30: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes E8 8C 9C 10 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8D 44 24 28: lea eax, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CE 0B 0E 00: call 0x588da1e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 B7 4D 0E 00: call 0x588de3d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FF 13 0E 00: call 0x588daa20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 48 14 00 00: mov ecx, dword ptr [esi + 0x1448]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 43 42 05 00: call 0x5884d870
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 83 B8 F0 05 01 00 06: cmp word ptr [eax + 0x105f0], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        ; Exact mapped bytes 75 1F: jne 0x587f965b
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 80 08 1F 02 00: mov eax, dword ptr [eax + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 46 35 F6 FF: call 0x5875cb90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x35
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0D: je 0x587f965b
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 8E EC 12 00 00: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 60 F8 D9 AB 00: mov dword ptr [ecx + 0x60], 0xabd9f8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0xf8
        __asm _emit 0xd9
        __asm _emit 0xab
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 0C 10 00 00: mov ecx, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D7: movzx edx, di
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd7
        ; Exact mapped bytes 8D 84 95 4C 0A 01 00: lea eax, [ebp + edx*4 + 0x10a4c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 68: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 01 10: add dword ptr [eax], edx
        __asm _emit 0x01
        __asm _emit 0x10
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 76 78: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 0F 85 83 FE FF FF: jne 0x587f9500
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 4C 94 FF FF: call 0x587f2ad0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 0F: je 0x587f969f
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 0F B7 88 50 03 00 00: movzx ecx, word ptr [eax + 0x350]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D C8 04 01 00: mov dword ptr [ebp + 0x104c8], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x587f96a9
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 85 C8 04 01 00 FF FF FF FF: mov dword ptr [ebp + 0x104c8], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 95 C8 04 01 00: mov edx, dword ptr [ebp + 0x104c8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 0C 0C 01 00: mov eax, dword ptr [ebp + 0x10c0c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 38 0D 02 00: mov ecx, dword ptr [ebp + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 95 C4 04 01 00: mov dword ptr [ebp + 0x104c4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 C0 04 01 00 FF FF FF FF: mov dword ptr [ebp + 0x104c0], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 BD 58 05 01 00: mov dword ptr [ebp + 0x10558], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 88 04 01 00: mov dword ptr [ebp + 0x10488], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 90 04 01 00: mov dword ptr [ebp + 0x10490], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 68 05 01 00: mov dword ptr [ebp + 0x10568], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 9C 03 00 00: mov dword ptr [ebp + 0x39c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 90 03 00 00: mov dword ptr [ebp + 0x390], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FA F0 10 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 3C 0D 02 00: mov ecx, dword ptr [ebp + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 EF F0 10 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf0
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 38 0D 02 00: mov ecx, dword ptr [ebp + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4F 9C 10 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 3C 0D 02 00: mov ecx, dword ptr [ebp + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 B4 00 00 00: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F 9C 10 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 C0 02 00 00: mov ecx, dword ptr [eax + 0x2c0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 C5 CA 09 00: call 0x58896200
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 24 05 01 00: mov ecx, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 B0 00 00 00: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 A8 00 00 00: imul eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 54 64 00 00 00: mov dword ptr [ecx + 0x54], 0x64
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 2D 00 02 00 00: sub eax, 0x200
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 04: or word ptr [eax + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 85 24 05 01 00: mov eax, dword ptr [ebp + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 89 85 30 05 01 00: mov dword ptr [ebp + 0x10530], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 8D 2C 05 01 00: mov dword ptr [ebp + 0x1052c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD 5C 0D 02 00: mov dword ptr [ebp + 0x20d5c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD DC 0D 02 00: mov dword ptr [ebp + 0x20ddc], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 BD AC 03 00 00: mov dword ptr [ebp + 0x3ac], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 B0 03 00 00: mov dword ptr [ebp + 0x3b0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 B4 03 00 00: mov dword ptr [ebp + 0x3b4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 B8 03 00 00: mov dword ptr [ebp + 0x3b8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 BC 03 00 00: mov dword ptr [ebp + 0x3bc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 C0 03 00 00: mov dword ptr [ebp + 0x3c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 C4 03 00 00: mov dword ptr [ebp + 0x3c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 C8 03 00 00: mov dword ptr [ebp + 0x3c8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 CC 03 00 00: mov dword ptr [ebp + 0x3cc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 D0 03 00 00: mov dword ptr [ebp + 0x3d0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 D4 03 00 00: mov dword ptr [ebp + 0x3d4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 D8 03 00 00: mov dword ptr [ebp + 0x3d8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 DC 03 00 00: mov dword ptr [ebp + 0x3dc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 E0 03 00 00: mov dword ptr [ebp + 0x3e0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 E4 03 00 00: mov dword ptr [ebp + 0x3e4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 E8 03 00 00: mov dword ptr [ebp + 0x3e8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 EC 03 00 00: mov dword ptr [ebp + 0x3ec], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F0 03 00 00: mov dword ptr [ebp + 0x3f0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F4 03 00 00: mov dword ptr [ebp + 0x3f4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 F8 03 00 00: mov dword ptr [ebp + 0x3f8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 FC 03 00 00: mov dword ptr [ebp + 0x3fc], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 00 04 00 00: mov dword ptr [ebp + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 04 04 00 00: mov dword ptr [ebp + 0x404], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 08 04 00 00: mov dword ptr [ebp + 0x408], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 0C 04 00 00: mov dword ptr [ebp + 0x40c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 10 04 00 00: mov dword ptr [ebp + 0x410], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 14 04 00 00: mov dword ptr [ebp + 0x414], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 18 04 00 00: mov dword ptr [ebp + 0x418], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 1C 04 00 00: mov dword ptr [ebp + 0x41c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 20 04 00 00: mov dword ptr [ebp + 0x420], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 24 04 00 00: mov dword ptr [ebp + 0x424], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 28 04 00 00: mov dword ptr [ebp + 0x428], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 2C 04 00 00: mov dword ptr [ebp + 0x42c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 BD 9C 17 02 00: mov dword ptr [ebp + 0x2179c], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 38 85 64 0D 02 00: cmp byte ptr [ebp + 0x20d64], al
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 49 07 00 00: je 0x587f9fc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BD C8 05 01 00: lea edi, [ebp + 0x105c8]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 1A: jle 0x587f98a5
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes EB 03: jmp 0x587f9890
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F9890 .. +0xEC9 bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_06() {
    __asm {
        ; Exact mapped bytes 8A 0C 37: mov cl, byte ptr [edi + esi]
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x37
        ; Exact mapped bytes 80 F1 AA: xor cl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0xaa
        ; Exact mapped bytes 88 8C 34 40 11 00 00: mov byte ptr [esp + esi + 0x1140], cl
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 3B F0: cmp esi, eax
        __asm _emit 0x3b
        __asm _emit 0xf0
        ; Exact mapped bytes 7C EB: jl 0x587f9890
        __asm _emit 0x7c
        __asm _emit 0xeb
        ; Exact mapped bytes 8B 85 F0 0D 02 00: mov eax, dword ptr [ebp + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 50 BD 99 58: fld dword ptr [0x5899bd50]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 9D 20 0A 01 00: fstp dword ptr [ebp + 0x10a20]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 48 BD 99 58: fld dword ptr [0x5899bd48]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes C6 84 34 40 11 00 00 00: mov byte ptr [esp + esi + 0x1140], 0
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 9D 24 0A 01 00: fstp dword ptr [ebp + 0x10a24]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 D0 0D 02 00: mov eax, dword ptr [ebp + 0x20dd0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 D4 0D 02 00: mov eax, dword ptr [ebp + 0x20dd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F4 0D 02 00: mov eax, dword ptr [ebp + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 EC 0D 02 00: mov eax, dword ptr [ebp + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F8 0D 02 00: mov eax, dword ptr [ebp + 0x20df8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 00 0E 02 00: mov eax, dword ptr [ebp + 0x20e00]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 FC 0D 02 00: mov eax, dword ptr [ebp + 0x20dfc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 04 0E 02 00: mov eax, dword ptr [ebp + 0x20e04]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 08 0E 02 00: mov eax, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 0F 00 00 00: mov ecx, 0xf
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 10 0E 02 00: mov eax, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 0C 0E 02 00: mov eax, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 14 0E 02 00: mov eax, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 18 0E 02 00: mov eax, dword ptr [ebp + 0x20e18]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 1C 0E 02 00: mov eax, dword ptr [ebp + 0x20e1c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8D 85 58 1C 02 00: lea eax, [ebp + 0x21c58]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 51 F3: lea edx, [ecx - 0xd]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0xf3
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes BE FE FF 00 00: mov esi, 0xfffe
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x587f9970
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 85 60 1C 02 00: mov eax, dword ptr [ebp + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 64 1C 02 00: mov eax, dword ptr [ebp + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x1c
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
        ; Exact mapped bytes 8B 85 D4 0B 01 00: mov eax, dword ptr [ebp + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 89 B5 68 1C 02 00: mov dword ptr [ebp + 0x21c68], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E8 0B 01 00: mov eax, dword ptr [ebp + 0x10be8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 DC 0B 01 00: mov eax, dword ptr [ebp + 0x10bdc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F0 0B 01 00: mov eax, dword ptr [ebp + 0x10bf0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E0 0B 01 00: mov eax, dword ptr [ebp + 0x10be0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F4 0B 01 00: mov eax, dword ptr [ebp + 0x10bf4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E4 0B 01 00: mov eax, dword ptr [ebp + 0x10be4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 2C: cmp dword ptr [eax + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2c
        ; Exact mapped bytes 7E 16: jle 0x587f9a0d
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B0 8C 01 00 00: cmp dword ptr [eax + 0x18c], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587f9a0d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 B0 00 00 00: mov eax, dword ptr [eax + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9a0f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 00 0C 01 00: mov ecx, dword ptr [ebp + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9a44
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8B 00 00 00: cmp dword ptr [eax + 0x164], 0x8b
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587f9a6b
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B0 8C 01 00 00: cmp dword ptr [eax + 0x18c], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587f9a6b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 2C 02 00 00: mov eax, dword ptr [ecx + 0x22c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9a6d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D CC 0B 01 00: mov ecx, dword ptr [ebp + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9aa2
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8C 00 00 00: cmp dword ptr [eax + 0x164], 0x8c
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587f9ac9
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B0 8C 01 00 00: cmp dword ptr [eax + 0x18c], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587f9ac9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 30 02 00 00: mov eax, dword ptr [ecx + 0x230]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9acb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D D0 0B 01 00: mov ecx, dword ptr [ebp + 0x10bd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9b00
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D F0 0D 02 00: mov ecx, dword ptr [ebp + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 54 D8 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd8
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes D9 E8: fld1
        __asm _emit 0xd9
        __asm _emit 0xe8
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes D9 9D 1C 0A 01 00: fstp dword ptr [ebp + 0x10a1c]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 DC 0D 02 00: mov dword ptr [ebp + 0x20ddc], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 F3 01 00 00: jne 0x587f9d18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 AC 18 02 00: mov dword ptr [ebp + 0x218ac], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 CC 0D 02 00: mov dword ptr [ebp + 0x20dcc], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 C8 0D 02 00: mov dword ptr [ebp + 0x20dc8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 68 0D 02 00: mov dword ptr [ebp + 0x20d68], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 6C 0D 02 00: mov dword ptr [ebp + 0x20d6c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 70 0D 02 00: mov dword ptr [ebp + 0x20d70], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 74 0D 02 00: mov dword ptr [ebp + 0x20d74], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 78 0D 02 00: mov dword ptr [ebp + 0x20d78], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 89 85 7C 0D 02 00: mov dword ptr [ebp + 0x20d7c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 88 0D 02 00: lea ecx, [ebp + 0x20d88]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 85 80 0D 02 00: mov dword ptr [ebp + 0x20d80], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 85 84 0D 02 00: mov dword ptr [ebp + 0x20d84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 30 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 83 B8 60 01 00 00 0E: cmp dword ptr [eax + 0x160], 0xe
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0e
        ; Exact mapped bytes 7E 15: jle 0x587f9b9c
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9b9c
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 80 03 00 00: add eax, 0x380
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9b9e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 08 0E 02 00: mov ecx, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9bd3
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 0F: cmp dword ptr [eax + 0x160], 0xf
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 7E 15: jle 0x587f9bf6
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9bf6
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 03 00 00: add eax, 0x3c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9bf8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 10 0E 02 00: mov ecx, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9c2d
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 10: cmp dword ptr [eax + 0x160], 0x10
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes 7E 15: jle 0x587f9c50
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9c50
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 04 00 00: add eax, 0x400
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9c52
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 0C 0E 02 00: mov ecx, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9c87
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 11: cmp dword ptr [eax + 0x160], 0x11
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        ; Exact mapped bytes 7E 15: jle 0x587f9caa
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9caa
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 40 04 00 00: add eax, 0x440
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9cac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 14 0E 02 00: mov ecx, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9ce1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D EC 0D 02 00: mov ecx, dword ptr [ebp + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 72 D6 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D F4 0D 02 00: mov ecx, dword ptr [ebp + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 66 D6 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd6
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes 89 B5 E4 0D 02 00: mov dword ptr [ebp + 0x20de4], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 C9 C7 FE FF: call 0x587e64d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 68 0D 02 00: mov ecx, dword ptr [ebp + 0x20d68]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D E0 0D 02 00: mov dword ptr [ebp + 0x20de0], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 7A 02 00 00: jmp 0x587f9f92
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 12: cmp dword ptr [eax + 0x160], 0x12
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        ; Exact mapped bytes 7E 15: jle 0x587f9d3b
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9d3b
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 80 04 00 00: add eax, 0x480
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9d3d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 08 0E 02 00: mov ecx, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9d72
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 13: cmp dword ptr [eax + 0x160], 0x13
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x13
        ; Exact mapped bytes 7E 15: jle 0x587f9d95
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9d95
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 C0 04 00 00: add eax, 0x4c0
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9d97
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 10 0E 02 00: mov ecx, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9dcc
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 14: cmp dword ptr [eax + 0x160], 0x14
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 7E 15: jle 0x587f9def
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9def
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 05 00 00: add eax, 0x500
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9df1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 0C 0E 02 00: mov ecx, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9e26
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 1C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BA 15 00 00 00: mov edx, 0x15
        __asm _emit 0xba
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 90 60 01 00 00: cmp dword ptr [eax + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 15: jle 0x587f9e4d
        __asm _emit 0x7e
        __asm _emit 0x15
        ; Exact mapped bytes 39 B0 90 01 00 00: cmp dword ptr [eax + 0x190], esi
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0D: je 0x587f9e4d
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 40 05 00 00: add eax, 0x540
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587f9e4f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 14 0E 02 00: mov ecx, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 54: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 74 28: je 0x587f9e84
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 78 18: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x18
        ; Exact mapped bytes 89 79 0C: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 78 1C: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x1c
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes 89 79 10: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        ; Exact mapped bytes 8B 38: mov edi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x38
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 39: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 79 04: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 89 79 08: mov dword ptr [ecx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 55 6C: cmp dword ptr [ebp + 0x6c], edx
        __asm _emit 0x39
        __asm _emit 0x55
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 0F 95 C1: setne cl
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc1
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8D 95 88 0D 02 00: lea edx, [ebp + 0x20d88]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 8D AC 18 02 00: mov dword ptr [ebp + 0x218ac], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 68 0D 02 00: mov dword ptr [ebp + 0x20d68], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 6C 0D 02 00: mov dword ptr [ebp + 0x20d6c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 70 0D 02 00: mov dword ptr [ebp + 0x20d70], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 74 0D 02 00: mov dword ptr [ebp + 0x20d74], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 78 0D 02 00: mov dword ptr [ebp + 0x20d78], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 7C 0D 02 00: mov dword ptr [ebp + 0x20d7c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 80 0D 02 00: mov dword ptr [ebp + 0x20d80], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 84 0D 02 00: mov dword ptr [ebp + 0x20d84], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 2D 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2d
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D EC 0D 02 00: mov ecx, dword ptr [ebp + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 89 B5 CC 0D 02 00: mov dword ptr [ebp + 0x20dcc], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xcc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 C8 0D 02 00: mov dword ptr [ebp + 0x20dc8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 B5 E4 0D 02 00: mov dword ptr [ebp + 0x20de4], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 6A D4 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D F4 0D 02 00: mov ecx, dword ptr [ebp + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 5E D4 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 08 0E 02 00: mov ecx, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 FE FF FF: push 0xfffffed4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 CE 93 10 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 10 0E 02 00: mov ecx, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 FE FF FF: push 0xfffffed4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BE 93 10 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 0C 0E 02 00: mov ecx, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 FE FF FF: push 0xfffffed4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 AE 93 10 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 14 0E 02 00: mov ecx, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 68 D4 FE FF FF: push 0xfffffed4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 9E 93 10 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 08 0E 02 00: mov ecx, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 5D C4 FB FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 10 0E 02 00: mov ecx, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C C4 FB FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 0C 0E 02 00: mov ecx, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 3B C4 FB FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 14 0E 02 00: mov ecx, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes E8 2A C4 FB FF: call 0x587b63b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 68 0D 02 00: mov eax, dword ptr [ebp + 0x20d68]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 E0 0D 02 00: mov dword ptr [ebp + 0x20de0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D D0 0D 02 00: mov ecx, dword ptr [ebp + 0x20dd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 89 B5 D8 0D 02 00: mov dword ptr [ebp + 0x20dd8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 BC D3 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 D8 0D 02 00: mov eax, dword ptr [ebp + 0x20dd8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 3C 00 00 00: mov ecx, 0x3c
        __asm _emit 0xb9
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 8D D4 0D 02 00: mov ecx, dword ptr [ebp + 0x20dd4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A2 D3 10 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes E9 B2 06 00 00: jmp 0x587fa677
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BD F0 05 01 00 07: cmp word ptr [ebp + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 14: jne 0x587f9fe3
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes D9 05 58 BD 99 58: fld dword ptr [0x5899bd58]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 9D 20 0A 01 00: fstp dword ptr [ebp + 0x10a20]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 54 BD 99 58: fld dword ptr [0x5899bd54]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 12: jmp 0x587f9ff5
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes D9 05 4C BD 99 58: fld dword ptr [0x5899bd4c]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 9D 20 0A 01 00: fstp dword ptr [ebp + 0x10a20]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 44 BD 99 58: fld dword ptr [0x5899bd44]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 D0 0D 02 00: mov eax, dword ptr [ebp + 0x20dd0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes D9 9D 24 0A 01 00: fstp dword ptr [ebp + 0x10a24]
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0x24
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 D4 0D 02 00: mov eax, dword ptr [ebp + 0x20dd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0d
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
        ; Exact mapped bytes 8B 85 F4 0D 02 00: mov eax, dword ptr [ebp + 0x20df4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 EC 0D 02 00: mov eax, dword ptr [ebp + 0x20dec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 D4 0B 01 00: mov eax, dword ptr [ebp + 0x10bd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E8 0B 01 00: mov eax, dword ptr [ebp + 0x10be8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 DC 0B 01 00: mov eax, dword ptr [ebp + 0x10bdc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F0 0B 01 00: mov eax, dword ptr [ebp + 0x10bf0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E0 0B 01 00: mov eax, dword ptr [ebp + 0x10be0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F4 0B 01 00: mov eax, dword ptr [ebp + 0x10bf4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 E4 0B 01 00: mov eax, dword ptr [ebp + 0x10be4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F0 0D 02 00: mov eax, dword ptr [ebp + 0x20df0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 F8 0D 02 00: mov eax, dword ptr [ebp + 0x20df8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 00 0E 02 00: mov eax, dword ptr [ebp + 0x20e00]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 FC 0D 02 00: mov eax, dword ptr [ebp + 0x20dfc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 04 0E 02 00: mov eax, dword ptr [ebp + 0x20e04]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 08 0E 02 00: mov eax, dword ptr [ebp + 0x20e08]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 F0 FF 00 00: mov ecx, 0xfff0
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 10 0E 02 00: mov eax, dword ptr [ebp + 0x20e10]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x0e
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
        ; Exact mapped bytes 8B 85 0C 0E 02 00: mov eax, dword ptr [ebp + 0x20e0c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 14 0E 02 00: mov eax, dword ptr [ebp + 0x20e14]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 18 0E 02 00: mov eax, dword ptr [ebp + 0x20e18]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 1C 0E 02 00: mov eax, dword ptr [ebp + 0x20e1c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 85 F0 05 01 00: movzx eax, word ptr [ebp + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 6E: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 68: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 62: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 74 5C: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 74 56: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 66 83 F8 0D: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0d
        ; Exact mapped bytes 74 50: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 74 4A: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 74 44: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 66 83 F8 10: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 74 3E: je 0x587fa165
        __asm _emit 0x74
        __asm _emit 0x3e
        ; Exact mapped bytes 8D 8D 58 1C 02 00: lea ecx, [ebp + 0x21c58]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 56 01: lea edx, [esi + 1]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x01
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BB FE FF 00 00: mov ebx, 0xfffe
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D6: sub edx, esi
        __asm _emit 0x2b
        __asm _emit 0xd6
        ; Exact mapped bytes 75 EE: jne 0x587fa130
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes 8B 85 60 1C 02 00: mov eax, dword ptr [ebp + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 64 1C 02 00: mov eax, dword ptr [ebp + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x1c
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
        ; Exact mapped bytes 89 BD 68 1C 02 00: mov dword ptr [ebp + 0x21c68], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 58 1C 02 00: lea ecx, [ebp + 0x21c58]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 2B D6: sub edx, esi
        __asm _emit 0x2b
        __asm _emit 0xd6
        ; Exact mapped bytes 75 F3: jne 0x587fa170
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 8B 85 60 1C 02 00: mov eax, dword ptr [ebp + 0x21c60]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 64 1C 02 00: mov eax, dword ptr [ebp + 0x21c64]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 50 12 00 00: mov ecx, dword ptr [esp + 0x1250]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8D 51 FF: lea edx, [ecx - 1]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 FA 7F: cmp edx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x7f
        ; Exact mapped bytes 77 04: ja 0x587fa1a6
        __asm _emit 0x77
        __asm _emit 0x04
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 16: jmp 0x587fa1bc
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 49 0C: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0c
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 74 09: je 0x587fa1bc
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 49 78: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x78
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 F7: jne 0x587fa1b3
        __asm _emit 0x75
        __asm _emit 0xf7
        ; Exact mapped bytes 0F B7 8D F0 05 01 00: movzx ecx, word ptr [ebp + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 0B: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x587fa2a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8D A4 05 01 00: movzx ecx, word ptr [ebp + 0x105a4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B CE: cmp cx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 75 1B: jne 0x587fa1f4
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 7F 0F: jg 0x587fa1ed
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes EB 46: jmp 0x587fa23a
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 21: jne 0x587fa21b
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 83 F8 0C: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0c
        ; Exact mapped bytes 7F 0F: jg 0x587fa20e
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 F8 10: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x10
        ; Exact mapped bytes 0F 9F C1: setg cl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc1
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x587fa33e
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 34: jne 0x587fa255
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes 7F 0F: jg 0x587fa235
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 F8 3C: cmp eax, 0x3c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x3c
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 81 E2 68 C5 FF FF: and edx, 0xffffc568
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x68
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C2 C8 AF 00 00: add edx, 0xafc8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 68 1C 02 00: mov dword ptr [ebp + 0x21c68], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 75 2C: jne 0x587fa287
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 83 F8 14: cmp eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x14
        ; Exact mapped bytes 7F 0F: jg 0x587fa26f
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 8F D9 00 00 00: jg 0x587fa351
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 85 68 1C 02 00 30 75 00 00: mov dword ptr [ebp + 0x21c68], 0x7530
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 7F 0F: jg 0x587fa29b
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 0F 9F C1: setg cl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc1
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x587fa33e
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 14: jne 0x587fa2c2
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 7D 55: jge 0x587fa308
        __asm _emit 0x7d
        __asm _emit 0x55
        ; Exact mapped bytes C7 85 68 1C 02 00 50 46 00 00: mov dword ptr [ebp + 0x21c68], 0x4650
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x587fa351
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 0D: cmp cx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0d
        ; Exact mapped bytes 75 28: jne 0x587fa2f0
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 7D 0C: jge 0x587fa2d9
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes C7 85 68 1C 02 00 50 46 00 00: mov dword ptr [ebp + 0x21c68], 0x4650
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 78: jmp 0x587fa351
        __asm _emit 0xeb
        __asm _emit 0x78
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 F8 48: cmp eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x48
        ; Exact mapped bytes 0F 9D C1: setge cl
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc1
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 81 E1 20 D1 FF FF: and ecx, 0xffffd120
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 A0 8C 00 00: add ecx, 0x8ca0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5B: jmp 0x587fa34b
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 66 83 F9 10: cmp cx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x10
        ; Exact mapped bytes 74 B8: je 0x587fa2ae
        __asm _emit 0x74
        __asm _emit 0xb8
        ; Exact mapped bytes 66 83 F9 0F: cmp cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0f
        ; Exact mapped bytes 75 29: jne 0x587fa325
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes C7 85 68 1C 02 00 30 75 00 00: mov dword ptr [ebp + 0x21c68], 0x7530
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x587fa351
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 83 F8 48: cmp eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x48
        ; Exact mapped bytes 0F 9D C2: setge dl
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc2
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 81 E2 20 D1 FF FF: and edx, 0xffffd120
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C2 A0 8C 00 00: add edx, 0x8ca0
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 95 68 1C 02 00: mov dword ptr [ebp + 0x21c68], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x587fa351
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 83 F8 30: cmp eax, 0x30
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x30
        ; Exact mapped bytes 7D 0C: jge 0x587fa336
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes C7 85 68 1C 02 00 E4 57 00 00: mov dword ptr [ebp + 0x21c68], 0x57e4
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x587fa351
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 83 F8 48: cmp eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x48
        ; Exact mapped bytes 0F 9D C1: setge cl
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc1
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 81 E1 68 C5 FF FF: and ecx, 0xffffc568
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x68
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 C8 AF 00 00: add ecx, 0xafc8
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 68 1C 02 00: mov dword ptr [ebp + 0x21c68], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 10 46 A2 58: mov eax, dword ptr [0x58a24610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 26: cmp dword ptr [eax + 0x164], 0x26
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x26
        ; Exact mapped bytes 7E 16: jle 0x587fa375
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa375
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 98 00 00 00: mov eax, dword ptr [edx + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa377
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 00 0C 01 00: mov ecx, dword ptr [ebp + 0x10c00]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa3ac
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 BD A2 05 01 00 02: cmp word ptr [ebp + 0x105a2], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x587fa483
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F8 0B 01 00: mov eax, dword ptr [ebp + 0x10bf8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 69: cmp dword ptr [eax + 0x164], 0x69
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x69
        ; Exact mapped bytes 7E 16: jle 0x587fa3e8
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa3e8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 A4 01 00 00: mov eax, dword ptr [ecx + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa3ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D CC 0B 01 00: mov ecx, dword ptr [ebp + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa41f
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A8 46 A2 58: mov eax, dword ptr [0x58a246a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 6A: cmp dword ptr [eax + 0x164], 0x6a
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6a
        ; Exact mapped bytes 7E 16: jle 0x587fa443
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa443
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 A8 01 00 00: mov eax, dword ptr [ecx + 0x1a8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa445
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D D0 0B 01 00: mov ecx, dword ptr [ebp + 0x10bd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 84 21 02 00 00: je 0x587fa677
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes E9 F4 01 00 00: jmp 0x587fa677
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 85 F0 05 01 00: movzx eax, word ptr [ebp + 0x105f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0B: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0E: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0F: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x587fa5a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F8 0B 01 00: mov eax, dword ptr [ebp + 0x10bf8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8C 06 00 00: cmp dword ptr [eax + 0x164], 0x68c
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587fa506
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa506
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 30 1A 00 00: mov eax, dword ptr [edx + 0x1a30]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x30
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa508
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D CC 0B 01 00: mov ecx, dword ptr [ebp + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa53d
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8D 06 00 00: cmp dword ptr [eax + 0x164], 0x68d
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587fa564
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa564
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 34 1A 00 00: mov eax, dword ptr [ecx + 0x1a34]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa566
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D D0 0B 01 00: mov ecx, dword ptr [ebp + 0x10bd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa59b
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 89 BD E8 04 01 00: mov dword ptr [ebp + 0x104e8], edi
        __asm _emit 0x89
        __asm _emit 0xbd
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x587fa677
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F8 0B 01 00: mov eax, dword ptr [ebp + 0x10bf8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8D 00 00 00: cmp dword ptr [eax + 0x164], 0x8d
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587fa5dc
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa5dc
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 34 02 00 00: mov eax, dword ptr [edx + 0x234]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa5de
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D CC 0B 01 00: mov ecx, dword ptr [ebp + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa613
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 8E 00 00 00: cmp dword ptr [eax + 0x164], 0x8e
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 16: jle 0x587fa63a
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 39 B8 8C 01 00 00: cmp dword ptr [eax + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x587fa63a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 38 02 00 00: mov eax, dword ptr [ecx + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587fa63c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D D0 0B 01 00: mov ecx, dword ptr [ebp + 0x10bd0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 28: je 0x587fa671
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 50 10: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x10
        ; Exact mapped bytes 89 51 0C: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 50 14: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 89 51 04: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 51 08: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 89 B5 E8 04 01 00: mov dword ptr [ebp + 0x104e8], esi
        __asm _emit 0x89
        __asm _emit 0xb5
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D 74 45 A2 58: cmp dword ptr [0x58a24574], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 DB 07 00 00: je 0x587fae5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 40: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 68 CC C4 99 58: push 0x5899c4cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 80 C1 98 58: call dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 1D C4 C3 98 58: mov ebx, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 8C 24 40 01 00 00: lea ecx, [esp + 0x140]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 0C C4 99 58: push 0x5899c40c
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes A3 D4 B4 A0 58: mov dword ptr [0x58a0b4d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 3D A8 C1 98 58: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 A0 C1 98 58: mov esi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 84 24 40 01 00 00: lea eax, [esp + 0x140]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 5C CD 99 58: push 0x5899cd5c
        __asm _emit 0x68
        __asm _emit 0x5c
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 48 01 00 00: lea edx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8D 94 24 40 01 00 00: lea edx, [esp + 0x140]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 54 C4 99 58: push 0x5899c454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 48 01 00 00: lea ecx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 4C 01 00 00: lea edx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 07: jmp 0x587fa760
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FA760 .. +0x75F bytes.
extern "C" __declspec(naked) void FUN_587f8760_segment_07() {
    __asm {
        ; Exact mapped bytes 8B 0C BD 58 25 A1 58: mov ecx, dword ptr [edi*4 + 0x58a12558]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 8B 14 BD 18 ED A0 58: mov edx, dword ptr [edi*4 + 0x58a0ed18]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 04 BD D8 B4 A0 58: mov eax, dword ptr [edi*4 + 0x58a0b4d8]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0xd8
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 8C 24 50 01 00 00: lea ecx, [esp + 0x150]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C CD 99 58: push 0x5899cd1c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 81 FF 10 0E 00 00: cmp edi, 0xe10
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C A5: jl 0x587fa760
        __asm _emit 0x7c
        __asm _emit 0xa5
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 BD E0 7C A1 58: mov eax, dword ptr [edi*4 + 0x58a17ce0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0xe0
        __asm _emit 0x7c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C BD 3C 6D A1 58: mov ecx, dword ptr [edi*4 + 0x58a16d3c]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x3c
        __asm _emit 0x6d
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 8B 14 BD 98 5D A1 58: mov edx, dword ptr [edi*4 + 0x58a15d98]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x5d
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 84 24 50 01 00 00: lea eax, [esp + 0x150]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E4 CC 99 58: push 0x5899cce4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 48 01 00 00: lea edx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 81 FF E8 03 00 00: cmp edi, 0x3e8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C A5: jl 0x587fa7c0
        __asm _emit 0x7c
        __asm _emit 0xa5
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 BD A8 8C A1 58: mov edx, dword ptr [edi*4 + 0x58a18ca8]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0xa8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 8B 04 BD A4 8C A1 58: mov eax, dword ptr [edi*4 + 0x58a18ca4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0xa4
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0C BD A0 8C A1 58: mov ecx, dword ptr [edi*4 + 0x58a18ca0]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0xa0
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 14 BD 9C 8C A1 58: mov edx, dword ptr [edi*4 + 0x58a18c9c]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 04 BD 98 8C A1 58: mov eax, dword ptr [edi*4 + 0x58a18c98]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C BD 94 8C A1 58: mov ecx, dword ptr [edi*4 + 0x58a18c94]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x94
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 14 BD 90 8C A1 58: mov edx, dword ptr [edi*4 + 0x58a18c90]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 04 BD 8C 8C A1 58: mov eax, dword ptr [edi*4 + 0x58a18c8c]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C BD 88 8C A1 58: mov ecx, dword ptr [edi*4 + 0x58a18c88]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xbd
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 14 BD 84 8C A1 58: mov edx, dword ptr [edi*4 + 0x58a18c84]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0xbd
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 84 24 6C 01 00 00: lea eax, [esp + 0x16c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A8 CC 99 58: push 0x5899cca8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 34: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x34
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 48 01 00 00: lea edx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 83 C7 0A: add edi, 0xa
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x0a
        ; Exact mapped bytes 81 FF 10 27 00 00: cmp edi, 0x2710
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C 67 FF FF FF: jl 0x587fa820
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 7A 0C: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x0c
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 59 05 00 00: je 0x587fae23
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BF 0C 10 00 00 00: cmp dword ptr [edi + 0x100c], 0
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 35 05 00 00: je 0x587fae12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 A4 0D 00 00: mov eax, dword ptr [edi + 0xda4]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F 9C 0D 00 00: mov ecx, dword ptr [edi + 0xd9c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x9c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 A8 0D 00 00: mov edx, dword ptr [edi + 0xda8]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0xa8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 87 A0 0D 00 00: mov eax, dword ptr [edi + 0xda0]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xa0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8F BC 0D 00 00: mov ecx, dword ptr [edi + 0xdbc]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 97 98 03 00 00: mov edx, dword ptr [edi + 0x398]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B6 97 55 03 00 00: movzx edx, byte ptr [edi + 0x355]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x97
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 87 52 03 00 00: movzx eax, word ptr [edi + 0x352]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 97 50 03 00 00: movzx edx, word ptr [edi + 0x350]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 87 54 03 00 00: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8F A0 03 00 00: lea ecx, [edi + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 74 01 00 00: lea ecx, [esp + 0x174]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 38 CC 99 58: push 0x5899cc38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xcc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 A0 C1 98 58: mov esi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 87 F0 0D 00 00: mov eax, dword ptr [edi + 0xdf0]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F F8 0D 00 00: mov ecx, dword ptr [edi + 0xdf8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8F B8 0D 00 00: mov ecx, dword ptr [edi + 0xdb8]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8F B4 0D 00 00: mov ecx, dword ptr [edi + 0xdb4]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 50 01 00 00: lea edx, [esp + 0x150]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 CB 99 58: push 0x5899cbe0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xcb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 48 01 00 00: lea ecx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 D4 B4 A0 58: mov eax, dword ptr [0x58a0b4d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8D 94 24 4C 01 00 00: lea edx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 0F B7 8F 6C 0C 00 00: movzx ecx, word ptr [edi + 0xc6c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8f
        __asm _emit 0x6c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 97 6A 0C 00 00: movzx edx, word ptr [edi + 0xc6a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x97
        __asm _emit 0x6a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 87 68 0C 00 00: movzx eax, word ptr [edi + 0xc68]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 A0 CB 99 58: push 0x5899cba0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0xcb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8F 3C 02 00 00: mov ecx, dword ptr [edi + 0x23c]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 44: mov edx, dword ptr [ecx + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x44
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 0F AF 51 38: imul edx, dword ptr [ecx + 0x38]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x51
        __asm _emit 0x38
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 41 44: mov eax, dword ptr [ecx + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x44
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 48 01 00 00: lea ecx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 70 CB 99 58: push 0x5899cb70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xcb
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8D B7 78 08 00 00: lea esi, [edi + 0x878]
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 20 00 00 00: mov dword ptr [esp + 0x1c], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4E 02: movzx ecx, word ptr [esi + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x02
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 16: movzx edx, word ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x16
        ; Exact mapped bytes 0F B7 4E FE: movzx ecx, word ptr [esi - 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0xfe
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 56 FC: movzx edx, word ptr [esi - 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0xfc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 4E FA: movzx ecx, word ptr [esi - 6]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0xfa
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 56 F8: movzx edx, word ptr [esi - 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 8E 02 FC FF FF: movzx ecx, word ptr [esi - 0x3fe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 96 00 FC FF FF: movzx edx, word ptr [esi - 0x400]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 8E FE FB FF FF: movzx ecx, word ptr [esi - 0x402]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 96 FC FB FF FF: movzx edx, word ptr [esi - 0x404]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 04 FC FF FF: mov eax, dword ptr [esi - 0x3fc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B7 8E FA FB FF FF: movzx ecx, word ptr [esi - 0x406]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 96 F8 FB FF FF: movzx edx, word ptr [esi - 0x408]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B6 8E 08 FC FF FF: movzx ecx, byte ptr [esi - 0x3f8]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 F4 FB FF FF: mov edx, dword ptr [esi - 0x40c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 81 F1 00 00 A0 0A: xor ecx, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa0
        __asm _emit 0x0a
        ; Exact mapped bytes C1 E9 14: shr ecx, 0x14
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x14
        ; Exact mapped bytes 81 F2 00 A8 02 00: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF 03 00 00: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F B6 8E F2 FB FF FF: movzx ecx, byte ptr [esi - 0x40e]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0xf2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C1 EA 0A: shr edx, 0xa
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E2 FF 03 00 00: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B6 96 F1 FB FF FF: movzx edx, byte ptr [esi - 0x40f]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 25 FF 03 00 00: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 86 F3 FB FF FF: movzx eax, byte ptr [esi - 0x40d]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F B6 86 F0 FB FF FF: movzx eax, byte ptr [esi - 0x410]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 94 01 00 00: lea ecx, [esp + 0x194]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 88 CA 99 58: push 0x5899ca88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xca
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 5C: add esp, 0x5c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x5c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C6 20: add esi, 0x20
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x20
        ; Exact mapped bytes 83 6C 24 1C 01: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F8 FE FF FF: jne 0x587faac7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 10 00 00 00 00: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B7 C8 49 00 00: lea esi, [edi + 0x49c8]
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0xc8
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 56 FC: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 F8: mov eax, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E F4: mov ecx, dword ptr [esi - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 F0: mov edx, dword ptr [esi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 EC: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E E8: mov ecx, dword ptr [esi - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xe8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 E4: mov edx, dword ptr [esi - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 E0: mov eax, dword ptr [esi - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E DC: mov ecx, dword ptr [esi - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xdc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 D8: mov edx, dword ptr [esi - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 38: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 74 01 00 00: lea ecx, [esp + 0x174]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 20 CA 99 58: push 0x5899ca20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xca
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 3C: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x3c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C6 30: add esi, 0x30
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x30
        ; Exact mapped bytes 83 F8 78: cmp eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x78
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 8C 7A FF FF FF: jl 0x587fabe0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 87 DC 18 00 00: lea eax, [edi + 0x18dc]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0xdc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E4 C9 99 58: push 0x5899c9e4
        __asm _emit 0x68
        __asm _emit 0xe4
        __asm _emit 0xc9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 48 01 00 00: lea edx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 44 24 14 08: add dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 83 FE 78: cmp esi, 0x78
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x78
        ; Exact mapped bytes 7C AC: jl 0x587fac72
        __asm _emit 0x7c
        __asm _emit 0xac
        ; Exact mapped bytes 8D 97 BC 17 00 00: lea edx, [edi + 0x17bc]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 10 00 00 00 00: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D B7 08 43 00 00: lea esi, [edi + 0x4308]
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 56 FC: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 F8: mov eax, dword ptr [esi - 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E F4: mov ecx, dword ptr [esi - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xf4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 F0: mov edx, dword ptr [esi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 EC: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E E8: mov ecx, dword ptr [esi - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xe8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 E4: mov edx, dword ptr [esi - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xe4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 E0: mov eax, dword ptr [esi - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E DC: mov ecx, dword ptr [esi - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xdc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 D8: mov edx, dword ptr [esi - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 3C: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 E4 FE FF FF: mov ecx, dword ptr [eax - 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 90 E0 FE FF FF: mov edx, dword ptr [eax - 0x120]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 48: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 84 01 00 00: lea ecx, [esp + 0x184]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 58 C9 99 58: push 0x5899c958
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xc9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 4C: add esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x4c
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 87 9C 1C 00 00: lea eax, [edi + 0x1c9c]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 20: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 05 60 05 00 00: add eax, 0x560
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 1C: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C7 44 24 24 20 00 00 00: mov dword ptr [esp + 0x24], 0x20
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 50 01 00 00: lea ecx, [esp + 0x150]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 18 C9 99 58: push 0x5899c918
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xc9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 54 24 1C: lea edx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 84 24 48 01 00 00: lea eax, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 D4 B4 A0 58: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8C 24 4C 01 00 00: lea ecx, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A0 C1 98 58: call dword ptr [0x5898c1a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 44 24 20 04: add dword ptr [esp + 0x20], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        ; Exact mapped bytes 81 44 24 1C 20 01 00 00: add dword ptr [esp + 0x1c], 0x120
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 6C 24 24 01: sub dword ptr [esp + 0x24], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 75 98: jne 0x587fad90
        __asm _emit 0x75
        __asm _emit 0x98
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 44 24 14 08: add dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C6 30: add esi, 0x30
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x30
        ; Exact mapped bytes 83 F8 24: cmp eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x24
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 8C CE FE FF FF: jl 0x587face0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 85 B3 FA FF FF: jne 0x587fa8d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 A0 C1 98 58: mov esi, dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8D 84 24 40 01 00 00: lea eax, [esp + 0x140]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 54 C4 99 58: push 0x5899c454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 94 24 48 01 00 00: lea edx, [esp + 0x148]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 B4 A0 58: mov ecx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 84 24 4C 01 00 00: lea eax, [esp + 0x14c]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 85 30 04 00 00: mov dword ptr [ebp + 0x430], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 85 34 04 00 00: mov dword ptr [ebp + 0x434], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 0F B6 88 54 03 00 00: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 84 29 30 04 00 00 01: mov byte ptr [ecx + ebp + 0x430], 1
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 39 BD 38 1C 02 00: cmp dword ptr [ebp + 0x21c38], edi
        __asm _emit 0x39
        __asm _emit 0xbd
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x587fae98
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 68 08 C9 99 58: push 0x5899c908
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xc9
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D8 04 FF FF: call 0x587eb370
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 43 DD F4 FF: call 0x58748be0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdd
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 1C D9 F4 FF: call 0x587487c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8C 24 40 12 00 00: mov ecx, dword ptr [esp + 0x1240]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x12
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
        ; Exact mapped bytes E8 24 1D 18 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 34 12 00 00: add esp, 0x1234
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x34
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
