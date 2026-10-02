// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 782 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902440 .. +0x1E8 bytes.
extern "C" __declspec(naked) void FUN_58902440_segment_00() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 70 A7 98 58: push 0x5898a770
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xa7
        __asm _emit 0x98
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
        ; Exact mapped bytes 83 EC 58: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x58
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 65 F0: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 14: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 45 A8: mov dword ptr [ebp - 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 89 75 A0: mov dword ptr [ebp - 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xa0
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 05: jne 0x58902485
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes EB 1B: jmp 0x589024a0
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 4E 14: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
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
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 7D 10: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x10
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 14 03 00 00: je 0x589027bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5E 10: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B 4E 0C: sub ecx, dword ptr [esi + 0xc]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
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
        ; Exact mapped bytes B9 49 92 24 09: mov ecx, 0x9249249
        __asm _emit 0xb9
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 3B CF: cmp ecx, edi
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 73 05: jae 0x589024d6
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes E8 8A 41 FF FF: call 0x588f6660
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 83 A7 01 00 00: jae 0x5890268a
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D1: mov edx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd1
        ; Exact mapped bytes D1 EA: shr edx, 1
        __asm _emit 0xd1
        __asm _emit 0xea
        ; Exact mapped bytes BB 49 92 24 09: mov ebx, 0x9249249
        __asm _emit 0xbb
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        ; Exact mapped bytes 2B DA: sub ebx, edx
        __asm _emit 0x2b
        __asm _emit 0xda
        ; Exact mapped bytes 3B D9: cmp ebx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd9
        ; Exact mapped bytes 73 0C: jae 0x589024fe
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes C7 45 B0 00 00 00 00: mov dword ptr [ebp - 0x50], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D B0: mov ecx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes EB 05: jmp 0x58902503
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 89 4D B0: mov dword ptr [ebp - 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xb0
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 73 05: jae 0x5890250c
        __asm _emit 0x73
        __asm _emit 0x05
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 DC B0 E8 FF: call 0x5878d5f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb0
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5D 0C: mov ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 2B 5E 0C: sub ebx, dword ptr [esi + 0xc]
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 EB: imul ebx
        __asm _emit 0xf7
        __asm _emit 0xeb
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B DA: mov ebx, edx
        __asm _emit 0x8b
        __asm _emit 0xda
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C1 EB 1F: shr ebx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 03 DA: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xda
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 04 DD 00 00 00 00: lea eax, [ebx*8]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4D A4: mov dword ptr [ebp - 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 2B C3: sub eax, ebx
        __asm _emit 0x2b
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 0C 81: lea ecx, [ecx + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x81
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 5D AC: mov dword ptr [ebp - 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xac
        ; Exact mapped bytes E8 C7 FB E8 FF: call 0x58792120
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfb
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes C6 45 A8 00: mov byte ptr [ebp - 0x58], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4E 08: lea ecx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 9C 01 00 00 00: mov dword ptr [ebp - 0x64], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 5F 70 F9 FF: call 0x588995e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 A4: mov edx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 46 10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 03 DF: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xdf
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 0C DD 00 00 00 00: lea ecx, [ebx*8]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes 8D 0C 8A: lea ecx, [edx + ecx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x8a
        ; Exact mapped bytes C6 45 A8 00: mov byte ptr [ebp - 0x58], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xa8
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 A8: mov edx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 56 08: lea edx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 9C 02 00 00 00: mov dword ptr [ebp - 0x64], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 70 F9 FF: call 0x588995e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5E 0C: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4E 10: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 2B CB: sub ecx, ebx
        __asm _emit 0x2b
        __asm _emit 0xcb
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
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
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 03 F9: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xf9
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 74 1E: je 0x589025fc
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 55 AC: mov edx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xac
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 46 08: lea eax, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 46 10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 90 FB FF FF: call 0x58902180
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 49 A6 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 B0: mov eax, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8D 14 C5 00 00 00 00: lea edx, [eax*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D0: sub edx, eax
        __asm _emit 0x2b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8D 0C 90: lea ecx, [eax + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x90
        ; Exact mapped bytes 8D 14 FD 00 00 00 00: lea edx, [edi*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D7: sub edx, edi
        __asm _emit 0x2b
        __asm _emit 0xd7
        ; Exact mapped bytes 89 4E 14: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 8D 0C 90: lea ecx, [eax + edx*4]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x90
        ; Exact mapped bytes 89 4E 10: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 89 46 0C: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes E9 97 01 00 00: jmp 0x589027bf
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890268A .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58902440_segment_01() {
    __asm {
        ; Exact mapped bytes 2B 5D 0C: sub ebx, dword ptr [ebp + 0xc]
        __asm _emit 0x2b
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 EB: imul ebx
        __asm _emit 0xf7
        __asm _emit 0xeb
        ; Exact mapped bytes 03 D3: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xd3
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
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 0F 83 B7 00 00 00: jae 0x5890275f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D A8: mov ecx, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E8 5C 2A E3 FF: call 0x58735110
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2a
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4E 10: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 8D 1C FD 00 00 00 00: lea ebx, [edi*8]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DF: sub ebx, edi
        __asm _emit 0x2b
        __asm _emit 0xdf
        ; Exact mapped bytes 03 DB: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xdb
        ; Exact mapped bytes 03 DB: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xdb
        ; Exact mapped bytes 8D 14 03: lea edx, [ebx + eax]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x03
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 45 FC 02 00 00 00: mov dword ptr [ebp - 4], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 6F F9 FF: call 0x588996d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 10: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 2B 4D 0C: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 55 D0: lea edx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
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
        ; Exact mapped bytes 2B F8: sub edi, eax
        __asm _emit 0x2b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 46 10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C6 45 FC 03: mov byte ptr [ebp - 4], 3
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x03
        ; Exact mapped bytes E8 16 FA E8 FF: call 0x58792120
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfa
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 01 5E 10: add dword ptr [esi + 0x10], ebx
        __asm _emit 0x01
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 8B 76 10: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 2B F3: sub esi, ebx
        __asm _emit 0x2b
        __asm _emit 0xf3
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes C7 45 FC 02 00 00 00: mov dword ptr [ebp - 4], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 FB FF FF: call 0x58902230
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4D D0: lea ecx, [ebp - 0x30]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x589027ba
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890275F .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_58902440_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E8 A5 29 E3 FF: call 0x58735110
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x29
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 8D 1C FD 00 00 00 00: lea ebx, [edi*8]
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B DF: sub ebx, edi
        __asm _emit 0x2b
        __asm _emit 0xdf
        ; Exact mapped bytes 03 DB: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xdb
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 03 DB: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xdb
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 2B FB: sub edi, ebx
        __asm _emit 0x2b
        __asm _emit 0xfb
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes C7 45 FC 05 00 00 00: mov dword ptr [ebp - 4], 5
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 AC: mov dword ptr [ebp - 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes E8 3D 6F F9 FF: call 0x588996d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D AC: mov ecx, dword ptr [ebp - 0x54]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xac
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 46 10: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes E8 DC FA FF FF: call 0x58902280
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 45 B4: lea eax, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 03 D8: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xd8
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 7C FA FF FF: call 0x58902230
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 8D 4D B4: lea ecx, [ebp - 0x4c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes E8 C1 59 E4 FF: call 0x58748180
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x59
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
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
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 03 A4 07 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
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
