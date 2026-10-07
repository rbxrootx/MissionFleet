// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 350 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E7480 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_588e7480_segment_00() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 4F 48: mov ecx, dword ptr [edi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x48
        ; Exact mapped bytes D1 E9: shr ecx, 1
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 83 E1 1F: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x588e75da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 54 24 08: mov dl, byte ptr [esp + 8]
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B B7 18 01 00 00: mov esi, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 0E: add esi, 0xe
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x0e
        ; Exact mapped bytes 38 16: cmp byte ptr [esi], dl
        __asm _emit 0x38
        __asm _emit 0x16
        ; Exact mapped bytes 74 0D: je 0x588e74b2
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C6 18: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x18
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 F4: jne 0x588e74a1
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8D 34 40: lea esi, [eax + eax*2]
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x40
        ; Exact mapped bytes 8B 87 18 01 00 00: mov eax, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 03 F6: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xf6
        ; Exact mapped bytes 66 0F B6 4C 30 0C: movzx cx, byte ptr [eax + esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x0c
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes 0F B6 40 0E: movzx eax, byte ptr [eax + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes BA AA AA 00 00: mov edx, 0xaaaa
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 CA: xor cx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 8C 87 C0 0A 00 00: mov word ptr [edi + eax*4 + 0xac0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F 18 01 00 00: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 54 31 0D: movzx dx, byte ptr [ecx + esi + 0xd]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x0d
        ; Exact mapped bytes 8D 04 31: lea eax, [ecx + esi]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x31
        ; Exact mapped bytes 0F B6 40 0E: movzx eax, byte ptr [eax + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes B9 AA AA 00 00: mov ecx, 0xaaaa
        __asm _emit 0xb9
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 33 D1: xor dx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd1
        ; Exact mapped bytes 83 7C 24 10 00: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 87 C2 0A 00 00: mov word ptr [edi + eax*4 + 0xac2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x588e75d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8F 18 01 00 00: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 14 31: mov edx, dword ptr [ecx + esi]
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 0F 1A E9 FF: call 0x58778f30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1a
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 85 DB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x588e75d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 87 18 01 00 00: mov eax, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 4C 30 0C: movzx ecx, byte ptr [eax + esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 93 98 00 00 00: movzx edx, word ptr [ebx + 0x98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 9C 00 00 00: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 0A 0E F7 FF: call 0x58858360
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8F 18 01 00 00: mov ecx, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 54 31 0D: movzx edx, byte ptr [ecx + esi + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x0d
        ; Exact mapped bytes 0F B7 83 98 00 00 00: movzx eax, word ptr [ebx + 0x98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 89 9C 00 00 00: mov ecx, dword ptr [ecx + 0x9c]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x9c
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
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 1E 0E F7 FF: call 0x588583a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 97 18 01 00 00: mov edx, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 44 32 0C: movzx eax, byte ptr [edx + esi + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x0c
        ; Exact mapped bytes 0F B7 8B 98 00 00 00: movzx ecx, word ptr [ebx + 0x98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 45 A2 58: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 35 AA 00 00 00: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8A A0 00 00 00: mov ecx, dword ptr [edx + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 43 75 F7 FF: call 0x5885eaf0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 87 18 01 00 00: mov eax, dword ptr [edi + 0x118]
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 4C 30 0D: movzx ecx, byte ptr [eax + esi + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x30
        __asm _emit 0x0d
        ; Exact mapped bytes 0F B7 93 98 00 00 00: movzx edx, word ptr [ebx + 0x98]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 45 A2 58: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 81 F1 AA 00 00 00: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 88 A0 00 00 00: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 58 75 F7 FF: call 0x5885eb30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
