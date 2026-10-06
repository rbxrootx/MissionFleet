// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EF330 .. +0x5D7 bytes.
extern "C" __declspec(naked) void FUN_587ef330() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 86 EF 97 58: push 0x5897ef86
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0xef
        __asm _emit 0x97
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 4C 0B 01 00: mov eax, dword ptr [esi + 0x10b4c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 4C 0B 01 00: mov eax, dword ptr [esi + 0x10b4c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BA FF BF 00 00: mov edx, 0xbfff
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 66 83 B8 04 02 00 00 0F: cmp word ptr [eax + 0x204], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0f
        ; Exact mapped bytes 75 70: jne 0x587ef3fc
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 41 0C: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 63: je 0x587ef3fc
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 98 BC 60 00 00: cmp dword ptr [eax + 0x60bc], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4D: je 0x587ef3f5
        __asm _emit 0x74
        __asm _emit 0x4d
        ; Exact mapped bytes 0F B7 88 F0 64 00 00: movzx ecx, word ptr [eax + 0x64f0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x88
        __asm _emit 0xf0
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes BF 84 03 00 00: mov edi, 0x384
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 11: jne 0x587ef3cd
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 96 4C 1C 02 00: mov edx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 10 09 00 00: mov edx, dword ptr [edx + 0x910]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 52 14: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB 1B: jmp 0x587ef3e8
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes BA 8C 0A 00 00: mov edx, 0xa8c
        __asm _emit 0xba
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 75 1B: jne 0x587ef3f5
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 96 4C 1C 02 00: mov edx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 92 10 09 00 00: mov edx, dword ptr [edx + 0x910]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 12: mov edx, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x12
        ; Exact mapped bytes 0F B6 88 54 03 00 00: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8A B8 00 00 00: mov dword ptr [edx + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 78: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x78
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 A4: jne 0x587ef3a0
        __asm _emit 0x75
        __asm _emit 0xa4
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 DC 38 11 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 FF FF FF: push 0xffffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 10 39 11 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 30 0D 02 00: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 58 00 01 00 00: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 89 9E 40 0D 02 00: mov dword ptr [esi + 0x20d40], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A 50 01 00 00: mov ecx, dword ptr [edx + 0x150]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x01
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
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 ED: jne 0x587ef450
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 66 83 BE F0 05 01 00 0A: cmp word ptr [esi + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x587ef560
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 D7 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd7
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 7C 24 14: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 5C 24 20: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 6B: je 0x587ef4f4
        __asm _emit 0x74
        __asm _emit 0x6b
        ; Exact mapped bytes A1 D0 46 A2 58: mov eax, dword ptr [0x58a246d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 98 60 01 00 00: cmp dword ptr [eax + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x587ef4a6
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 39 98 90 01 00 00: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587ef4a6
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B A8 90 01 00 00: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xa8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ef4a8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 8B 86 24 05 01 00: mov eax, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 E4 3C 11 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C7 07 74 CA 98 58: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 5F 50: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x50
        ; Exact mapped bytes 89 6F 54: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 74 2A: je 0x587ef4f6
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 45 18: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 89 47 0C: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D 1C: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 45 20: lea eax, [ebp + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 89 4F 10: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x10
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 89 57 14: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4F 18: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4f
        __asm _emit 0x18
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 57 1C: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 47 20: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x587ef4f6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 84 00 00 00: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 B4 00 00 00: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 81 AC 00 00 00: imul eax, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x81
        __asm _emit 0xac
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
        ; Exact mapped bytes 2D BC 02 00 00: sub eax, 0x2bc
        __asm _emit 0x2d
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C7 44 24 28 FF FF FF FF: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4F 3D 11 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3d
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 01 01 00 00: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CF 37 11 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 FF 7F 00 00: mov ecx, 0x7fff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 01 00 00 00: mov ebp, 1
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 6C 90 9C 58: cmp dword ptr [0x589c906c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x6c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 75 39: jne 0x587ef5ac
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes B9 0A 00 00 00: mov ecx, 0xa
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 8E F0 05 01 00: cmp word ptr [esi + 0x105f0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x587ef59a
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 66 39 8E F0 05 01 00: cmp word ptr [esi + 0x105f0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 3D: jne 0x587ef5cb
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes EB 31: jmp 0x587ef5cb
        __asm _emit 0xeb
        __asm _emit 0x31
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
        ; Exact mapped bytes 66 39 8E F0 05 01 00: cmp word ptr [esi + 0x105f0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x587ef5bd
        __asm _emit 0xeb
        __asm _emit 0x11
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
        ; Exact mapped bytes 66 83 BE F0 05 01 00 0A: cmp word ptr [esi + 0x105f0], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 75 0C: jne 0x587ef5cb
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 86 84 00 00 00: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes B8 FF E1 00 00: mov eax, 0xe1ff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes B9 00 01 00 00: mov ecx, 0x100
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 39 1D 3C 90 9C 58: cmp dword ptr [0x589c903c], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x3c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 74 6C: je 0x587ef660
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 54: push 0x54
        __asm _emit 0x6a
        __asm _emit 0x54
        ; Exact mapped bytes E8 53 D6 18 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 44: je 0x587ef64e
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 15 00 46 A2 58: mov edx, dword ptr [0x58a24600]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 9A 60 01 00 00: cmp dword ptr [edx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x587ef628
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 39 9A 90 01 00 00: cmp dword ptr [edx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 08: je 0x587ef628
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 92 90 01 00 00: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587ef62a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 68 D0 07 00 00: push 0x7d0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 24 05 01 00: mov edx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes E8 E2 17 11 00: call 0x58900e20
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 20 FF FF FF FF: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 44 05 01 00: mov dword ptr [esi + 0x10544], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x587ef666
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C7 44 24 20 FF FF FF FF: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 86 44 05 01 00: mov dword ptr [esi + 0x10544], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x587ef666
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 9E 44 05 01 00: mov dword ptr [esi + 0x10544], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 01 00: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes BF AA AA AA AA: mov edi, 0xaaaaaaaa
        __asm _emit 0xbf
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 31 BE 4C 05 01 00: xor dword ptr [esi + 0x1054c], edi
        __asm _emit 0x31
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 BE 50 05 01 00: xor dword ptr [esi + 0x10550], edi
        __asm _emit 0x31
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 B0 00 00 00: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 A8 00 00 00: imul edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
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
        ; Exact mapped bytes 89 86 4C 05 01 00: mov dword ptr [esi + 0x1054c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 B4 00 00 00: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 91 AC 00 00 00: imul edx, dword ptr [ecx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x91
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 4C 05 01 00: mov ecx, dword ptr [esi + 0x1054c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B8 83 BE A0 2F: mov eax, 0x2fa0be83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa0
        __asm _emit 0x2f
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 86 50 05 01 00: mov dword ptr [esi + 0x10550], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A 1E 18 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1e
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 50 05 01 00: mov edx, dword ptr [esi + 0x10550]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 96 4C 05 01 00: imul edx, dword ptr [esi + 0x1054c]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 86 48 05 01 00: mov dword ptr [esi + 0x10548], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 D5 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd5
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 31 BE 4C 05 01 00: xor dword ptr [esi + 0x1054c], edi
        __asm _emit 0x31
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 31 BE 50 05 01 00: xor dword ptr [esi + 0x10550], edi
        __asm _emit 0x31
        __asm _emit 0xbe
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 45 A2 58: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes BF 00 03 00 00: mov edi, 0x300
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 89 78 54: mov dword ptr [eax + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes E8 47 53 0A 00: call 0x58894a60
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 CC 0B 01 00: mov eax, dword ptr [esi + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
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
        ; Exact mapped bytes 8B 86 4C 0B 01 00: mov eax, dword ptr [esi + 0x10b4c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
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
        ; Exact mapped bytes 89 78 54: mov dword ptr [eax + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x54
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 53 0A 00: call 0x58894a60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 34 0D 02 00: mov eax, dword ptr [esi + 0x20d34]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8E 30 0D 02 00: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 01 F7 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 94 0B 01 00: mov ecx, dword ptr [esi + 0x10b94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8E 98 0B 01 00: mov ecx, dword ptr [esi + 0x10b98]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes A1 D4 48 A2 58: mov eax, dword ptr [0x58a248d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 52 0C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 9C 0B 01 00: mov ecx, dword ptr [esi + 0x10b9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 8E 94 0B 01 00: mov ecx, dword ptr [esi + 0x10b94]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 90 0B 01 00: mov dword ptr [esi + 0x10b90], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E A0 0B 01 00: mov dword ptr [esi + 0x10ba0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A4 0B 01 00 0B 00 00 00: mov dword ptr [esi + 0x10ba4], 0xb
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 A8 0B 01 00 14 00 00 00: mov dword ptr [esi + 0x10ba8], 0x14
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE AC 0B 01 00: mov dword ptr [esi + 0x10bac], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 96 A0 0C 02 00: lea edx, [esi + 0x20ca0]
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 AE B0 0B 01 00: mov dword ptr [esi + 0x10bb0], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE B4 0B 01 00: mov dword ptr [esi + 0x10bb4], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 64 D4 18 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 BE 70 1C 02 00: mov dword ptr [esi + 0x21c70], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 74 1C 02 00: mov dword ptr [esi + 0x21c74], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x74
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 93 C2 FF FF: call 0x587eba90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 F4 1E 02 00: mov eax, dword ptr [esi + 0x21ef4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes B9 FE FF 00 00: mov ecx, 0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE F0 1E 02 00: mov dword ptr [esi + 0x21ef0], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 7C 04 01 00: mov dword ptr [esi + 0x1047c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 F8 1E 02 00: mov eax, dword ptr [esi + 0x21ef8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0x1e
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
        ; Exact mapped bytes 88 9E 00 1F 02 00: mov byte ptr [esi + 0x21f00], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E B0 18 02 00: cmp dword ptr [esi + 0x218b0], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x587ef852
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 86 48 1C 02 00: mov eax, dword ptr [esi + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 50: mov ecx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 83 B9 34 01 00 00 03: cmp dword ptr [ecx + 0x134], 3
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 88 9E 00 1F 02 00: mov byte ptr [esi + 0x21f00], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 76 0E: jbe 0x587ef858
        __asm _emit 0x76
        __asm _emit 0x0e
        ; Exact mapped bytes 89 AE FC 1E 02 00: mov dword ptr [esi + 0x21efc], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587ef85e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 88 9E 00 1F 02 00: mov byte ptr [esi + 0x21f00], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E FC 1E 02 00: mov dword ptr [esi + 0x21efc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE A2 05 01 00 07: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        ; Exact mapped bytes 75 0C: jne 0x587ef874
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 15 A4 45 A2 58: mov edx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 9A D8 08 00 00: mov dword ptr [edx + 0x8d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9a
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 E4 1C 02 00: mov dword ptr [esi + 0x21ce4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
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
        ; Exact mapped bytes 89 81 B8 00 00 00: mov dword ptr [ecx + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C0 45 A2 58: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B BA 54 01 00 00: mov edi, dword ptr [edx + 0x154]
        __asm _emit 0x8b
        __asm _emit 0xba
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 74 A2 99 58: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 87 80 00 00 00: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 87 80 00 00 00: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 50 01: lea edx, [eax + 1]
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x01
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 3A CB: cmp cl, bl
        __asm _emit 0x3a
        __asm _emit 0xcb
        ; Exact mapped bytes 75 F9: jne 0x587ef8c0
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 89 87 8C 00 00 00: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 87 94 00 00 00: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE E8 1C 02 00: mov dword ptr [esi + 0x21ce8], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xe8
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
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 09 D5 09 00: call 0x5888cdf0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 0C 09 01 00: mov dword ptr [esi + 0x1090c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 2C 1D 02 00: mov dword ptr [esi + 0x21d2c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
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
