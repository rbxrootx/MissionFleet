// Complete Ghidra body ranges for the selected function.
// 4 discontiguous segments; total 8814 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886BA60 .. +0x6DD bytes.
extern "C" __declspec(naked) void FUN_5886ba60_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 1C: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x1c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 85 D8 00 00 00: lea eax, [ebp + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 6C 24 20: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes BB 08 00 00 00: mov ebx, 8
        __asm _emit 0xbb
        __asm _emit 0x08
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
        ; Exact mapped bytes 8B 47 DC: mov eax, dword ptr [edi - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x5886bab7
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes 74 11: je 0x5886baaf
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886baaf
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
        ; Exact mapped bytes 75 E7: jne 0x5886ba94
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886bab3
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886bab4
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 33: je 0x5886baf3
        __asm _emit 0x74
        __asm _emit 0x33
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
        ; Exact mapped bytes 74 11: je 0x5886baeb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886baeb
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
        ; Exact mapped bytes 75 E7: jne 0x5886bad0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886baef
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886baf0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
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
        ; Exact mapped bytes 75 85: jne 0x5886ba80
        __asm _emit 0x75
        __asm _emit 0x85
        ; Exact mapped bytes 8B 85 A4 01 00 00: mov eax, dword ptr [ebp + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes 8D 8D 24 02 00 00: lea ecx, [ebp + 0x224]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 53 20: lea edx, [ebx + 0x20]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x20
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes BE F0 FF 00 00: mov esi, 0xfff0
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 01: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        ; Exact mapped bytes 75 ED: jne 0x5886bb13
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 8B 85 D4 00 00 00: mov eax, dword ptr [ebp + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x5886bb63
        __asm _emit 0x74
        __asm _emit 0x30
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
        ; Exact mapped bytes 74 11: je 0x5886bb5b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886bb5b
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
        ; Exact mapped bytes 75 E7: jne 0x5886bb40
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886bb5f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886bb60
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 00 00 00: mov eax, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 66 21 00 00: je 0x5886dcd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 58 50: lea ebx, [eax + 0x50]
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes BA AA 00 00 00: mov edx, 0xaa
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 53 2A: xor dx, word ptr [ebx + 0x2a]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x53
        __asm _emit 0x2a
        ; Exact mapped bytes 89 5C 24 10: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 74 54: je 0x5886bbd7
        __asm _emit 0x74
        __asm _emit 0x54
        ; Exact mapped bytes 0F B7 4B 0C: movzx ecx, word ptr [ebx + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4b
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 53 0A: movzx edx, word ptr [ebx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x53
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F AF 05 FC 42 A2 58: imul eax, dword ptr [0x58a242fc]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 73 2A: movzx esi, word ptr [ebx + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x73
        __asm _emit 0x2a
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 0F AF 3D 00 43 A2 58: imul edi, dword ptr [0x58a24300]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 0F B7 7B 08: movzx edi, word ptr [ebx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x7b
        __asm _emit 0x08
        ; Exact mapped bytes 81 F7 AA 00 00 00: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 0F AF C7: imul eax, edi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 81 F6 AA 00 00 00: xor esi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf6
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes EB 08: jmp 0x5886bbdf
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes C7 44 24 14 01 00 00 00: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D AC 00 00 00: mov ecx, dword ptr [ebp + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 6C: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 83 8C 00 00 00: lea eax, [ebx + 0x8c]
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 43 0E: movzx eax, word ptr [ebx + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x43
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 53 54: mov edx, dword ptr [ebx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x54
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes 8D 04 CA: lea eax, [edx + ecx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xca
        ; Exact mapped bytes 69 C0 E0 00 00 00: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xc0
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 70 FD 9C 58: mov eax, dword ptr [eax + 0x589cfd70]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 83 F8 4B: cmp eax, 0x4b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4b
        ; Exact mapped bytes 7D 2B: jge 0x5886bc48
        __asm _emit 0x7d
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 05 0F 02 00 00: add eax, 0x20f
        __asm _emit 0x05
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 41: jle 0x5886bc71
        __asm _emit 0x7e
        __asm _emit 0x41
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 3D: jl 0x5886bc71
        __asm _emit 0x7c
        __asm _emit 0x3d
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 34: je 0x5886bc71
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 2B: jmp 0x5886bc73
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C0 B5: add eax, -0x4b
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xb5
        ; Exact mapped bytes 39 81 64 01 00 00: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 18: jle 0x5886bc71
        __asm _emit 0x7e
        __asm _emit 0x18
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 14: jl 0x5886bc71
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 83 B9 8C 01 00 00 00: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5886bc71
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 89 8C 01 00 00: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 81: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x81
        ; Exact mapped bytes EB 02: jmp 0x5886bc73
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A8 00 00 00: mov ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x5886bca9
        __asm _emit 0x74
        __asm _emit 0x29
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
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
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
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 81 78 0D 00 00: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 CE FF: or esi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5886bd4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 C0 0C 00 00: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 42 04: mov al, byte ptr [edx + 4]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 24 1F: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1f
        ; Exact mapped bytes 3C 09: cmp al, 9
        __asm _emit 0x3c
        __asm _emit 0x09
        ; Exact mapped bytes 75 7D: jne 0x5886bd4c
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B1 B8 00 00 00: cmp dword ptr [ecx + 0xb8], esi
        __asm _emit 0x39
        __asm _emit 0xb1
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 6F: je 0x5886bd4c
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes E8 0E DD F0 FF: call 0x587799f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xdd
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 98 01 00 00: mov ecx, dword ptr [ebp + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5F B6 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E4 DC F0 FF: call 0x587799f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8D 9C 01 00 00: mov ecx, dword ptr [ebp + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
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
        ; Exact mapped bytes E8 35 B6 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb6
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA DC F0 FF: call 0x587799f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes EB 73: jmp 0x5886bdbf
        __asm _emit 0xeb
        __asm _emit 0x73
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 59 DC F0 FF: call 0x587799b0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8D 98 01 00 00: mov ecx, dword ptr [ebp + 0x198]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
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
        ; Exact mapped bytes E8 EA B5 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2F DC F0 FF: call 0x587799b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 9C 01 00 00: mov ecx, dword ptr [ebp + 0x19c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C0 B5 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 00 00 00: mov ecx, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 DC F0 FF: call 0x587799b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
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
        ; Exact mapped bytes 8B 8D A0 01 00 00: mov ecx, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 B5 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes F7 43 64 00 00 00 10: test dword ptr [ebx + 0x64], 0x10000000
        __asm _emit 0xf7
        __asm _emit 0x43
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        ; Exact mapped bytes C7 44 24 1C 0B 00 00 00: mov dword ptr [esp + 0x1c], 0xb
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E3 09 00 00: je 0x5886c7c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 46 01 00 00: cmp dword ptr [eax + 0x164], 0x146
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 1C 01 00 00 00: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886be0f
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886be0f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 18 05 00 00: mov eax, dword ptr [ecx + 0x518]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886be11
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 98 00 00 00: mov ecx, dword ptr [ebp + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886be46
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 47 01 00 00: cmp dword ptr [eax + 0x164], 0x147
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886be6e
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886be6e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 1C 05 00 00: mov eax, dword ptr [ecx + 0x51c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886be70
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 9C 00 00 00: mov ecx, dword ptr [ebp + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886bea5
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
        ; Exact mapped bytes 39 73 68: cmp dword ptr [ebx + 0x68], esi
        __asm _emit 0x39
        __asm _emit 0x73
        __asm _emit 0x68
        ; Exact mapped bytes 74 51: je 0x5886befb
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 85 A4 01 00 00: mov eax, dword ptr [ebp + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8D B3 C0 00 00 00: lea esi, [ebx + 0xc0]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 3E 00: cmp word ptr [esi], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x5886bef0
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 4B 68: mov ecx, dword ptr [ebx + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 81 08 00: call 0x588f4060
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 C0 0C 00 00: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 82 5E 03 00 00: cmp ax, word ptr [edx + 0x35e]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x82
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x5886bef0
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 C6 02: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x02
        ; Exact mapped bytes 83 FF 20: cmp edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x20
        ; Exact mapped bytes 7C D0: jl 0x5886bec0
        __asm _emit 0x7c
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 85 A4 01 00 00: mov eax, dword ptr [ebp + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 66: add ecx, 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x66
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 6C 01 00 00: mov ecx, dword ptr [ebp + 0x16c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 74 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8D 14 01 00 00: mov ecx, dword ptr [ebp + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 63: add edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x63
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 67: add eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x67
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6A 73 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 63: add ecx, 0x63
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x63
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 18 01 00 00: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 15: add edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x15
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 51 73 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8D B8 01 00 00: mov ecx, dword ptr [ebp + 0x1b8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 68: add eax, 0x68
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x68
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0F 74 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 68: add ecx, 0x68
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x68
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D E4 01 00 00: mov ecx, dword ptr [ebp + 0x1e4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 73 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 53 12: movzx edx, word ptr [ebx + 0x12]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x53
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5D CB F0 FF: call 0x58778ad0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x5886c1ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 00 00 00: mov eax, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 C0 01 00 00: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 92 01 00 00: je 0x5886c124
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 89 01 00 00: je 0x5886c124
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 8E 5E 03 00 00: movzx ecx, word ptr [esi + 0x35e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 96 5C 03 00 00: movzx edx, byte ptr [esi + 0x35c]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 10 0D F0 FF: call 0x5876ccc0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D B0 00 00 00: mov ecx, dword ptr [ebp + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 33: je 0x5886bff3
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2F: je 0x5886bff3
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BF 80 00 00 00: mov edi, 0x80
        __asm _emit 0xbf
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
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
        ; Exact mapped bytes 74 11: je 0x5886bfeb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886bfeb
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
        ; Exact mapped bytes 75 E7: jne 0x5886bfd0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886bfef
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 01: jne 0x5886bff0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4E 0E: movzx ecx, word ptr [esi + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 95 D4 00 00 00: mov edx, dword ptr [ebp + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 6C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 E1 FF 00 00 00: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 39 0E 11 00: call 0x5897ce50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0e
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 00 00 00: lea eax, [ebp + 0xd8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8D 9E 62 03 00 00: lea ebx, [esi + 0x362]
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 24 08 00 00 00: mov dword ptr [esp + 0x24], 8
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x5886c111
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 86 CA F0 FF: call 0x58778ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5886c111
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 42 0E: movzx eax, word ptr [edx + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x0e
        ; Exact mapped bytes 66 8B 57 0E: mov dx, word ptr [edi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x0e
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 81 F1 AA FF 00 00: xor ecx, 0xffaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes BE FF 00 00 00: mov esi, 0xff
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 FF 00 00 00: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F 87 8B 00 00 00: ja 0x5886c111
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 24 0F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes 38 87 5C 03 00 00: cmp byte ptr [edi + 0x35c], al
        __asm _emit 0x38
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 7D 00 00 00: jne 0x5886c111
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 0F B6 4B FE: movzx ecx, byte ptr [ebx - 2]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4b
        __asm _emit 0xfe
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 1E 0C F0 FF: call 0x5876ccc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0c
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 4A DC: mov ecx, dword ptr [edx - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 30: je 0x5886c0e3
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x5886c0e3
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
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
        ; Exact mapped bytes 74 11: je 0x5886c0db
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886c0db
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
        ; Exact mapped bytes 75 E7: jne 0x5886c0c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886c0df
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886c0e0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4F 0E: movzx ecx, word ptr [edi + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4f
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 74 24 18: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 6C: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E9 04: shr ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 81 E1 FF 00 00 00: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 49 0D 11 00: call 0x5897ce50
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0d
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 89 74 24 18: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 04: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x04
        ; Exact mapped bytes 83 6C 24 24 01: sub dword ptr [esp + 0x24], 1
        __asm _emit 0x83
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 13 FF FF FF: jne 0x5886c032
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x5886c1ae
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 B0 00 00 00: mov eax, dword ptr [ebp + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 32: je 0x5886c163
        __asm _emit 0x74
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 03: jmp 0x5886c140
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C140 .. +0x1678 bytes.
extern "C" __declspec(naked) void FUN_5886ba60_segment_01() {
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
        ; Exact mapped bytes 74 11: je 0x5886c15b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886c15b
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
        ; Exact mapped bytes 75 E7: jne 0x5886c140
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886c15f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886c160
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BD B4 00 00 00: lea edi, [ebp + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 08 00 00 00: mov ebx, 8
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
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
        ; Exact mapped bytes 74 2D: je 0x5886c1a6
        __asm _emit 0x74
        __asm _emit 0x2d
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
        ; Exact mapped bytes 74 11: je 0x5886c19e
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886c19e
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
        ; Exact mapped bytes 75 E7: jne 0x5886c183
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886c1a2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886c1a3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
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
        ; Exact mapped bytes 75 C2: jne 0x5886c170
        __asm _emit 0x75
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 85 A0 00 00 00: mov eax, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
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
        ; Exact mapped bytes 8B 85 A4 00 00 00: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
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
        ; Exact mapped bytes 8B 97 2C 01 00 00: mov edx, dword ptr [edi + 0x12c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D E4 02 00 00: mov ecx, dword ptr [ebp + 0x2e4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 81 B1 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 04 01 00 00: mov edx, dword ptr [edi + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 87 04 01 00 00: lea eax, [edi + 0x104]
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c215
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c204
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c215
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c230
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c22e
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c230
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D E8 02 00 00: mov ecx, dword ptr [ebp + 0x2e8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 24 B1 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c26b
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c25c
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c274
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 85 B8 02 00 00: mov eax, dword ptr [ebp + 0x2b8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c274
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8D B8 02 00 00: mov ecx, dword ptr [ebp + 0x2b8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 01 00 00 00: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5886c274
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 95 B8 02 00 00: mov edx, dword ptr [ebp + 0x2b8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 87 30 01 00 00: mov eax, dword ptr [edi + 0x130]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D EC 02 00 00: mov ecx, dword ptr [ebp + 0x2ec]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 DA B0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 08 01 00 00: mov edx, dword ptr [edi + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c2b0
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c29f
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c2b0
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c2cb
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c2c9
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c2cb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D F0 02 00 00: mov ecx, dword ptr [ebp + 0x2f0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 89 B0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c306
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c2f7
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c30f
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8D BC 02 00 00: mov ecx, dword ptr [ebp + 0x2bc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 02 00 00 00: mov dword ptr [ecx + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c30f
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 95 BC 02 00 00: mov edx, dword ptr [ebp + 0x2bc]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0x02
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
        ; Exact mapped bytes EB 09: jmp 0x5886c30f
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 85 BC 02 00 00: mov eax, dword ptr [ebp + 0x2bc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8F 34 01 00 00: mov ecx, dword ptr [edi + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D F4 02 00 00: mov ecx, dword ptr [ebp + 0x2f4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3F B0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 0C 01 00 00: mov edx, dword ptr [edi + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c34b
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c33a
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c34b
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c366
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c364
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c366
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D F8 02 00 00: mov ecx, dword ptr [ebp + 0x2f8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 EE AF 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c3a1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c392
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c3aa
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 95 C0 02 00 00: mov edx, dword ptr [ebp + 0x2c0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 02 00 00 00: mov dword ptr [edx + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c3aa
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 85 C0 02 00 00: mov eax, dword ptr [ebp + 0x2c0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5886c3aa
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 8D C0 02 00 00: mov ecx, dword ptr [ebp + 0x2c0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 97 3C 01 00 00: mov edx, dword ptr [edi + 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 97 38 01 00 00: add edx, dword ptr [edi + 0x138]
        __asm _emit 0x03
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D FC 02 00 00: mov ecx, dword ptr [ebp + 0x2fc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 9E AF 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 14 01 00 00: mov edx, dword ptr [edi + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 97 10 01 00 00: add edx, dword ptr [edi + 0x110]
        __asm _emit 0x03
        __asm _emit 0x97
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c3f2
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c3e1
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c3f2
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c40d
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c40b
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c40d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D 00 03 00 00: mov ecx, dword ptr [ebp + 0x300]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 47 AF 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c448
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c439
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c451
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 85 C4 02 00 00: mov eax, dword ptr [ebp + 0x2c4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c451
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8D C4 02 00 00: mov ecx, dword ptr [ebp + 0x2c4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 01 00 00 00: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5886c451
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 95 C4 02 00 00: mov edx, dword ptr [ebp + 0x2c4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 87 44 01 00 00: mov eax, dword ptr [edi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 87 40 01 00 00: add eax, dword ptr [edi + 0x140]
        __asm _emit 0x03
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 04 03 00 00: mov ecx, dword ptr [ebp + 0x304]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F7 AE 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 1C 01 00 00: mov edx, dword ptr [edi + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 97 18 01 00 00: add edx, dword ptr [edi + 0x118]
        __asm _emit 0x03
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c499
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c488
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c499
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c4b4
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c4b2
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c4b4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D 08 03 00 00: mov ecx, dword ptr [ebp + 0x308]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A0 AE 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c4ef
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c4e0
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c4f8
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 8D C8 02 00 00: mov ecx, dword ptr [ebp + 0x2c8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 02 00 00 00: mov dword ptr [ecx + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c4f8
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 95 C8 02 00 00: mov edx, dword ptr [ebp + 0x2c8]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0x02
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
        ; Exact mapped bytes EB 09: jmp 0x5886c4f8
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 85 C8 02 00 00: mov eax, dword ptr [ebp + 0x2c8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8F 48 01 00 00: mov ecx, dword ptr [edi + 0x148]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 0C 03 00 00: mov ecx, dword ptr [ebp + 0x30c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 AE 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 20 01 00 00: mov edx, dword ptr [edi + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c534
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c523
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c534
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c54f
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c54d
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c54f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D 10 03 00 00: mov ecx, dword ptr [ebp + 0x310]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 05 AE 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c58a
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c57b
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c593
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 95 CC 02 00 00: mov edx, dword ptr [ebp + 0x2cc]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 02 00 00 00: mov dword ptr [edx + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c593
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 85 CC 02 00 00: mov eax, dword ptr [ebp + 0x2cc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 01 00 00 00: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5886c593
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 8D CC 02 00 00: mov ecx, dword ptr [ebp + 0x2cc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 8B 97 4C 01 00 00: mov edx, dword ptr [edi + 0x14c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 14 03 00 00: mov ecx, dword ptr [ebp + 0x314]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB AD 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 97 24 01 00 00: mov edx, dword ptr [edi + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c5cf
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c5be
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FA 00 10 A5 D4: cmp edx, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c5cf
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1B: jmp 0x5886c5ea
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 81 FA 00 CA 9A 3B: cmp edx, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c5e8
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c5ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D 18 03 00 00: mov ecx, dword ptr [ebp + 0x318]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 6A AD 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 28: je 0x5886c625
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 14: je 0x5886c616
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 75 27: jne 0x5886c62e
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 85 D0 02 00 00: mov eax, dword ptr [ebp + 0x2d0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c62e
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8D D0 02 00 00: mov ecx, dword ptr [ebp + 0x2d0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 50 01 00 00 00: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x5886c62e
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 95 D0 02 00 00: mov edx, dword ptr [ebp + 0x2d0]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5A 50: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes B9 09 00 00 00: mov ecx, 9
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 03 78 28: add edi, dword ptr [eax + 0x28]
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x28
        ; Exact mapped bytes 03 30: add esi, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x30
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 E9 01: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        ; Exact mapped bytes 75 F3: jne 0x5886c640
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 0A: je 0x5886c65b
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 89 44 24 24: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8D 20 03 00 00: mov ecx, dword ptr [ebp + 0x320]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 F9 AC 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c68b
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c67a
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FE 00 10 A5 D4: cmp esi, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c68b
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E6: mul esi
        __asm _emit 0xf7
        __asm _emit 0xe6
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BB 02 00 00 00: mov ebx, 2
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x5886c6a8
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 81 FE 00 CA 9A 3B: cmp esi, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 11: jb 0x5886c6a4
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E6: mul esi
        __asm _emit 0xf7
        __asm _emit 0xe6
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x5886c6a8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 8D 1C 03 00 00: mov ecx, dword ptr [ebp + 0x31c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AC AC 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C3: movsx eax, bx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc3
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x5886c6e3
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 13: je 0x5886c6d8
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 27: jne 0x5886c6f0
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 85 D4 02 00 00: mov eax, dword ptr [ebp + 0x2d4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x5886c6f0
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 8D D4 02 00 00: mov ecx, dword ptr [ebp + 0x2d4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 59 50: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes EB 0D: jmp 0x5886c6f0
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 95 D4 02 00 00: mov edx, dword ptr [ebp + 0x2d4]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 42 50 00 00 00 00: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D E0 02 00 00: mov ecx, dword ptr [ebp + 0x2e0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 64 AC 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3D E8 00 00 00: cmp eax, 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 1B: jl 0x5886c720
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 7F 08: jg 0x5886c70f
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 81 FE 00 10 A5 D4: cmp esi, 0xd4a51000
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0xd4
        ; Exact mapped bytes 72 11: jb 0x5886c720
        __asm _emit 0x72
        __asm _emit 0x11
        ; Exact mapped bytes B8 83 DE 1B 43: mov eax, 0x431bde83
        __asm _emit 0xb8
        __asm _emit 0x83
        __asm _emit 0xde
        __asm _emit 0x1b
        __asm _emit 0x43
        ; Exact mapped bytes F7 E6: mul esi
        __asm _emit 0xf7
        __asm _emit 0xe6
        ; Exact mapped bytes C1 EA 12: shr edx, 0x12
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x12
        ; Exact mapped bytes BE 02 00 00 00: mov esi, 2
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x5886c73a
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 81 FE 00 CA 9A 3B: cmp esi, 0x3b9aca00
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0x9a
        __asm _emit 0x3b
        ; Exact mapped bytes 72 0E: jb 0x5886c736
        __asm _emit 0x72
        __asm _emit 0x0e
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E6: mul esi
        __asm _emit 0xf7
        __asm _emit 0xe6
        ; Exact mapped bytes C1 EA 06: shr edx, 6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        ; Exact mapped bytes 8B F3: mov esi, ebx
        __asm _emit 0x8b
        __asm _emit 0xf3
        ; Exact mapped bytes EB 04: jmp 0x5886c73a
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B D6: mov edx, esi
        __asm _emit 0x8b
        __asm _emit 0xd6
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes 8B 8D DC 02 00 00: mov ecx, dword ptr [ebp + 0x2dc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 1A AC 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xac
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes 74 3A: je 0x5886c788
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 1F: je 0x5886c771
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 75 57: jne 0x5886c7ad
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 8B 85 B0 02 00 00: mov eax, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 02 00 00 00: mov dword ptr [eax + 0x50], 2
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D B0 02 00 00: mov ecx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 49: sub edx, 0x49
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x49
        ; Exact mapped bytes EB 30: jmp 0x5886c7a1
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 8B 85 B0 02 00 00: mov eax, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 58 50: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D B0 02 00 00: mov ecx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 49: sub edx, 0x49
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x49
        ; Exact mapped bytes EB 19: jmp 0x5886c7a1
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 8B 85 B0 02 00 00: mov eax, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 50 00 00 00 00: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D B0 02 00 00: mov ecx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 41: sub edx, 0x41
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x41
        ; Exact mapped bytes 8B 8D DC 02 00 00: mov ecx, dword ptr [ebp + 0x2dc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 33 6B 09 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 8D D8 02 00 00: mov ecx, dword ptr [ebp + 0x2d8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 AB 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xab
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 BB 07 00 00: jmp 0x5886cf7d
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 88 00 00 00: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 8D A4 02 00 00: cmp ecx, dword ptr [ebp + 0x2a4]
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x5886c7d7
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B CD: mov ecx, ebp
        __asm _emit 0x8b
        __asm _emit 0xcd
        ; Exact mapped bytes E8 D9 F1 FF FF: call 0x5886b9b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 A4 01 00 00: mov eax, dword ptr [ebp + 0x1a4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 85 B0 00 00 00: mov eax, dword ptr [ebp + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 30: je 0x5886c823
        __asm _emit 0x74
        __asm _emit 0x30
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
        ; Exact mapped bytes 74 11: je 0x5886c81b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886c81b
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
        ; Exact mapped bytes 75 E7: jne 0x5886c800
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886c81f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886c820
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 D4 00 00 00: mov eax, dword ptr [ebp + 0xd4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5886c863
        __asm _emit 0x74
        __asm _emit 0x33
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
        ; Exact mapped bytes 74 11: je 0x5886c85b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5886c85b
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
        ; Exact mapped bytes 75 E7: jne 0x5886c840
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5886c85f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5886c860
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 49 01 00 00: cmp dword ptr [eax + 0x164], 0x149
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886c88b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886c88b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 24 05 00 00: mov eax, dword ptr [edx + 0x524]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c88d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 98 00 00 00: mov ecx, dword ptr [ebp + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886c8c2
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 48 01 00 00: cmp dword ptr [eax + 0x164], 0x148
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886c8ea
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886c8ea
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 20 05 00 00: mov eax, dword ptr [ecx + 0x520]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c8ec
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 9C 00 00 00: mov ecx, dword ptr [ebp + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886c921
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
        ; Exact mapped bytes BE 46 00 00 00: mov esi, 0x46
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BD B8 01 00 00: lea edi, [ebp + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9D 18 01 00 00: lea ebx, [ebp + 0x118]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 03 CE: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xce
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4F B4: mov ecx, dword ptr [edi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xb4
        ; Exact mapped bytes E8 20 6A 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4B FC: mov ecx, dword ptr [ebx - 4]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0xfc
        ; Exact mapped bytes 03 D6: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xd6
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 83 C0 67: add eax, 0x67
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x67
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3B 69 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 8B 55 04: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x04
        ; Exact mapped bytes 03 CE: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xce
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0B: mov ecx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x0b
        ; Exact mapped bytes 83 C2 15: add edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x15
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 27 69 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8D 4C 30 04: lea ecx, [eax + esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes E8 E8 69 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4F 2C: mov ecx, dword ptr [edi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 44 32 04: lea eax, [edx + esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 69 09 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x69
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 0E: add esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x0e
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 C3 08: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x08
        ; Exact mapped bytes 81 FE E0 00 00 00: cmp esi, 0xe0
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C 99: jl 0x5886c932
        __asm _emit 0x7c
        __asm _emit 0x99
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 41 64: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes A9 00 00 01 00: test eax, 0x10000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886ca3d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A1 01 00 00: cmp dword ptr [eax + 0x164], 0x1a1
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886c9d3
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886c9d3
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 84 06 00 00: mov eax, dword ptr [edx + 0x684]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886c9d5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886ca0a
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A2 01 00 00: cmp dword ptr [eax + 0x164], 0x1a2
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E C1 03 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B4 03 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 88 06 00 00: mov eax, dword ptr [ecx + 0x688]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 03 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 00 02: test eax, 0x2000000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886cada
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A3 01 00 00: cmp dword ptr [eax + 0x164], 0x1a3
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886ca70
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886ca70
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 8C 06 00 00: mov eax, dword ptr [ecx + 0x68c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ca72
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886caa7
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A4 01 00 00: cmp dword ptr [eax + 0x164], 0x1a4
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 24 03 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 17 03 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 90 06 00 00: mov eax, dword ptr [ecx + 0x690]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 08 03 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 08 00: test eax, 0x80000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886cb77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A5 01 00 00: cmp dword ptr [eax + 0x164], 0x1a5
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cb0d
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cb0d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 94 06 00 00: mov eax, dword ptr [ecx + 0x694]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cb0f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886cb44
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A6 01 00 00: cmp dword ptr [eax + 0x164], 0x1a6
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 87 02 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 7A 02 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 98 06 00 00: mov eax, dword ptr [ecx + 0x698]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 00 01: test eax, 0x1000000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886cc14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 A9 01 00 00: cmp dword ptr [eax + 0x164], 0x1a9
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cbaa
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cbaa
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 A4 06 00 00: mov eax, dword ptr [ecx + 0x6a4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cbac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886cbe1
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 AA 01 00 00: cmp dword ptr [eax + 0x164], 0x1aa
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E EA 01 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 DD 01 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 A8 06 00 00: mov eax, dword ptr [ecx + 0x6a8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 04 00: test eax, 0x40000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886ccb1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 AB 01 00 00: cmp dword ptr [eax + 0x164], 0x1ab
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cc47
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cc47
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 AC 06 00 00: mov eax, dword ptr [ecx + 0x6ac]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cc49
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886cc7e
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 AC 01 00 00: cmp dword ptr [eax + 0x164], 0x1ac
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 4D 01 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 B0 06 00 00: mov eax, dword ptr [ecx + 0x6b0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 02 00: test eax, 0x20000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x5886cd4e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 B1 01 00 00: cmp dword ptr [eax + 0x164], 0x1b1
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cce4
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cce4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 C4 06 00 00: mov eax, dword ptr [ecx + 0x6c4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cce6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886cd1b
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
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 B2 01 00 00: cmp dword ptr [eax + 0x164], 0x1b2
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E B0 00 00 00: jle 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x5886cde0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 C8 06 00 00: mov eax, dword ptr [ecx + 0x6c8]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5886cde2
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 00 00 40: test eax, 0x40000000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x5886ce21
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C2 01 00 00: cmp dword ptr [eax + 0x164], 0x1c2
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cd81
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cd81
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 08 07 00 00: mov eax, dword ptr [ecx + 0x708]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cd83
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886cdb8
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
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C3 01 00 00: cmp dword ptr [eax + 0x164], 0x1c3
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cde0
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cde0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 0C 07 00 00: mov eax, dword ptr [ecx + 0x70c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cde2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A4 00 00 00: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 6F 01 00 00: je 0x5886cf62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6f
        __asm _emit 0x01
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
        ; Exact mapped bytes 89 51 10: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        ; Exact mapped bytes 8B 50 18: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
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
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x5886cf62
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 40 00 00: test eax, 0x4000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 69: je 0x5886ce91
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C4 01 00 00: cmp dword ptr [eax + 0x164], 0x1c4
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886ce50
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886ce50
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 10 07 00 00: mov eax, dword ptr [ecx + 0x710]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886ce52
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 62 48 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x48
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C5 01 00 00: cmp dword ptr [eax + 0x164], 0x1c5
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E E1 00 00 00: jle 0x5886cf54
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x5886cf54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 14 07 00 00: mov eax, dword ptr [edx + 0x714]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5886cf56
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A9 00 80 00 00: test eax, 0x8000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 5E: je 0x5886cef6
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C6 01 00 00: cmp dword ptr [eax + 0x164], 0x1c6
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cec0
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cec0
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 18 07 00 00: mov eax, dword ptr [eax + 0x718]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cec2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F2 47 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x47
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 46 A2 58: mov eax, dword ptr [0x58a246c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 C7 01 00 00: cmp dword ptr [eax + 0x164], 0x1c7
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 75: jle 0x5886cf54
        __asm _emit 0x7e
        __asm _emit 0x75
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 6C: je 0x5886cf54
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 1C 07 00 00: mov eax, dword ptr [ecx + 0x71c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x5886cf56
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 AF 01 00 00: cmp dword ptr [eax + 0x164], 0x1af
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cf1e
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cf1e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 90 8C 01 00 00: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 82 BC 06 00 00: mov eax, dword ptr [edx + 0x6bc]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cf20
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A0 00 00 00: mov ecx, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 94 47 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 B0 01 00 00: cmp dword ptr [eax + 0x164], 0x1b0
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886cf54
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886cf54
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 80 8C 01 00 00: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 80 C0 06 00 00: mov eax, dword ptr [eax + 0x6c0]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886cf56
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D A4 00 00 00: mov ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5E 47 EC FF: call 0x587316c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x47
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 A0 00 00 00: mov eax, dword ptr [ebp + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 A4 00 00 00: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 8B 85 F8 00 00 00: mov eax, dword ptr [ebp + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 FC 00 00 00: mov eax, dword ptr [ebp + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 00 01 00 00: mov eax, dword ptr [ebp + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 04 01 00 00: mov eax, dword ptr [ebp + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 4E 2A: movzx ecx, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x2a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D FC 00 00 00: mov ecx, dword ptr [ebp + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A1 A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 08 01 00 00: mov eax, dword ptr [ebp + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 56 0E: movzx edx, word ptr [esi + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 8D 08 01 00 00: mov ecx, dword ptr [ebp + 0x108]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 04: shr edx, 4
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 83 F2 AA: xor edx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xaa
        ; Exact mapped bytes 81 E2 FF 00 00 00: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7B A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 0C 01 00 00: mov eax, dword ptr [ebp + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 10 01 00 00: mov eax, dword ptr [ebp + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 8D 10 01 00 00: mov ecx, dword ptr [ebp + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 53 A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 13 01 00 00: jne 0x5886d12b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4E 08: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D F8 00 00 00: mov ecx, dword ptr [ebp + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 32 A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 56 0A: movzx edx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 8D FC 00 00 00: mov ecx, dword ptr [ebp + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 1C A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 0C: movzx eax, word ptr [esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 00 01 00 00: mov ecx, dword ptr [ebp + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 07 A3 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4E 2A: movzx ecx, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x2a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 04 01 00 00: mov ecx, dword ptr [ebp + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F1 A2 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 58: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D 0C 01 00 00: mov ecx, dword ptr [ebp + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 DC A2 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa2
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 46 2A: movzx eax, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x2a
        ; Exact mapped bytes 0F B7 4E 08: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D A8 01 00 00: mov ecx, dword ptr [ebp + 0x1a8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 16 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 56 2A: movzx edx, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x2a
        ; Exact mapped bytes 0F B7 46 08: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 4E 0A: movzx ecx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8D AC 01 00 00: mov ecx, dword ptr [ebp + 0x1ac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D0 16 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 56 2A: movzx edx, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x2a
        ; Exact mapped bytes 0F B7 46 0C: movzx eax, word ptr [esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 4E 08: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F B7 56 0A: movzx edx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x0a
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8D B0 01 00 00: mov ecx, dword ptr [ebp + 0x1b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 98 16 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 5C: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x5c
        ; Exact mapped bytes 8B 4E 58: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x58
        ; Exact mapped bytes 35 AA AA AA AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D B4 01 00 00: mov ecx, dword ptr [ebp + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 7A 16 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x5886d200
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 56 08: movzx edx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 85 F8 00 00 00: mov eax, dword ptr [ebp + 0xf8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 64: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 4E 0A: movzx ecx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 95 FC 00 00 00: mov edx, dword ptr [ebp + 0xfc]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4A 64: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 46 0C: movzx eax, word ptr [esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8D 00 01 00 00: mov ecx, dword ptr [ebp + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 56 2A: movzx edx, word ptr [esi + 0x2a]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 85 04 01 00 00: mov eax, dword ptr [ebp + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 50 64: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4E 58: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x58
        ; Exact mapped bytes 8B 95 0C 01 00 00: mov edx, dword ptr [ebp + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 4A 64: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 46 08: movzx eax, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8D A8 01 00 00: mov ecx, dword ptr [ebp + 0x1a8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A3 15 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 4E 08: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 56 0A: movzx edx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x0a
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D AC 01 00 00: mov ecx, dword ptr [ebp + 0x1ac]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 15 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 46 0C: movzx eax, word ptr [esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 4E 08: movzx ecx, word ptr [esi + 8]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 0F B7 56 0A: movzx edx, word ptr [esi + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x56
        __asm _emit 0x0a
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8D B0 01 00 00: mov ecx, dword ptr [ebp + 0x1b0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 54 15 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 58: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8D B4 01 00 00: mov ecx, dword ptr [ebp + 0x1b4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x01
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
        ; Exact mapped bytes E8 40 15 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes F7 46 64 00 00 00 20: test dword ptr [esi + 0x64], 0x20000000
        __asm _emit 0xf7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 8D BD 18 01 00 00: lea edi, [ebp + 0x118]
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 EF 02 00 00: je 0x5886d502
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B DE: mov ebx, esi
        __asm _emit 0x8b
        __asm _emit 0xde
        ; Exact mapped bytes 8D 4B 2C: lea ecx, [ebx + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x2c
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 14: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x14
        ; Exact mapped bytes 8D B5 B8 01 00 00: lea esi, [ebp + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 54 24 24: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8A 10: mov dl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x10
        ; Exact mapped bytes 80 F2 AA: xor dl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xf2
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 56 B4: mov edx, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0xb4
        ; Exact mapped bytes B8 00 00 00 00: mov eax, 0
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9C C0: setl al
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc0
        ; Exact mapped bytes 89 42 50: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 B4: mov eax, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xb4
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
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
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 47 FC: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xfc
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x5886d3ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes F6 80 74 01 00 00 01: test byte ptr [eax + 0x174], 1
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x5886d323
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 0A: movsx ecx, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F1 AA: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xaa
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
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
        ; Exact mapped bytes D1 ED: shr ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xed
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8D 0C ED 00 00 00 00: lea ecx, [ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 81 A0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 70 A0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 A3 14 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 6C 24 14: imul ebp, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 86 14 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E9 BC 01 00 00: jmp 0x5886d4df
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C C5 00 00 00 00: lea ecx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 12 A0 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F0 AA: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xaa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FB 9F 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 13: movzx edx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 25 14 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 4C 24 14: imul ecx, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
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
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F8 13 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 32 01 00 00: jmp 0x5886d4df
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes F6 81 74 01 00 00 01: test byte ptr [ecx + 0x174], 1
        __asm _emit 0xf6
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x5886d44e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 13: movzx edx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x13
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D2 0B: imul edx, edx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 83 F1 AA: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xaa
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes D1 ED: shr ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xed
        ; Exact mapped bytes 8D 14 ED 00 00 00 00: lea edx, [ebp*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D5: sub edx, ebp
        __asm _emit 0x2b
        __asm _emit 0xd5
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 47 FC: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xfc
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 89 50 64: mov dword ptr [eax + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 66 85 ED: test bp, bp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 0F 9C C2: setl dl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc2
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 8B 46 B4: mov eax, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xb4
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes E8 13 13 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x13
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 6C 24 14: imul ebp, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 FB 12 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x5886d4df
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 0C C5 00 00 00 00: lea ecx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 8B 57 FC: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4A 64: mov dword ptr [edx + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 89 42 64: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 66 0F BE 01: movsx ax, byte ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        ; Exact mapped bytes B9 AA 00 00 00: mov ecx, 0xaa
        __asm _emit 0xb9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 C1: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 46 B4: mov eax, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xb4
        ; Exact mapped bytes BA 00 00 00 00: mov edx, 0
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9C C2: setl dl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc2
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes E8 89 12 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 4C 24 14: imul ecx, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 61 12 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes B9 01 00 00 00: mov ecx, 1
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 4C 24 18: add dword ptr [esp + 0x18], ecx
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 02: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x02
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C7 08: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 29 4C 24 24: sub dword ptr [esp + 0x24], ecx
        __asm _emit 0x29
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 85 37 FD FF FF: jne 0x5886d232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes E9 5D 02 00 00: jmp 0x5886d75f
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 8D 51 2C: lea edx, [ecx + 0x2c]
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 59 14: lea ebx, [ecx + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x14
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8D B5 B8 01 00 00: lea esi, [ebp + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0xb5
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes EB 04: jmp 0x5886d526
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8A 02: mov al, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x02
        ; Exact mapped bytes 34 AA: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xaa
        ; Exact mapped bytes 8B 46 B4: mov eax, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xb4
        ; Exact mapped bytes BA 00 00 00 00: mov edx, 0
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 9C C2: setl dl
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xc2
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 B4: mov eax, dword ptr [esi - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0xb4
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 2C: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x2c
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 47 FC: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xfc
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 83 7C 24 30 00: cmp dword ptr [esp + 0x30], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x5886d66e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 91 74 01 00 00: test byte ptr [ecx + 0x174], dl
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x5886d5fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B EA: mov ebp, edx
        __asm _emit 0x8b
        __asm _emit 0xea
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 0A: movsx ecx, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0a
        ; Exact mapped bytes 83 F1 AA: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xaa
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes D1 ED: shr ebp, 1
        __asm _emit 0xd1
        __asm _emit 0xed
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 89 44 24 28: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes E8 A6 9D 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 24: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 95 9D 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 C8 11 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x11
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 6C 24 14: imul ebp, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E5: mul ebp
        __asm _emit 0xf7
        __asm _emit 0xe5
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AB 11 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x11
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 6C 24 20: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes E9 41 01 00 00: jmp 0x5886d73f
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 51 9D 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 01: movsx eax, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F0 AA: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xaa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 3A 9D 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 13: movzx edx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 64 11 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x11
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 4C 24 14: imul ecx, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
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
        ; Exact mapped bytes 68 F6 09 00 00: push 0x9f6
        __asm _emit 0x68
        __asm _emit 0xf6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 37 11 F1 FF: call 0x5877e7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x5886d73f
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 91 74 01 00 00: test byte ptr [ecx + 0x174], dl
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 6E: je 0x5886d6e4
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F B7 11: movzx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x11
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B D2 0B: imul edx, edx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xd2
        __asm _emit 0x0b
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 83 F1 AA: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xaa
        ; Exact mapped bytes 6B C9 0B: imul ecx, ecx, 0xb
        __asm _emit 0x6b
        __asm _emit 0xc9
        __asm _emit 0x0b
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes B8 39 8E E3 38: mov eax, 0x38e38e39
        __asm _emit 0xb8
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xe3
        __asm _emit 0x38
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
        ; Exact mapped bytes D1 FA: sar edx, 1
        __asm _emit 0xd1
        __asm _emit 0xfa
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
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes D1 EB: shr ebx, 1
        __asm _emit 0xd1
        __asm _emit 0xeb
        ; Exact mapped bytes 89 59 64: mov dword ptr [ecx + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x64
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 17: mov edx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x17
        ; Exact mapped bytes 89 42 64: mov dword ptr [edx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 7A 10 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F AF 5C 24 14: imul ebx, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E3: mul ebx
        __asm _emit 0xf7
        __asm _emit 0xe3
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 62 10 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5C 24 24: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes EB 5B: jmp 0x5886d73f
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 0F B7 03: movzx eax, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x03
        ; Exact mapped bytes 8B 4F FC: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F0 AA: xor eax, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xf0
        __asm _emit 0xaa
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 89 41 64: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        ; Exact mapped bytes 0F B7 13: movzx edx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 81 F2 AA 00 00 00: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 29 10 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F B7 0B: movzx ecx, word ptr [ebx]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x0b
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 4C 24 14: imul ecx, dword ptr [esp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4E 2C: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x2c
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 01 10 F1 FF: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x10
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 01 54 24 18: add dword ptr [esp + 0x18], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 02: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x02
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 C7 08: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x08
        ; Exact mapped bytes 29 54 24 28: sub dword ptr [esp + 0x28], edx
        __asm _emit 0x29
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 89 5C 24 24: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 0F 85 C3 FD FF FF: jne 0x5886d522
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5C 24 1C: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 85 B8 01 00 00: lea eax, [ebp + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 18 01 00 00: lea ecx, [ebp + 0x118]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FB: mov edi, ebx
        __asm _emit 0x8b
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 70 B4: mov esi, dword ptr [eax - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0xb4
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B 71 FC: mov esi, dword ptr [ecx - 4]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0xfc
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 8B 70 2C: mov esi, dword ptr [eax + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x2c
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 75 D5: jne 0x5886d771
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes 83 FB 0B: cmp ebx, 0xb
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x0b
        ; Exact mapped bytes 7D 4F: jge 0x5886d7f0
        __asm _emit 0x7d
        __asm _emit 0x4f
        ; Exact mapped bytes BF 0B 00 00 00: mov edi, 0xb
        __asm _emit 0xbf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 84 9D B8 01 00 00: lea eax, [ebp + ebx*4 + 0x1b8]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8C DD 18 01 00 00: lea ecx, [ebp + ebx*8 + 0x118]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B FB: sub edi, ebx
        __asm _emit 0x2b
        __asm _emit 0xfb
        ; Exact mapped bytes EB 08: jmp 0x5886d7c0
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D7C0 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_5886ba60_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 70 B4: mov esi, dword ptr [eax - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0xb4
        ; Exact mapped bytes BB FE FF 00 00: mov ebx, 0xfffe
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 71 FC: mov esi, dword ptr [ecx - 4]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0xfc
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 30: mov esi, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x30
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 70 2C: mov esi, dword ptr [eax + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x2c
        ; Exact mapped bytes 66 21 5E 24: and word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x24
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 75 D0: jne 0x5886d7c0
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 59 64: mov ebx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x64
        ; Exact mapped bytes BE 20 00 00 00: mov esi, 0x20
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 24 02 00 00: lea eax, [ebp + 0x224]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 7E EF: lea edi, [esi - 0x11]
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0xef
        ; Exact mapped bytes F6 C3 01: test bl, 1
        __asm _emit 0xf6
        __asm _emit 0xc3
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x5886d810
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        ; Exact mapped bytes D1 EB: shr ebx, 1
        __asm _emit 0xd1
        __asm _emit 0xeb
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 2B F2: sub esi, edx
        __asm _emit 0x2b
        __asm _emit 0xf2
        ; Exact mapped bytes 75 EC: jne 0x5886d805
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 8B 85 28 03 00 00: mov eax, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x03
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
        ; Exact mapped bytes 8B 85 2C 03 00 00: mov eax, dword ptr [ebp + 0x32c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 30 03 00 00: mov eax, dword ptr [ebp + 0x330]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 34 03 00 00: mov eax, dword ptr [ebp + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 32 DB: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xdb
        ; Exact mapped bytes 88 5C 24 30: mov byte ptr [esp + 0x30], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes BE A4 01 00 00: mov esi, 0x1a4
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 3C 00 00 00: mov edi, 0x3c
        __asm _emit 0xbf
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x5886d860
        __asm _emit 0xeb
        __asm _emit 0x08
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D860 .. +0x481 bytes.
extern "C" __declspec(naked) void FUN_5886ba60_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 85 84 00 00 00: mov eax, dword ptr [ebp + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 4C 30 02: movzx ecx, word ptr [eax + esi + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x02
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 0F B7 00: movzx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 AA 02 00 00: jne 0x5886db24
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 0F 84 11 04 00 00: je 0x5886dc94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1A: cmp eax, 0x1a
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1a
        ; Exact mapped bytes 0F 84 06 02 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1B: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1b
        ; Exact mapped bytes 0F 84 FD 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1C: cmp eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1D: cmp eax, 0x1d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1d
        ; Exact mapped bytes 0F 84 EB 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1E: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1e
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 0F 84 D0 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 21: cmp eax, 0x21
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x21
        ; Exact mapped bytes 0F 84 C7 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 22: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x22
        ; Exact mapped bytes 0F 84 BE 01 00 00: je 0x5886da92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 26: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x26
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x5886da00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 27: cmp eax, 0x27
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x27
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x5886da00
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 28: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x28
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5886d97a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 64 01 00 00 3D: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 17: jle 0x5886d914
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886d914
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F4 00 00 00: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886d916
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886d94b
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E FE 02 00 00: jle 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F1 02 00 00: je 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F0 00 00 00: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E2 02 00 00: jmp 0x5886dc5c
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 64 01 00 00 3D: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 17: jle 0x5886d99a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886d99a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F4 00 00 00: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886d99c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886d9d1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 78 02 00 00: jle 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 6B 02 00 00: je 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F0 00 00 00: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C 02 00 00: jmp 0x5886dc5c
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 1B 01 00 00: cmp dword ptr [eax + 0x164], 0x11b
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886da28
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886da28
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 6C 04 00 00: mov eax, dword ptr [ecx + 0x46c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886da2a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886da5f
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 1C 01 00 00: cmp dword ptr [eax + 0x164], 0x11c
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E E6 01 00 00: jle 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 70 04 00 00: mov eax, dword ptr [ecx + 0x470]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x5886dc5c
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 19 01 00 00: cmp dword ptr [eax + 0x164], 0x119
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886daba
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886daba
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 64 04 00 00: mov eax, dword ptr [ecx + 0x464]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886dabc
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886daf1
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 64 01 00 00 1A 01 00 00: cmp dword ptr [eax + 0x164], 0x11a
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 54 01 00 00: jle 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 68 04 00 00: mov eax, dword ptr [ecx + 0x468]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x5886dc5c
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 66 01 00 00: jne 0x5886dc94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 05: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 75 0A: jne 0x5886db3d
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C6 44 24 30 01: mov byte ptr [esp + 0x30], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x5886dc94
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 18: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x18
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x5886dbd1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3D: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 17: jle 0x5886db6b
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886db6b
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F4 00 00 00: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886db6d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886dba2
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E A7 00 00 00: jle 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5886dc5a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F0 00 00 00: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5886dc5c
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 29: cmp eax, 0x29
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x29
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x5886dc94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 64 01 00 00 3D: cmp dword ptr [eax + 0x164], 0x3d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3d
        ; Exact mapped bytes 7E 17: jle 0x5886dbff
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886dbff
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F4 00 00 00: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886dc01
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 28 03 00 00: mov ecx, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x5886dc36
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 18: mov ebx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes A1 30 47 A2 58: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 B8 64 01 00 00: cmp dword ptr [eax + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5886dc5a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 8C 01 00 00 00: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5886dc5a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 88 8C 01 00 00: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 81 F0 00 00 00: mov eax, dword ptr [ecx + 0xf0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886dc5c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 8D 2C 03 00 00: mov ecx, dword ptr [ebp + 0x32c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 41 50: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x5886dc92
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 58 10: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x10
        ; Exact mapped bytes 89 59 0C: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 58 14: mov ebx, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x14
        ; Exact mapped bytes 89 59 10: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        ; Exact mapped bytes 8B 58 18: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x18
        ; Exact mapped bytes 83 C0 18: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x18
        ; Exact mapped bytes 83 C1 14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x14
        ; Exact mapped bytes 89 19: mov dword ptr [ecx], ebx
        __asm _emit 0x89
        __asm _emit 0x19
        ; Exact mapped bytes 8B 58 04: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes 89 59 04: mov dword ptr [ecx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x04
        ; Exact mapped bytes 8B 58 08: mov ebx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x08
        ; Exact mapped bytes 89 59 08: mov dword ptr [ecx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes B3 01: mov bl, 1
        __asm _emit 0xb3
        __asm _emit 0x01
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 81 FE C0 01 00 00: cmp esi, 0x1c0
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8C BD FB FF FF: jl 0x5886d860
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 80 FB 01: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 14: jne 0x5886dcbc
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 28 03 00 00: mov eax, dword ptr [ebp + 0x328]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 85 2C 03 00 00: mov eax, dword ptr [ebp + 0x32c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 80 7C 24 30 01: cmp byte ptr [esp + 0x30], 1
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        ; Exact mapped bytes 75 14: jne 0x5886dcd7
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 30 03 00 00: mov eax, dword ptr [ebp + 0x330]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B AD 34 03 00 00: mov ebp, dword ptr [ebp + 0x334]
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 55 24: or word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x55
        __asm _emit 0x24
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
