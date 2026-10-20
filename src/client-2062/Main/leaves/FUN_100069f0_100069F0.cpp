// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100069F0 .. +0x108F bytes.
extern "C" __declspec(naked) void FUN_100069f0_100069F0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 E4 F8: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf8
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 2E CF 16 10: push 0x1016cf2e
        __asm _emit 0x68
        __asm _emit 0x2e
        __asm _emit 0xcf
        __asm _emit 0x16
        __asm _emit 0x10
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 EC 18 01 00 00: sub esp, 0x118
        __asm _emit 0x81
        __asm _emit 0xec
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
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes F6 46 24 04: test byte ptr [esi + 0x24], 4
        __asm _emit 0xf6
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 48 10 00 00: je 0x10007a69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 64 04 00 00: mov eax, dword ptr [esi + 0x464]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 A6 0F 00 00: je 0x100079d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 84 00 00 00: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 98 00 00 00: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 7D 09: jge 0x10006a4b
        __asm _emit 0x7d
        __asm _emit 0x09
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 86 98 00 00 00: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x10006a51
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 AE 98 00 00 00: mov dword ptr [esi + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 20 05 00 00: mov edx, dword ptr [esi + 0x520]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF FE FF 00 00: mov edi, 0xfffe
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 5A 24: test byte ptr [edx + 0x24], bl
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x24
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x10006af4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 05 00 00: mov ecx, dword ptr [esi + 0x524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 86 D0 02 00 00: mov ax, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 71 38 02 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D0 02 00 00: mov cx, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 28 05 00 00: mov ecx, dword ptr [esi + 0x528]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 38 02 00: call 0x1002a2f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes B8 56 55 55 55: mov eax, 0x55555556
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        ; Exact mapped bytes 66 8B 8E 1C 05 00 00: mov cx, word ptr [esi + 0x51c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D0 02 00 00: mov cx, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 24 05 00 00: mov eax, dword ptr [esi + 0x524]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 8A 48 24: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 7D 1A: jge 0x10006adb
        __asm _emit 0x7d
        __asm _emit 0x1a
        ; Exact mapped bytes 84 CB: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xcb
        ; Exact mapped bytes 74 04: je 0x10006ac9
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 28 05 00 00: mov eax, dword ptr [esi + 0x528]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 40 24 01: test byte ptr [eax + 0x24], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 75 1F: jne 0x10006af4
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes EB 19: jmp 0x10006af4
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes F6 C1 01: test cl, 1
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 04: jne 0x10006ae4
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 86 28 05 00 00: mov eax, dword ptr [esi + 0x528]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 40 24 01: test byte ptr [eax + 0x24], 1
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 74 04: je 0x10006af4
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 85 0F 00 00: call 0x10007a80
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 02 00 00: mov ecx, dword ptr [esi + 0x224]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 0F AF 8E AC 04 00 00: imul ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 89 96 20 03 00 00: mov dword ptr [esi + 0x320], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A0 04 00 00: mov ecx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 9C 04 00 00: mov ecx, dword ptr [esi + 0x49c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x04
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
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
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 5F 81 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E E4 04 00 00: mov ecx, dword ptr [esi + 0x4e4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 4C 81 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E EC 04 00 00: mov ecx, dword ptr [esi + 0x4ec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 39 81 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E F0 04 00 00: mov ecx, dword ptr [esi + 0x4f0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 26 81 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E F4 04 00 00: mov ecx, dword ptr [esi + 0x4f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 13 81 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 0A: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x0a
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E FC 04 00 00: mov ecx, dword ptr [esi + 0x4fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 FD 80 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 83 E8 0A: sub eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 83 C1 1E: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x1e
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 04 05 00 00: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E4 80 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 83 EA 0A: sub edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 8E 00 05 00 00: mov ecx, dword ptr [esi + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 46: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x46
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CB 80 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 04 00 00: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 1F 00 00 80: and ecx, 0x8000001f
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x10006c18
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 C9 E0: or ecx, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xe0
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 89 94 CE 48 03 00 00: mov dword ptr [esi + ecx*8 + 0x348], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0xce
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 89 84 CE 4C 03 00 00: mov dword ptr [esi + ecx*8 + 0x34c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
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
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 8E A0 04 00 00: mov ecx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
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
        ; Exact mapped bytes 8D 8C 02 D4 FE FF FF: lea ecx, [edx + eax - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F0 83 06 00: call 0x1006f060
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 28: je 0x10006c9c
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 89 9E 4C 04 00 00: mov dword ptr [esi + 0x44c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE E8 04 00 00: mov edi, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 47 26 1A 27: mov word ptr [edi + 0x26], 0x271a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0x27
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10006c93
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 0D 83 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 2E: je 0x10006cc8
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes EB 26: jmp 0x10006cc2
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 89 AE 4C 04 00 00: mov dword ptr [esi + 0x44c], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE E8 04 00 00: mov edi, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 40: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x40
        ; Exact mapped bytes 66 C7 47 26 06 27: mov word ptr [edi + 0x26], 0x2706
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x27
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10006cbb
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 E5 82 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 30: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x30
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10006cc8
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 38 82 0F 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 B8 04 00 00: mov eax, dword ptr [esi + 0x4b8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 20 51 17 10: mov edi, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 75 4F: jne 0x10006d28
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes 39 AE 10 03 00 00: cmp dword ptr [esi + 0x310], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 47: jne 0x10006d28
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 8E A0 04 00 00: mov ecx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes B8 D3 4D 62 10: mov eax, 0x10624dd3
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x10
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
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
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 8E E8 04 00 00: mov ecx, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 AD 7F 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x10006e3b
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE 4C 04 00 00: cmp dword ptr [esi + 0x44c], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x10006dfe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E8 04 00 00: mov ecx, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes E8 DF 83 0F 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A0 04 00 00: mov ecx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 96 D8 04 00 00: mov edx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 F9 06: sar ecx, 6
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x06
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 8D 8C 10 D4 FE FF FF: lea ecx, [eax + edx - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E8 04 00 00: mov ecx, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 48 7F 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x7f
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 05 00 00 00: mov ecx, 5
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 3C: jne 0x10006dd2
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 86 D8 04 00 00: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 7E 0F: jle 0x10006daf
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 83 F8 0A: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 08: jle 0x10006dad
        __asm _emit 0x7e
        __asm _emit 0x08
        ; Exact mapped bytes 89 AE DC 04 00 00: mov dword ptr [esi + 0x4dc], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x10006dd2
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 7D 0D: jge 0x10006dbe
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 83 F8 F6: cmp eax, -0xa
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xf6
        ; Exact mapped bytes 7D 08: jge 0x10006dbe
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 89 9E DC 04 00 00: mov dword ptr [esi + 0x4dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x10006dd2
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 25 01 00 00 80: and eax, 0x80000001
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x10006dcc
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 83 C8 FE: or eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xfe
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 89 86 DC 04 00 00: mov dword ptr [esi + 0x4dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE DC 04 00 00: cmp dword ptr [esi + 0x4dc], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x10006dec
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 1E 00 00 00: mov ecx, 0x1e
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 01 96 D8 04 00 00: add dword ptr [esi + 0x4d8], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x10006e3b
        __asm _emit 0xeb
        __asm _emit 0x4f
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 1E 00 00 00: mov ecx, 0x1e
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 29 96 D8 04 00 00: sub dword ptr [esi + 0x4d8], edx
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x10006e3b
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 8E E8 04 00 00: mov ecx, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 01 00 00: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 12 83 0F 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A0 04 00 00: mov ecx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E E8 04 00 00: mov ecx, dword ptr [esi + 0x4e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B 7E 0F 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 89 AE D8 04 00 00: mov dword ptr [esi + 0x4d8], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 84 21 01 00 00: je 0x10006f67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B5 A1 0E 00: call 0x100f1000
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa1
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x10006f67
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 9A 74 04 01 00: cmp dword ptr [edx + 0x10474], ebx
        __asm _emit 0x39
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x10006f67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 88 7C 04 01 00: mov ecx, dword ptr [eax + 0x1047c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 81 E1 07 00 00 80: and ecx, 0x80000007
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 79 05: jns 0x10006e7a
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 83 C9 F8: or ecx, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0xf8
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x10006f67
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE 4C 04 00 00: cmp dword ptr [esi + 0x44c], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 79: je 0x10006f01
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
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
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B BE B0 00 00 00: mov edi, dword ptr [esi + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8D 04 D5 00 00 00 00: lea eax, [edx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 8D 0C 4A: lea ecx, [edx + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x4a
        ; Exact mapped bytes D1 E1: shl ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xe1
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 96 A0 04 00 00: mov edx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 A4 00 00 00: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 96 AC 00 00 00: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 96 A8 00 00 00: mov edx, dword ptr [esi + 0xa8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes EB 5B: jmp 0x10006f5c
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D6 02 00 00: mov cx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 CD 00 00 00 00: lea eax, [ecx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 14 40: lea edx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x40
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 8D 14 51: lea edx, [ecx + edx*2]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x51
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 96 A0 04 00 00: mov edx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 A0 00 00 00: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 8E 9C 00 00 00: mov ecx, dword ptr [esi + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 A9 7B 06 00: call 0x1006eb10
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE 18 02 00 00: cmp dword ptr [esi + 0x218], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C3 01 00 00: je 0x10007136
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 2D 9C 7D 1A 10: cmp dword ptr [0x101a7d9c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x10007087
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D DC 56 1C 10: mov edi, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8A E0 04 01 00: mov ecx, dword ptr [edx + 0x104e0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6F 14: mov ebp, dword ptr [edi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x14
        ; Exact mapped bytes 8B 81 10 01 00 00: mov eax, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 59 50: mov ebx, dword ptr [ecx + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x50
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 47 1C: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x1c
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes 8B 6E 04: mov ebp, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x04
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes C1 E0 03: shl eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 7C 24 14: idiv dword ptr [esp + 0x14]
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 57 18: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x18
        ; Exact mapped bytes 2B E8: sub ebp, eax
        __asm _emit 0x2b
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 47 20: mov eax, dword ptr [edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x20
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 2B EB: sub ebp, ebx
        __asm _emit 0x2b
        __asm _emit 0xeb
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 59 54: mov ebx, dword ptr [ecx + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x54
        ; Exact mapped bytes 8B 89 10 01 00 00: mov ecx, dword ptr [ecx + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes C1 E0 03: shl eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 2B F9: sub edi, ecx
        __asm _emit 0x2b
        __asm _emit 0xf9
        ; Exact mapped bytes 03 FB: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xfb
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 05 00 00 00: mov ecx, 5
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes A1 D8 57 1C 10: mov eax, dword ptr [0x101c57d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 88 70 01 00 00: mov ecx, dword ptr [eax + 0x170]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C2 13: add edx, 0x13
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x13
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 7E 2A: jle 0x10007035
        __asm _emit 0x7e
        __asm _emit 0x2a
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7C 26: jl 0x10007035
        __asm _emit 0x7c
        __asm _emit 0x26
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1C: je 0x10007035
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 1C 90: mov ebx, dword ptr [eax + edx*4]
        __asm _emit 0x8b
        __asm _emit 0x1c
        __asm _emit 0x90
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 15: je 0x10007035
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 67 19 04 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 13: mov edx, dword ptr [ebx]
        __asm _emit 0x8b
        __asm _emit 0x13
        ; Exact mapped bytes 68 30 F8 FF FF: push 0xfffff830
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 88 34 1A 02 00: mov ecx, dword ptr [eax + 0x21a34]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 43: jne 0x10007087
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 8B 86 68 04 00 00: mov eax, dword ptr [esi + 0x468]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 39: je 0x10007087
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 75 29: jne 0x10007087
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 22: cmp dword ptr [eax + 0x170], 0x22
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        ; Exact mapped bytes 7E 12: jle 0x1000707e
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x1000707e
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 88 00 00 00: mov ecx, dword ptr [eax + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10007080
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 9E 18 02 00 00: mov ebx, dword ptr [esi + 0x218]
        __asm _emit 0x8b
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 58: push 0x58
        __asm _emit 0x6a
        __asm _emit 0x58
        ; Exact mapped bytes 4B: dec ebx
        __asm _emit 0x4b
        ; Exact mapped bytes 89 9E 18 02 00 00: mov dword ptr [esi + 0x218], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 57 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x57
        __asm _emit 0x16
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
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 89 AC 24 30 01 00 00: mov dword ptr [esp + 0x130], ebp
        __asm _emit 0x89
        __asm _emit 0xac
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 67: je 0x10007116
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes A1 EC 57 1C 10: mov eax, dword ptr [0x101c57ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 60 01 00 00 14: cmp dword ptr [eax + 0x160], 0x14
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        ; Exact mapped bytes 7E 10: jle 0x100070cd
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 8B 80 90 01 00 00: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 06: je 0x100070cd
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8D A8 00 05 00 00: lea ebp, [eax + 0x500]
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 1D 20 51 17 10: mov ebx, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 68 70 17 00 00: push 0x1770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B B8 E0 04 01 00: mov edi, dword ptr [eax + 0x104e0]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 0A 00 00 00: mov ecx, 0xa
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes B9 0A 00 00 00: mov ecx, 0xa
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C0 05: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x05
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 7C 87 0F 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10007118
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 68 02 01 00 00: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C7 84 24 34 01 00 00 FF FF FF FF: mov dword ptr [esp + 0x134], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 31 80 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x80
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 02 00 00: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 8E 80 00 00 00: jle 0x100071c4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 AE 68 04 00 00: cmp dword ptr [esi + 0x468], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 51: je 0x1000719d
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 39 AE 30 05 00 00: cmp dword ptr [esi + 0x530], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 49: jne 0x1000719d
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 A9 34 1A 02 00: cmp dword ptr [ecx + 0x21a34], ebp
        __asm _emit 0x39
        __asm _emit 0xa9
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x1000719d
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 56 74: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x74
        ; Exact mapped bytes 3B 50 04: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 75 2E: jne 0x1000719d
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 25: cmp dword ptr [eax + 0x170], 0x25
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        ; Exact mapped bytes 7E 12: jle 0x1000718f
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 08: je 0x1000718f
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 94 00 00 00: mov ecx, dword ptr [eax + 0x94]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10007191
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 30 05 00 00: mov dword ptr [esi + 0x530], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 1C 02 00 00: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 04 00 00: mov ecx, dword ptr [esi + 0x4f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 86 1C 02 00 00: mov dword ptr [esi + 0x21c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes F7 D2: not edx
        __asm _emit 0xf7
        __asm _emit 0xd2
        ; Exact mapped bytes 32 D0: xor dl, al
        __asm _emit 0x32
        __asm _emit 0xd0
        ; Exact mapped bytes 23 D3: and edx, ebx
        __asm _emit 0x23
        __asm _emit 0xd3
        ; Exact mapped bytes 33 D0: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes EB 18: jmp 0x100071dc
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 75 16: jne 0x100071dc
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 86 F4 04 00 00: mov eax, dword ptr [esi + 0x4f4]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 1C 02 00 00 FF FF FF FF: mov dword ptr [esi + 0x21c], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 AE 54 04 00 00: cmp dword ptr [esi + 0x454], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 10 04 00 00: jne 0x100075f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 2D DC 56 1C 10: mov ebp, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B B8 E0 04 01 00: mov edi, dword ptr [eax + 0x104e0]
        __asm _emit 0x8b
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 1C: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 14: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 9F 10 01 00 00: mov ebx, dword ptr [edi + 0x110]
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes C1 E0 03: shl eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 55 18: mov edx, dword ptr [ebp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 47 50: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x50
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 20: mov eax, dword ptr [ebp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x20
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 6F 54: mov ebp, dword ptr [edi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x54
        ; Exact mapped bytes D1 F8: sar eax, 1
        __asm _emit 0xd1
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes C1 E0 03: shl eax, 3
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x03
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FB: idiv ebx
        __asm _emit 0xf7
        __asm _emit 0xfb
        ; Exact mapped bytes 8B 5E 08: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 03 C5: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xc5
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8E 10 05 00 00: mov ecx, dword ptr [esi + 0x510]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 17 04 00: call 0x10048a20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE C2 02 00 00 00: cmp word ptr [esi + 0x2c2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B3 61: mov bl, 0x61
        __asm _emit 0xb3
        __asm _emit 0x61
        ; Exact mapped bytes 74 5A: je 0x100072b8
        __asm _emit 0x74
        __asm _emit 0x5a
        ; Exact mapped bytes 8B 86 20 02 00 00: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 32: jle 0x1000729a
        __asm _emit 0x7e
        __asm _emit 0x32
        ; Exact mapped bytes 8B 86 B0 04 00 00: mov eax, dword ptr [esi + 0x4b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 07: jle 0x10007279
        __asm _emit 0x7e
        __asm _emit 0x07
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 86 B0 04 00 00: mov dword ptr [esi + 0x4b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE C0 02 00 00 02: cmp word ptr [esi + 0x2c0], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 74 0E: je 0x10007291
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 86 50 04 00 00: mov eax, dword ptr [esi + 0x450]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x10007332
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 58 2B 00 00: call 0x10009df0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x100072b8
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 75 1C: jne 0x100072b8
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 4C 24 13: lea ecx, [esp + 0x13]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x13
        ; Exact mapped bytes C7 86 20 02 00 00 FF FF FF FF: mov dword ptr [esi + 0x220], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 88 5C 24 1B: mov byte ptr [esp + 0x1b], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1b
        ; Exact mapped bytes E8 98 1B 00 00: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 50 04 00 00: mov eax, dword ptr [esi + 0x450]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 70: je 0x10007332
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 8E 24 02 00 00: mov ecx, dword ptr [esi + 0x224]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B BE D2 02 00 00: mov di, word ptr [esi + 0x2d2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 7E 23: jle 0x100072f8
        __asm _emit 0x7e
        __asm _emit 0x23
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes C1 E0 05: shl eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x05
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 0C 40: lea ecx, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x40
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 96 24 02 00 00: mov dword ptr [esi + 0x224], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100072fe
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 BE 24 02 00 00: mov dword ptr [esi + 0x224], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 24 02 00 00: mov eax, dword ptr [esi + 0x224]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7D 22: jge 0x1000732a
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes 8D 0C 89: lea ecx, [ecx + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x89
        ; Exact mapped bytes 8D 0C 88: lea ecx, [eax + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x88
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 96 24 02 00 00: mov dword ptr [esi + 0x224], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x10007352
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 89 BE 24 02 00 00: mov dword ptr [esi + 0x224], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x10007352
        __asm _emit 0xeb
        __asm _emit 0x20
        ; Exact mapped bytes 8B 86 68 04 00 00: mov eax, dword ptr [esi + 0x468]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 16: jne 0x10007352
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 86 B8 04 00 00: mov eax, dword ptr [esi + 0x4b8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x1000734b
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 75 07: jne 0x10007352
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 0E 4D 00 00: call 0x1000c060
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7E 74: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 9B 02 00 00: je 0x100075f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 81 7C 04 01 00: mov eax, dword ptr [ecx + 0x1047c]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 91 74 04 01 00: mov edx, dword ptr [ecx + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes B9 0C 00 00 00: mov ecx, 0xc
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 F9: idiv ecx
        __asm _emit 0xf7
        __asm _emit 0xf9
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 85 77 02 00 00: jne 0x100075f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 96 A0 04 00 00: mov edx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 47 08: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F AF C1: imul eax, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc1
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 1C: fstp qword ptr [esp + 0x1c]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E0 53 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x53
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 D2 53 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x53
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 89 86 24 03 00 00: mov dword ptr [esi + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 8B 86 D4 02 00 00: mov ax, word ptr [esi + 0x2d4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF 86 24 02 00 00: imul eax, dword ptr [esi + 0x224]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 8D 0C 80: lea ecx, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x80
        ; Exact mapped bytes B8 F1 19 76 05: mov eax, 0x57619f1
        __asm _emit 0xb8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 58 04 00 00: mov eax, dword ptr [esi + 0x458]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F 85 E7 01 00 00: jne 0x100075f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B AE 20 03 00 00: mov ebp, dword ptr [esi + 0x320]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 2B C5: sub eax, ebp
        __asm _emit 0x2b
        __asm _emit 0xc5
        ; Exact mapped bytes B9 00 00 00 00: mov ecx, 0
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 98 C1: sets cl
        __asm _emit 0x0f
        __asm _emit 0x98
        __asm _emit 0xc1
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 23 C1: and eax, ecx
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 8E 04 05 00 00: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EE 82 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 24 03 00 00: mov edx, dword ptr [esi + 0x324]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 05 00 00: mov ecx, dword ptr [esi + 0x500]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DC 82 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 48 04 00 00: mov eax, dword ptr [esi + 0x448]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x100074f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes 8B AE 20 03 00 00: mov ebp, dword ptr [esi + 0x320]
        __asm _emit 0x8b
        __asm _emit 0xae
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 24 03 00 00: mov eax, dword ptr [esi + 0x324]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 7D 7B: jge 0x100074f4
        __asm _emit 0x7d
        __asm _emit 0x7b
        ; Exact mapped bytes 8B 86 B8 04 00 00: mov eax, dword ptr [esi + 0x4b8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 05: je 0x10007488
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 75 6C: jne 0x100074f4
        __asm _emit 0x75
        __asm _emit 0x6c
        ; Exact mapped bytes 8D 54 24 13: lea edx, [esp + 0x13]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x13
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes C7 86 48 04 00 00 00 00 00 00: mov dword ptr [esi + 0x448], 0
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 5C 24 1B: mov byte ptr [esp + 0x1b], bl
        __asm _emit 0x88
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1b
        ; Exact mapped bytes E8 AC 19 00 00: call 0x10008e50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 88 34 1A 02 00: mov ecx, dword ptr [eax + 0x21a34]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 41: jne 0x100074f4
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 8B 86 68 04 00 00: mov eax, dword ptr [esi + 0x468]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 37: je 0x100074f4
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 3B 4A 04: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 75 29: jne 0x100074f4
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 27: cmp dword ptr [eax + 0x170], 0x27
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        ; Exact mapped bytes 7E 12: jle 0x100074eb
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x100074eb
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 9C 00 00 00: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100074ed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8D 0C BF: lea ecx, [edi + edi*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xbf
        ; Exact mapped bytes B8 67 66 66 66: mov eax, 0x66666667
        __asm _emit 0xb8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        ; Exact mapped bytes 8D 0C 4F: lea ecx, [edi + ecx*2]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x4f
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
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
        ; Exact mapped bytes 03 D0: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 86 20 03 00 00: mov eax, dword ptr [esi + 0x320]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x100075f8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes C7 86 B8 04 00 00 0A 00 00 00: mov dword ptr [esi + 0x4b8], 0xa
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 58 04 00 00 01 00 00 00: mov dword ptr [esi + 0x458], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 10 03 00 00: mov dword ptr [esi + 0x310], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 BE 18 03 00 00: mov dword ptr [esi + 0x318], edi
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 74 67: je 0x100075ab
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 8E 34 03 00 00: mov ecx, dword ptr [esi + 0x334]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 96 A0 04 00 00: mov edx, dword ptr [esi + 0x4a0]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 9C 04 00 00: mov eax, dword ptr [esi + 0x49c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 56 04: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 88 74 04 01 00: mov ecx, dword ptr [eax + 0x10474]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 90 7C 04 01 00: mov edx, dword ptr [eax + 0x1047c]
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 44 24 44: lea eax, [esp + 0x44]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        ; Exact mapped bytes 68 48 F0 17 10: push 0x1017f048
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 83 C4 24: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x24
        ; Exact mapped bytes 8D 4C 24 1C: lea ecx, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8D 54 24 28: lea edx, [esp + 0x28]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 34: lea eax, [esp + 0x34]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 BA 34 1A 02 00: cmp dword ptr [edx + 0x21a34], edi
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x100075f8
        __asm _emit 0x75
        __asm _emit 0x3f
        ; Exact mapped bytes 39 BE 68 04 00 00: cmp dword ptr [esi + 0x468], edi
        __asm _emit 0x39
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x100075f8
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 3B 41 04: cmp eax, dword ptr [ecx + 4]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 75 29: jne 0x100075f8
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 29: cmp dword ptr [eax + 0x170], 0x29
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        ; Exact mapped bytes 7E 12: jle 0x100075ef
        __asm _emit 0x7e
        __asm _emit 0x12
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 08: je 0x100075ef
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 88 A4 00 00 00: mov ecx, dword ptr [eax + 0xa4]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100075f1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 39 A8 34 1A 02 00: cmp dword ptr [eax + 0x21a34], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 6E 03 00 00: jne 0x10007979
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 3B D5: cmp edx, ebp
        __asm _emit 0x3b
        __asm _emit 0xd5
        ; Exact mapped bytes 74 43: je 0x1000765b
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7A 08: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x08
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 5A 04: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x04
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5D 51 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 4F 51 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x51
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x1000765d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8E 80 00 00 00: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 90 30 03 00 00: mov dl, byte ptr [eax + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 74 68: je 0x100076e0
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 39 AE 2C 05 00 00: cmp dword ptr [esi + 0x52c], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 60: jne 0x100076e0
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 8B 8E 68 04 00 00: mov ecx, dword ptr [esi + 0x468]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 75 56: jne 0x100076e5
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 3B B8 38 0C 00 00: cmp edi, dword ptr [eax + 0xc38]
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 4E: ja 0x100076e5
        __asm _emit 0x77
        __asm _emit 0x4e
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 A8 34 1A 02 00: cmp dword ptr [eax + 0x21a34], ebp
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 41: jne 0x100076e5
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 2B: cmp dword ptr [eax + 0x170], 0x2b
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2b
        ; Exact mapped bytes 7E 1E: jle 0x100076d0
        __asm _emit 0x7e
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 14: je 0x100076d0
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 88 AC 00 00 00: mov ecx, dword ptr [eax + 0xac]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 2C 05 00 00: mov dword ptr [esi + 0x52c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x100076e5
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 2C 05 00 00: mov dword ptr [esi + 0x52c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x100076e5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 96 80 00 00 00: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 8A 88 30 03 00 00: mov cl, byte ptr [eax + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 2C: je 0x1000772b
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 39 9E 2C 05 00 00: cmp dword ptr [esi + 0x52c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x1000772b
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 39 9E 68 04 00 00: cmp dword ptr [esi + 0x468], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x1000772b
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 3B B8 38 0C 00 00: cmp edi, dword ptr [eax + 0xc38]
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 14: jbe 0x1000772b
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 AA 34 1A 02 00: cmp dword ptr [edx + 0x21a34], ebp
        __asm _emit 0x39
        __asm _emit 0xaa
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x1000772b
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 AE 2C 05 00 00: mov dword ptr [esi + 0x52c], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 3B 48 04: cmp ecx, dword ptr [eax + 4]
        __asm _emit 0x3b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 7A 01 00 00: jne 0x100078b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 9E 68 04 00 00: cmp dword ptr [esi + 0x468], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 6E 01 00 00: jne 0x100078b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 AA 34 1A 02 00: cmp dword ptr [edx + 0x21a34], ebp
        __asm _emit 0x39
        __asm _emit 0xaa
        __asm _emit 0x34
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 5C 01 00 00: jne 0x100078b6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 78 0C: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x0c
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x100078b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 98 51 17 10: mov ebx, dword ptr [0x10175198]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 46 74: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x74
        ; Exact mapped bytes 8A 8F 30 03 00 00: mov cl, byte ptr [edi + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3A 88 30 03 00 00: cmp cl, byte ptr [eax + 0x330]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 78: je 0x100077f4
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 39 AE 34 05 00 00: cmp dword ptr [esi + 0x534], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 70: jne 0x100077f4
        __asm _emit 0x75
        __asm _emit 0x70
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 74 41: je 0x100077c9
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 ED 4F 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 DF 4F 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100077cb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D6 02 00 00: mov cx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 77 1C: ja 0x100077f4
        __asm _emit 0x77
        __asm _emit 0x1c
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 2B 05 30 CE 1A 10: sub eax, dword ptr [0x101ace30]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 3D 88 13 00 00: cmp eax, 0x1388
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 90 00 00 00: ja 0x1000787b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A3 30 CE 1A 10: mov dword ptr [0x101ace30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes EB 7A: jmp 0x1000786e
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8A 8F 30 03 00 00: mov cl, byte ptr [edi + 0x330]
        __asm _emit 0x8a
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 42 04: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 3A 88 30 03 00 00: cmp cl, byte ptr [eax + 0x330]
        __asm _emit 0x3a
        __asm _emit 0x88
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 63: je 0x1000786e
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 83 BE 34 05 00 00 01: cmp dword ptr [esi + 0x534], 1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 5A: jne 0x1000786e
        __asm _emit 0x75
        __asm _emit 0x5a
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 74 41: je 0x10007859
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 8B 57 08: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 8B 4E 08: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F AF C8: imul ecx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc8
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes 89 54 24 14: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 5D 4F 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 4F 4F 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000785b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D6 02 00 00: mov cx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 76 06: jbe 0x1000786e
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes 89 AE 34 05 00 00: mov dword ptr [esi + 0x534], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7F 78: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x7f
        __asm _emit 0x78
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 0F 85 F2 FE FF FF: jne 0x1000776b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x100078b1
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 1D: cmp dword ptr [eax + 0x170], 0x1d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        ; Exact mapped bytes 7E 0F: jle 0x10007898
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 05: je 0x10007898
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 8B 48 74: mov ecx, dword ptr [eax + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        ; Exact mapped bytes EB 02: jmp 0x1000789a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes C7 86 34 05 00 00 01 00 00 00: mov dword ptr [esi + 0x534], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes A3 30 CE 1A 10: mov dword ptr [0x101ace30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes BB 01 00 00 00: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 43 28 00 00: call 0x1000a100
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x10007979
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 3B 4A 04: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x10007979
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 8B 50 04: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 8B 78 08: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x08
        ; Exact mapped bytes 2B CA: sub ecx, edx
        __asm _emit 0x2b
        __asm _emit 0xca
        ; Exact mapped bytes 8B 56 08: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F AF C2: imul eax, edx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc2
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes 0F AF D1: imul edx, ecx
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd1
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 89 44 24 14: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 9E 4E 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes E8 90 4E 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 66 8B 8E D6 02 00 00: mov cx, word ptr [esi + 0x2d6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 77 48: ja 0x1000796b
        __asm _emit 0x77
        __asm _emit 0x48
        ; Exact mapped bytes 39 AE 38 05 00 00: cmp dword ptr [esi + 0x538], ebp
        __asm _emit 0x39
        __asm _emit 0xae
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3C: jne 0x10007967
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 83 B8 70 01 00 00 24: cmp dword ptr [eax + 0x170], 0x24
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        ; Exact mapped bytes 7E 1E: jle 0x10007957
        __asm _emit 0x7e
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 80 94 01 00 00: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 14: je 0x10007957
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 88 90 00 00 00: mov ecx, dword ptr [eax + 0x90]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 38 05 00 00: mov dword ptr [esi + 0x538], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x10007979
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 89 9E 38 05 00 00: mov dword ptr [esi + 0x538], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x10007979
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 76 0E: jbe 0x10007979
        __asm _emit 0x76
        __asm _emit 0x0e
        ; Exact mapped bytes 39 9E 38 05 00 00: cmp dword ptr [esi + 0x538], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x10007979
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 AE 38 05 00 00: mov dword ptr [esi + 0x538], ebp
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 04 00 00: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 8E AC 04 00 00: mov dword ptr [esi + 0x4ac], ecx
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x10007a69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 79 38: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x38
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 74 21: je 0x100079bc
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 75 EB: jne 0x10007991
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 46 7C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes C1 E0 04: shl eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes 8D BC 08 78 0F 00 00: lea edi, [eax + ecx + 0xf78]
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4C: je 0x10007a37
        __asm _emit 0x74
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 45: je 0x10007a37
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 39 71 0C: cmp dword ptr [ecx + 0xc], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 74 09: je 0x10007a00
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 49 08: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 75 F4: jne 0x100079f2
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 37: jmp 0x10007a37
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 08: je 0x10007a0f
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x10007a15
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 89 47 04: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B C5: cmp eax, ebp
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 08: je 0x10007a24
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 06: jmp 0x10007a2a
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 41 04: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes 89 47 08: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 3B CD: cmp ecx, ebp
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 74 06: je 0x10007a34
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes FF 4F 0C: dec dword ptr [edi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x4f
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 22 76 0F 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 6B 76 0F 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B BE 80 04 00 00: mov edi, dword ptr [esi + 0x480]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B FD: cmp edi, ebp
        __asm _emit 0x3b
        __asm _emit 0xfd
        ; Exact mapped bytes 74 0E: je 0x10007a5d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 0A 76 0F 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 53 76 0F 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 3B F5: cmp esi, ebp
        __asm _emit 0x3b
        __asm _emit 0xf5
        ; Exact mapped bytes 74 08: je 0x10007a69
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 8B 8C 24 28 01 00 00: mov ecx, dword ptr [esp + 0x128]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
