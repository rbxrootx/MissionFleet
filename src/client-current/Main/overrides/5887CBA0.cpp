// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CBA0 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E C4 01 00 00: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 83 C0 58: add eax, 0x58
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x58
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 BE 80 00 00 00: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 8C 00 00 00: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 99 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 F0 00 00 00: add ecx, 0xf0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 60 02 00 00: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B4 01 00 00: mov ecx, dword ptr [esi + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 22 C9 98 58: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 50 EB FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E B8 01 00 00: mov ecx, dword ptr [esi + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F9 BB 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 5D A7 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 68 02 00 00: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 51 A7 08 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 64 02 00 00: mov ecx, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C2 D8 00 00 00: add edx, 0xd8
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 3C 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8E 68 02 00 00: mov ecx, dword ptr [esi + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 EC 00 00 00: add eax, 0xec
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 28 67 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 02 00 00: mov eax, dword ptr [esi + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 86 68 02 00 00: mov eax, dword ptr [esi + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 08 01 00 00: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 50: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        ; Exact mapped bytes 8D 9E C8 01 00 00: lea ebx, [esi + 0x1c8]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 6F 0B: lea ebp, [edi + 0xb]
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 03: mov eax, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887cca3
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x5887cc80
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CC80 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_01() {
    __asm {
        ; Exact mapped bytes 8D 8F 7E FF FF 7F: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887cc9b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887cc9b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887cc80
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887cc9f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5887cca0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 BA: jne 0x5887cc65
        __asm _emit 0x75
        __asm _emit 0xba
        ; Exact mapped bytes 8D BE 00 02 00 00: lea edi, [esi + 0x200]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5D 03: lea ebx, [ebp + 3]
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x03
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F F4: mov ecx, dword ptr [edi - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf4
        ; Exact mapped bytes 81 C2 D4 00 00 00: add edx, 0xd4
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 9A 66 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 05 E8 00 00 00: add eax, 0xe8
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 8A 66 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 F4: mov eax, dword ptr [edi - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xf4
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 C2: jne 0x5887ccb4
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 8E 0C 02 00 00: lea ecx, [esi + 0x20c]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 53 09: lea edx, [ebx + 9]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x09
        ; Exact mapped bytes EB 03: jmp 0x5887cd00
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CD00 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_5887cba0_segment_02() {
    __asm {
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
        ; Exact mapped bytes 75 ED: jne 0x5887cd00
        __asm _emit 0x75
        __asm _emit 0xed
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
        ; Exact mapped bytes 74 33: je 0x5887cd53
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
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
        ; Exact mapped bytes 8D 8F 7E FF FF 7F: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887cd4b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887cd4b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887cd30
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887cd4f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5887cd50
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes E8 65 8E 04 00: call 0x588c5bc0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 60: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7A 74: cmp dword ptr [edx + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7a
        __asm _emit 0x74
        ; Exact mapped bytes 0F 86 C6 00 00 00: jbe 0x5887ce2f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 10: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 60: mov ebp, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 45 64: mov eax, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x64
        ; Exact mapped bytes 2B 45 60: sub eax, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x60
        ; Exact mapped bytes 8B 5E 04: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887cd8b
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 E7 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0C B9: mov ecx, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xb9
        ; Exact mapped bytes 81 C3 9F 01 00 00: add ebx, 0x19f
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 43 65 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 60: mov ebp, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 55 64: mov edx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 2B 55 60: sub edx, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0x60
        ; Exact mapped bytes 8B 5E 08: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887cdb8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 BA FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 8C 18 13 01 00 00: lea ecx, [eax + ebx + 0x113]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x18
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0C BA: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xba
        ; Exact mapped bytes E8 91 65 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 60: mov ebp, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 45 64: mov eax, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x64
        ; Exact mapped bytes 2B 45 60: sub eax, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887cde7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 8B FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 B9: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb9
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
        ; Exact mapped bytes 8B 6E 60: mov ebp, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 45 64: mov eax, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x64
        ; Exact mapped bytes 2B 45 60: sub eax, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887ce0e
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 64 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 B9: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb9
        ; Exact mapped bytes 83 44 24 10 14: add dword ptr [esp + 0x10], 0x14
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x14
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
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B 78 74: cmp edi, dword ptr [eax + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x74
        ; Exact mapped bytes 0F 82 41 FF FF FF: jb 0x5887cd70
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes E8 89 8D 04 00: call 0x588c5bc0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 79 74: cmp dword ptr [ecx + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x74
        ; Exact mapped bytes 0F 86 CA 00 00 00: jbe 0x5887cf0f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 10: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 64: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 55 64: mov edx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 2B 55 60: sub edx, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0x60
        ; Exact mapped bytes 8B 5E 04: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887ce6b
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 07 FE 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0C B8: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xb8
        ; Exact mapped bytes 81 C3 9F 01 00 00: add ebx, 0x19f
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 63 64 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 64: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4D 64: mov ecx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4D 60: sub ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0x60
        ; Exact mapped bytes 8B 5E 08: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887ce98
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DA FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0C B9: mov ecx, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0xb9
        ; Exact mapped bytes 8D 84 1A 63 01 00 00: lea eax, [edx + ebx + 0x163]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B1 64 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6E 64: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 55 64: mov edx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 2B 55 60: sub edx, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887cec7
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AB FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 B8: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb8
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
        ; Exact mapped bytes 8B 6E 64: mov ebp, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x64
        ; Exact mapped bytes 8B 55 64: mov edx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 2B 55 60: sub edx, dword ptr [ebp + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x55
        __asm _emit 0x60
        ; Exact mapped bytes 83 C5 54: add ebp, 0x54
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x54
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887ceee
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 84 FD 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 B8: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb8
        ; Exact mapped bytes 83 44 24 10 14: add dword ptr [esp + 0x10], 0x14
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x14
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
        ; Exact mapped bytes 8B 56 64: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x64
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B 7A 74: cmp edi, dword ptr [edx + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7a
        __asm _emit 0x74
        ; Exact mapped bytes 0F 82 41 FF FF FF: jb 0x5887ce50
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E 38 02 00 00: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 A8 02 00 00: add eax, 0x2a8
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BD 63 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 8B 01 00 00: add ecx, 0x18b
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 38 02 00 00: mov ecx, dword ptr [esi + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 64 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 6B D9 FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C2 DA FF FF: call 0x5887aa10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BB 86 01 00 00: mov ebx, 0x186
        __asm _emit 0xbb
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 70 02 00 00: lea edi, [esi + 0x270]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes BA F0 FF 00 00: mov edx, 0xfff0
        __asm _emit 0xba
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 68 DE 01 00 00: push 0x1de
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 18 63 08 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C3 10: add ebx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x10
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 81 FB 26 02 00 00: cmp ebx, 0x226
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C DA: jl 0x5887cf60
        __asm _emit 0x7c
        __asm _emit 0xda
        ; Exact mapped bytes 81 C6 44 02 00 00: add esi, 0x244
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 05 00 00 00: mov edi, 5
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes E8 58 B8 08 00: call 0x589087f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 F1: jne 0x5887cf91
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
