// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876DF80 .. +0x474 bytes.
extern "C" __declspec(naked) void FUN_5876df80_5876DF80() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 58 04 00 00: je 0x5876e3e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 3D 2C C4 98 58: mov edi, dword ptr [0x5898c42c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BD 00 01 00 00: mov ebp, 0x100
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 41: je 0x5876dfeb
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 39: jne 0x5876dfeb
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 38 98 98 00 00 00: cmp byte ptr [eax + 0x98], bl
        __asm _emit 0x38
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 29: je 0x5876dfe3
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 38 9E 94 00 00 00: cmp byte ptr [esi + 0x94], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 21: jne 0x5876dfe3
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes C6 86 94 00 00 00 01: mov byte ptr [esi + 0x94], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 89 6E 7C: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x7c
        ; Exact mapped bytes C7 46 74 00 00 00 40: mov dword ptr [esi + 0x74], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes E8 02 4D 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4d
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x5876e0a5
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 9E 97 00 00 00: cmp byte ptr [esi + 0x97], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x5876e04d
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4A: je 0x5876e03f
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x5876e03f
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 88 8C 00 00 00: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 88 90 00 00 00: cmp ecx, dword ptr [eax + 0x90]
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 80 94 00 00 00: mov al, byte ptr [eax + 0x94]
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 1B D2: sbb edx, edx
        __asm _emit 0x1b
        __asm _emit 0xd2
        ; Exact mapped bytes F7 DA: neg edx
        __asm _emit 0xf7
        __asm _emit 0xda
        ; Exact mapped bytes 84 D0: test al, dl
        __asm _emit 0x84
        __asm _emit 0xd0
        ; Exact mapped bytes 74 CC: je 0x5876dfe3
        __asm _emit 0x74
        __asm _emit 0xcc
        ; Exact mapped bytes 38 9E 94 00 00 00: cmp byte ptr [esi + 0x94], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 C4: jne 0x5876dfe3
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C6 86 94 00 00 00 01: mov byte ptr [esi + 0x94], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 89 6E 7C: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x7c
        ; Exact mapped bytes C7 46 74 00 00 00 40: mov dword ptr [esi + 0x74], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes E8 A3 4C 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 66: jmp 0x5876e0a5
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes 38 9E 97 00 00 00: cmp byte ptr [esi + 0x97], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 5E: jne 0x5876e0a5
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 56: jne 0x5876e0a5
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 39 9E 84 00 00 00: cmp dword ptr [esi + 0x84], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x5876e05f
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 89 86 84 00 00 00: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 2B 86 84 00 00 00: sub eax, dword ptr [esi + 0x84]
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 88 00 00 00: cmp eax, dword ptr [esi + 0x88]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 36: jbe 0x5876e0a5
        __asm _emit 0x76
        __asm _emit 0x36
        ; Exact mapped bytes 38 9E 96 00 00 00: cmp byte ptr [esi + 0x96], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x5876e097
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C6 86 94 00 00 00 01: mov byte ptr [esi + 0x94], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 89 6E 7C: mov dword ptr [esi + 0x7c], ebp
        __asm _emit 0x89
        __asm _emit 0x6e
        __asm _emit 0x7c
        ; Exact mapped bytes C7 46 74 00 00 00 40: mov dword ptr [esi + 0x74], 0x40000000
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes E8 4B 4C 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x5876e09e
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C6 86 95 00 00 00 01: mov byte ptr [esi + 0x95], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes C6 86 97 00 00 00 01: mov byte ptr [esi + 0x97], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 8B C5: mov eax, ebp
        __asm _emit 0x8b
        __asm _emit 0xc5
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 2B: je 0x5876e0e3
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes B8 00 04 00 00: mov eax, 0x400
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 1A: je 0x5876e0e3
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes B8 00 00 00 40: mov eax, 0x40000000
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 39 46 70: cmp dword ptr [esi + 0x70], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 74 10: je 0x5876e0e3
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 39 46 74: cmp dword ptr [esi + 0x74], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 74 0B: je 0x5876e0e3
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes E9 FC 01 00 00: jmp 0x5876e2df
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 7E 68: mov edi, dword ptr [esi + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x68
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 75 0C: jne 0x5876e0f9
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 3B 56 6C: cmp edx, dword ptr [esi + 0x6c]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5876e1b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 6C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 2B 4E 08: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 75 72: jne 0x5876e17b
        __asm _emit 0x75
        __asm _emit 0x72
        ; Exact mapped bytes 8D 47 07: lea eax, [edi + 7]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x07
        ; Exact mapped bytes 83 F8 0E: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0e
        ; Exact mapped bytes 77 23: ja 0x5876e134
        __asm _emit 0x77
        __asm _emit 0x23
        ; Exact mapped bytes 8D 57 03: lea edx, [edi + 3]
        __asm _emit 0x8d
        __asm _emit 0x57
        __asm _emit 0x03
        ; Exact mapped bytes 83 FA 06: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 77 12: ja 0x5876e12b
        __asm _emit 0x77
        __asm _emit 0x12
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 7D 05: jge 0x5876e122
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 CF FF: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x5876e141
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 9F C0: setg al
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc0
        ; Exact mapped bytes EB 14: jmp 0x5876e13f
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0B: jmp 0x5876e13f
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 51 07: lea edx, [ecx + 7]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x07
        ; Exact mapped bytes 83 FA 0E: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0e
        ; Exact mapped bytes 77 25: ja 0x5876e16e
        __asm _emit 0x77
        __asm _emit 0x25
        ; Exact mapped bytes 8D 41 03: lea eax, [ecx + 3]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x03
        ; Exact mapped bytes 83 F8 06: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 77 14: ja 0x5876e165
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7D 05: jge 0x5876e15a
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes 83 C9 FF: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xff
        ; Exact mapped bytes EB 51: jmp 0x5876e1ab
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 0F 9F C2: setg dl
        __asm _emit 0x0f
        __asm _emit 0x9f
        __asm _emit 0xc2
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes EB 46: jmp 0x5876e1ab
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes EB 3B: jmp 0x5876e1a9
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 83 E2 03: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x03
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes EB 2E: jmp 0x5876e1a9
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 2B: jne 0x5876e1ab
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 7E 08: jle 0x5876e18f
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 7C 0E: jl 0x5876e199
        __asm _emit 0x7c
        __asm _emit 0x0e
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0A: jmp 0x5876e199
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes F7 DA: neg edx
        __asm _emit 0xf7
        __asm _emit 0xda
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7F 02: jg 0x5876e199
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 7E 06: jle 0x5876e1a3
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7C 0A: jl 0x5876e1ab
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5876e1a9
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7F 02: jg 0x5876e1ab
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 5C 4C 19 00: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4c
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 46 28: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 2D: je 0x5876e1eb
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 96 80 00 00 00: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 10: jle 0x5876e1d6
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7F 03: jg 0x5876e1d1
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 13: jmp 0x5876e1e4
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes EB 0E: jmp 0x5876e1e4
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 2B F9: sub edi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf9
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7F 03: jg 0x5876e1e1
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 03: jmp 0x5876e1e4
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 F5 4A 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 2C: je 0x5876e221
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 96 80 00 00 00: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0F: jle 0x5876e20c
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7F 03: jg 0x5876e208
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 12: jmp 0x5876e21a
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes EB 0D: jmp 0x5876e219
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 2B F9: sub edi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf9
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 7F 03: jg 0x5876e217
        __asm _emit 0x7f
        __asm _emit 0x03
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 03: jmp 0x5876e21a
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 FF 4A 19 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4a
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 3B 46 68: cmp eax, dword ptr [esi + 0x68]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x68
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x5876e2da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 3B 4E 6C: cmp ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x6c
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x5876e2da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 7C: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x7c
        ; Exact mapped bytes 3B 56 28: cmp edx, dword ptr [esi + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x28
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5876e2da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 78: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x78
        ; Exact mapped bytes 3B 46 2C: cmp eax, dword ptr [esi + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x5876e2da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 00 00 00 40: mov edi, 0x40000000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 39 7E 74: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 75 03: jne 0x5876e25e
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 89 5E 74: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x74
        ; Exact mapped bytes 39 7E 70: cmp dword ptr [esi + 0x70], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x70
        ; Exact mapped bytes 75 03: jne 0x5876e266
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 89 5E 70: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x70
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes BA 00 1F 00 00: mov edx, 0x1f00
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 3B CD: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 75 1B: jne 0x5876e296
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes B9 FF E2 00 00: mov ecx, 0xe2ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 02 00 00: mov edx, 0x200
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x02
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
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes EB 49: jmp 0x5876e2df
        __asm _emit 0xeb
        __asm _emit 0x49
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
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
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3A: jne 0x5876e2df
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 FF E5 00 00: mov ecx, 0xe5ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes BA 00 05 00 00: mov edx, 0x500
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x05
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
        ; Exact mapped bytes B9 FB FF 00 00: mov ecx, 0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes EB 05: jmp 0x5876e2df
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BF 00 00 00 40: mov edi, 0x40000000
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 8B 86 9C 00 00 00: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 34: je 0x5876e31d
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2C: jne 0x5876e31d
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 50 50: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 8B 40 54: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x54
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0A: je 0x5876e305
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 0F B7 48 0C: movzx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 0F AF 48 08: imul ecx, dword ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes EB 02: jmp 0x5876e307
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x5876e39b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 90 00 00 00: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 8C 00 00 00: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 72: jmp 0x5876e38f
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 30: je 0x5876e357
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 28: jne 0x5876e357
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 88 8C 00 00 00: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 88 90 00 00 00: cmp ecx, dword ptr [eax + 0x90]
        __asm _emit 0x3b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 80 94 00 00 00: mov al, byte ptr [eax + 0x94]
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 1B D2: sbb edx, edx
        __asm _emit 0x1b
        __asm _emit 0xd2
        ; Exact mapped bytes F7 DA: neg edx
        __asm _emit 0xf7
        __asm _emit 0xda
        ; Exact mapped bytes 84 D0: test al, dl
        __asm _emit 0x84
        __asm _emit 0xd0
        ; Exact mapped bytes 75 52: jne 0x5876e39b
        __asm _emit 0x75
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E 90 00 00 00: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8E 8C 00 00 00: mov dword ptr [esi + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x5876e38f
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 38 9E 94 00 00 00: cmp byte ptr [esi + 0x94], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3C: je 0x5876e39b
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 59: jne 0x5876e3c0
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 39 9E 8C 00 00 00: cmp dword ptr [esi + 0x8c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x5876e37b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 89 86 8C 00 00 00: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C4 98 58: call dword ptr [0x5898c42c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 2B 86 8C 00 00 00: sub eax, dword ptr [esi + 0x8c]
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 86 90 00 00 00: cmp eax, dword ptr [esi + 0x90]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 0C: jb 0x5876e39b
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 89 5E 7C: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x7c
        ; Exact mapped bytes 89 7E 74: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 88 9E 94 00 00 00: mov byte ptr [esi + 0x94], bl
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1D: jne 0x5876e3c0
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 39 5E 28: cmp dword ptr [esi + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x28
        ; Exact mapped bytes 75 10: jne 0x5876e3b8
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes C6 86 95 00 00 00 01: mov byte ptr [esi + 0x95], 1
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 38 9E 95 00 00 00: cmp byte ptr [esi + 0x95], bl
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x5876e3c9
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes B8 F0 FF 00 00: mov eax, 0xfff0
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 15: je 0x5876e3e5
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 3C: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x3c
        ; Exact mapped bytes 74 0E: je 0x5876e3eb
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 75 EB: jne 0x5876e3d0
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
