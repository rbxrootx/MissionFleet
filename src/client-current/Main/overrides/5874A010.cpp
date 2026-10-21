// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874A010 .. +0x5BA bytes.
extern "C" __declspec(naked) void FUN_5874a010_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 CC E3 97 58: push 0x5897e3cc
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xe3
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
        ; Exact mapped bytes 83 EC 28: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x28
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
        ; Exact mapped bytes 8D 44 24 3C: lea eax, [esp + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B E9: mov ebp, ecx
        __asm _emit 0x8b
        __asm _emit 0xe9
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 85 98 00 00 00: cmp dword ptr [ebp + 0x98], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 68 05 00 00: jne 0x5874a5b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 44 24 5C: cmp dword ptr [esp + 0x5c], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 75 0C: jne 0x5874a05c
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 60: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x60
        ; Exact mapped bytes 8B 4D 58: mov ecx, dword ptr [ebp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x58
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 0A: jmp 0x5874a066
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 55 64: mov edx, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4D 5C: mov ecx, dword ptr [ebp + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x5c
        ; Exact mapped bytes 89 54 24 18: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 74 24 60: mov esi, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes C7 44 24 14 00 00 00 00: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8C 07 02 00 00: jl 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 3A: je 0x5874a0be
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 3B CE: cmp ecx, esi
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 0F 8D F5 01 00 00: jge 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 83 90 04 01 00: mov eax, dword ptr [ebx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 83 88 04 01 00: add eax, dword ptr [ebx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 3C 49: lea edi, [ecx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x3c
        __asm _emit 0x49
        ; Exact mapped bytes 8B 14 90: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x90
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 F7: div edi
        __asm _emit 0xf7
        __asm _emit 0xf7
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F AF C6: imul eax, esi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc6
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 87 C3 01 00 00: ja 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 50: mov ecx, dword ptr [ebp + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x50
        ; Exact mapped bytes 69 C9 F4 01 00 00: imul ecx, ecx, 0x1f4
        __asm _emit 0x69
        __asm _emit 0xc9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4C 24 54: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x54
        ; Exact mapped bytes C1 FA 09: sar edx, 9
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x09
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 76 02: jbe 0x5874a0e2
        __asm _emit 0x76
        __asm _emit 0x02
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 54 24 58: mov edx, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 8D 34 11: lea esi, [ecx + edx]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4C 24 64: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x64
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
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
        ; Exact mapped bytes 8D 7C 02 1E: lea edi, [edx + eax + 0x1e]
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 83 90 04 01 00: mov eax, dword ptr [ebx + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 83 88 04 01 00: add eax, dword ptr [ebx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes B8 59 17 B7 D1: mov eax, 0xd1b71759
        __asm _emit 0xb8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 0C 91: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x91
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes C1 EA 0D: shr edx, 0xd
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0d
        ; Exact mapped bytes 69 D2 10 27 00 00: imul edx, edx, 0x2710
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x5874a1c3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 05: jge 0x5874a150
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes C1 E6 04: shl esi, 4
        __asm _emit 0xc1
        __asm _emit 0xe6
        __asm _emit 0x04
        ; Exact mapped bytes EB 6B: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x6b
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 08: jge 0x5874a16d
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes EB 4E: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
        ; Exact mapped bytes C1 FA 03: sar edx, 3
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x03
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 06: jge 0x5874a188
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes EB 33: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EF: imul edi
        __asm _emit 0xf7
        __asm _emit 0xef
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
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 7D 04: jge 0x5874a1a1
        __asm _emit 0x7d
        __asm _emit 0x04
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes EB 1A: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C1 E1 04: shl ecx, 4
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x04
        ; Exact mapped bytes 2B CE: sub ecx, esi
        __asm _emit 0x2b
        __asm _emit 0xce
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
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
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes C7 44 24 14 01 00 00 00: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 8E D9 03 00 00: jle 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7D 54: mov edi, dword ptr [ebp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x54
        ; Exact mapped bytes DB 85 94 00 00 00: fild dword ptr [ebp + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3B FE: cmp edi, esi
        __asm _emit 0x3b
        __asm _emit 0xfe
        ; Exact mapped bytes DC 0D 18 CF 98 58: fmul qword ptr [0x5898cf18]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F 9E C1: setle cl
        __asm _emit 0x0f
        __asm _emit 0x9e
        __asm _emit 0xc1
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 8D 98 00 00 00: mov dword ptr [ebp + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B3 2A 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2a
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 2B FE: sub edi, esi
        __asm _emit 0x2b
        __asm _emit 0xfe
        ; Exact mapped bytes 89 44 24 60: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 89 7D 54: mov dword ptr [ebp + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x54
        ; Exact mapped bytes 79 07: jns 0x5874a1ff
        __asm _emit 0x79
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 54 00 00 00 00: mov dword ptr [ebp + 0x54], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 54: mov edx, dword ptr [ebp + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x54
        ; Exact mapped bytes 8B 4D 6C: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x6c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 35 45 03 00: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes BF 02 00 00 00: mov edi, 2
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 1C 01 00 00: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7C 24 60: cmp dword ptr [esp + 0x60], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x5874a314
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes E8 28 2A 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 89 5C 24 5C: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 39 7C 24 14: cmp dword ptr [esp + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x5874a2c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x5874a397
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 88 24 05 01 00: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 31: cmp dword ptr [eax + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        ; Exact mapped bytes 89 4C 24 58: mov dword ptr [esp + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes 7E 14: jle 0x5874a276
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 39 B8 90 01 00 00: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x5874a276
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B B8 90 01 00 00: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 40 0C 00 00: add edi, 0xc40
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x5874a372
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 58: mov esi, dword ptr [esp + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x58
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
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 83 C1 32: add ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x32
        ; Exact mapped bytes 0F AF CE: imul ecx, esi
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xce
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
        ; Exact mapped bytes 2B F0: sub esi, eax
        __asm _emit 0x2b
        __asm _emit 0xf0
        ; Exact mapped bytes 2B 74 24 18: sub esi, dword ptr [esp + 0x18]
        __asm _emit 0x2b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 FE 01: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x01
        ; Exact mapped bytes 0F 8D 0B FF FF FF: jge 0x5874a1c3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes BE 01 00 00 00: mov esi, 1
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x5874a1cb
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 44 24 44 01 00 00 00: mov dword ptr [esp + 0x44], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B DF: cmp ebx, edi
        __asm _emit 0x3b
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 84 77 01 00 00: je 0x5874a449
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 24 05 01 00: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 60 01 00 00 CE 00 00 00: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8E 29 01 00 00: jle 0x5874a420
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 B8 90 01 00 00: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x5874a420
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B8 90 01 00 00: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 80 33 00 00: add edi, 0x3380
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x5874a420
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 29 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 83 7C 24 14 00: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 89 5C 24 5C: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x5c
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5874a3da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 7C 24 44: mov dword ptr [esp + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 62: je 0x5874a397
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 24 05 01 00: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B8 60 01 00 00 32: cmp dword ptr [eax + 0x160], 0x32
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        ; Exact mapped bytes 7E 17: jle 0x5874a36a
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5874a36a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B B8 90 01 00 00: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 80 0C 00 00: add edi, 0xc80
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5874a36c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 BF 28 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 60: mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 1B 0A 01 00: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5874a399
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 B9 60 01 00 00 33: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        ; Exact mapped bytes C7 44 24 44 FF FF FF FF: mov dword ptr [esp + 0x44], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 7E 20: jle 0x5874a3d0
        __asm _emit 0x7e
        __asm _emit 0x20
        ; Exact mapped bytes 83 B9 90 01 00 00 00: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x5874a3d0
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 89 90 01 00 00: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C1 C0 0C 00 00: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 F8 00 00 00: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5874a451
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 89 88 F8 00 00 00: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x5874a451
        __asm _emit 0xeb
        __asm _emit 0x77
        ; Exact mapped bytes C7 44 24 44 03 00 00 00: mov dword ptr [esp + 0x44], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 63: je 0x5874a449
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 82 24 05 01 00: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 44 24 58: mov dword ptr [esp + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 B8 60 01 00 00 CC 00 00 00: cmp dword ptr [eax + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 17: jle 0x5874a41e
        __asm _emit 0x7e
        __asm _emit 0x17
        ; Exact mapped bytes 83 B8 90 01 00 00 00: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x5874a41e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B B8 90 01 00 00: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C7 00 33 00 00: add edi, 0x3300
        __asm _emit 0x81
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5874a420
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 0B 28 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 32 00 00 00: mov ecx, 0x32
        __asm _emit 0xb9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 45 04: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 60: mov ecx, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 0A: push 0xa
        __asm _emit 0x6a
        __asm _emit 0x0a
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 67 09 01 00: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 44 24 44 FF FF FF FF: mov dword ptr [esp + 0x44], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 BD 98 00 00 00 02: cmp dword ptr [ebp + 0x98], 2
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 4C: mov esi, dword ptr [esp + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 BE 6C 60 00 00 00: cmp dword ptr [esi + 0x606c], 0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 60: mov edx, dword ptr [esp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CD 29 19 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x29
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 00 D0 98 58: fld dword ptr [0x5898d000]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D9 05 FC CF 98 58: fld dword ptr [0x5898cffc]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 0F B7 48 04: movzx ecx, word ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes D9 05 F8 CF 98 58: fld dword ptr [0x5898cff8]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 24: fstp dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 05 50 30 9A 58: fld dword ptr [0x589a3050]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 05 F4 CF 98 58: fld dword ptr [0x5898cff4]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 2C: fstp dword ptr [esp + 0x2c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes D9 05 F0 CF 98 58: fld dword ptr [0x5898cff0]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 54 24 30: fst dword ptr [esp + 0x30]
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes D9 54 24 34: fst dword ptr [esp + 0x34]
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes D9 5C 24 38: fstp dword ptr [esp + 0x38]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes D9 44 8C 1C: fld dword ptr [esp + ecx*4 + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x8c
        __asm _emit 0x1c
        ; Exact mapped bytes DB 85 94 00 00 00: fild dword ptr [ebp + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D E8 CF 98 58: fmul qword ptr [0x5898cfe8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DC 0D E0 CF 98 58: fmul qword ptr [0x5898cfe0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 27 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x27
        __asm _emit 0x23
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 33 C2: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 96 84 12 00 00: mov edx, dword ptr [esi + 0x1284]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 29 86 8C 12 00 00: sub dword ptr [esi + 0x128c], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 81 F2 AA AA AA AA: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf2
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes 89 96 84 12 00 00: mov dword ptr [esi + 0x1284], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8A 96 54 03 00 00: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 91 54 03 00 00: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x5874a53f
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 85 88 00 00 00: mov eax, dword ptr [ebp + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 11 FA FF FF: call 0x58749f50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 71 04: cmp esi, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x71
        __asm _emit 0x04
        ; Exact mapped bytes 75 34: jne 0x5874a57e
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 8B 95 94 00 00 00: mov edx, dword ptr [ebp + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 24 FA FF FF: call 0x58749f80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 6C 12 00 00: mov ecx, dword ptr [esi + 0x126c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 F1 AA AA AA AA: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0xaa
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 E1: mul ecx
        __asm _emit 0xf7
        __asm _emit 0xe1
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C1 EA 05: shr edx, 5
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 02 BF 09 00: call 0x587e6480
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 96 54 03 00 00: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 94 00 00 00: mov eax, dword ptr [ebp + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8D 04 40: lea eax, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x40
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
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
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 FC F9 FF FF: call 0x58749fa0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 BD 98 00 00 00 01: cmp dword ptr [ebp + 0x98], 1
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes EB 02: jmp 0x5874a5b4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 4C 24 3C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
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
        ; Exact mapped bytes 83 C4 34: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x34
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
