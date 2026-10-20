// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881FAB0 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_5881fab0_5881FAB0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 39 8E CC 00 00 00: cmp dword ptr [esi + 0xcc], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x5881fad1
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 86 28 0D 00 00: movzx eax, word ptr [esi + 0xd28]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 08: je 0x5881fad1
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 66 89 86 28 0D 00 00: mov word ptr [esi + 0xd28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x5881fcac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 39 8E CC 00 00 00: cmp dword ptr [esi + 0xcc], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x5881fc2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 8E C8 12 00 00: cmp dword ptr [esi + 0x12c8], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x5881fb1f
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8A 86 D8 12 00 00: mov al, byte ptr [esi + 0x12d8]
        __asm _emit 0x8a
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 76 1D: jbe 0x5881fb1f
        __asm _emit 0x76
        __asm _emit 0x1d
        ; Exact mapped bytes 2A C3: sub al, bl
        __asm _emit 0x2a
        __asm _emit 0xc3
        ; Exact mapped bytes 88 86 D8 12 00 00: mov byte ptr [esi + 0x12d8], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x5881fb1f
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D A0 B4 A0 58: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 97 F9 FF: call 0x587b9290
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x97
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 7A F4 FF FF: call 0x5881efa0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x5881fc8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7E 70 00: cmp dword ptr [esi + 0x70], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x70
        __asm _emit 0x00
        ; Exact mapped bytes 8D 46 54: lea eax, [esi + 0x54]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x54
        ; Exact mapped bytes BA 02 00 00 00: mov edx, 2
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x5881fc10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 75 06: jne 0x5881fb50
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 59 24: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 E9: jne 0x5881fb40
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 38 96 9C 00 00 00: cmp byte ptr [esi + 0x9c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x5881fb8b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 39 50 50: cmp dword ptr [eax + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 75 0A: jne 0x5881fb71
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 BE A4 00 00 00 FF: cmp word ptr [esi + 0xa4], -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 1A: je 0x5881fb8b
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 0F BF 96 A4 00 00 00: movsx edx, word ptr [esi + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 50 50: add dword ptr [eax + 0x50], edx
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 0F BF 8E A4 00 00 00: movsx ecx, word ptr [esi + 0xa4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 80 00 00 00: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 48 50: add dword ptr [eax + 0x50], ecx
        __asm _emit 0x01
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 41 54: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x54
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 58: je 0x5881fbed
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 50 0C: movzx edx, word ptr [eax + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 0F AF 50 08: imul edx, dword ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 39 51 50: cmp dword ptr [ecx + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 0F 9D C0: setge al
        __asm _emit 0x0f
        __asm _emit 0x9d
        __asm _emit 0xc0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 42: je 0x5881fbed
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0F: jne 0x5881fbc4
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x5881fc8e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 0E: jne 0x5881fbd6
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 89 8E A4 00 00 00: mov word ptr [esi + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5881fc8e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x5881fc8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 89 96 A4 00 00 00: mov word ptr [esi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x5881fc8e
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 79 50 00: cmp dword ptr [ecx + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x5881fc8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 66 89 9E A4 00 00 00: mov word ptr [esi + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 E8 FF FF: call 0x5881e430
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5881fc8e
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 49 24: mov cx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x24
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x5881fc25
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B D3: sub edx, ebx
        __asm _emit 0x2b
        __asm _emit 0xd3
        ; Exact mapped bytes 75 E4: jne 0x5881fc10
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB 60: jmp 0x5881fc8e
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8D 7E 74: lea edi, [esi + 0x74]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes BD 03 00 00 00: mov ebp, 3
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5881fc42
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 47 F0: mov eax, dword ptr [edi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xf0
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 89 4E 70: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 89 8E 80 00 00 00: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 9C 45 A2 58: cmp eax, dword ptr [0x58a2459c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1B: jne 0x5881fc85
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8D 4E 54: lea ecx, [esi + 0x54]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x54
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5881fc72
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 B3: jne 0x5881fc40
        __asm _emit 0x75
        __asm _emit 0xb3
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x5881fcaa
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
        ; Exact mapped bytes 74 0C: je 0x5881fcae
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
    }
}
