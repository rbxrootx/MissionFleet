// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 461 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827d10.

// Ghidra body range 0x58827D10..0x58827EDD; 461 mapped bytes.
extern "C" __declspec(naked) void FUN_58827d10_segment_00() {
    __asm {
        // 0x58827D10: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58827D14: push esi
        __asm _emit 0x56
        // 0x58827D15: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58827D17: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58827D1A: jne 0x58827e16
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D20: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58827D24: cmp eax, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D2A: jne 0x58827d5b
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58827D2C: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58827D34: jne 0x58827ed9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D3C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D40: push 0x136
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D45: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D4B: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827D50: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58827D52: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x28
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827D57: pop esi
        __asm _emit 0x5E
        // 0x58827D58: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827D5B: cmp eax, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D61: jne 0x58827d92
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58827D63: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58827D6B: jne 0x58827ed9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D71: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D73: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D75: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827D77: push 0x137
        __asm _emit 0x68
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D7C: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D82: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827D87: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58827D89: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x27
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827D8E: pop esi
        __asm _emit 0x5E
        // 0x58827D8F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827D92: cmp eax, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827D98: jne 0x58827dc9
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58827D9A: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58827DA2: jne 0x58827ed9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827DAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827DAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827DAE: push 0x138
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DB3: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DB9: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827DBE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58827DC0: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x27
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827DC5: pop esi
        __asm _emit 0x5E
        // 0x58827DC6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827DC9: cmp eax, dword ptr [esi + 0xbc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DCF: jne 0x58827dda
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58827DD1: call 0x58827c20
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827DD6: pop esi
        __asm _emit 0x5E
        // 0x58827DD7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827DDA: cmp eax, dword ptr [esi + 0xc0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DE0: jne 0x58827deb
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58827DE2: call 0x58827c40
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827DE7: pop esi
        __asm _emit 0x5E
        // 0x58827DE8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827DEB: cmp eax, dword ptr [esi + 0xc4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827DF1: jne 0x58827dfc
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58827DF3: call 0x58827cc0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827DF8: pop esi
        __asm _emit 0x5E
        // 0x58827DF9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827DFC: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E02: jne 0x58827e0d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58827E04: call 0x58827ce0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827E09: pop esi
        __asm _emit 0x5E
        // 0x58827E0A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827E0D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x3C
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827E12: pop esi
        __asm _emit 0x5E
        // 0x58827E13: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827E16: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E1B: jne 0x58827ed9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E21: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58827E25: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827E2B: cmp eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E31: jne 0x58827ed9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E37: push ebx
        __asm _emit 0x53
        // 0x58827E38: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827E3E: push edi
        __asm _emit 0x57
        // 0x58827E3F: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58827E43: push edi
        __asm _emit 0x57
        // 0x58827E44: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58827E46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58827E48: jle 0x58827ed7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E4E: mov eax, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E54: cmp eax, dword ptr [esi + 0xb0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E5A: jne 0x58827e85
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58827E5C: mov esi, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827E62: push edi
        __asm _emit 0x57
        // 0x58827E63: push edi
        __asm _emit 0x57
        // 0x58827E64: add esi, 0xd2c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x2C
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E6A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58827E6C: movzx edx, word ptr [esi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x12
        // 0x58827E70: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827E76: push eax
        __asm _emit 0x50
        // 0x58827E77: push edx
        __asm _emit 0x52
        // 0x58827E78: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58827E7A: call 0x587b9cf0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x1E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58827E7F: pop edi
        __asm _emit 0x5F
        // 0x58827E80: pop ebx
        __asm _emit 0x5B
        // 0x58827E81: pop esi
        __asm _emit 0x5E
        // 0x58827E82: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827E85: cmp eax, dword ptr [esi + 0xb4]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E8B: jne 0x58827ead
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58827E8D: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827E92: mov ecx, dword ptr [eax + 0xe08]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827E98: push edi
        __asm _emit 0x57
        // 0x58827E99: push ecx
        __asm _emit 0x51
        // 0x58827E9A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827EA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827EA2: call 0x587b9d20
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x1E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58827EA7: pop edi
        __asm _emit 0x5F
        // 0x58827EA8: pop ebx
        __asm _emit 0x5B
        // 0x58827EA9: pop esi
        __asm _emit 0x5E
        // 0x58827EAA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58827EAD: cmp eax, dword ptr [esi + 0xb8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827EB3: jne 0x58827ed7
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58827EB5: movzx edx, byte ptr [esi + 0x9d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827EBC: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827EC1: mov ecx, dword ptr [eax + edx*4 + 0xe24]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827EC8: push edi
        __asm _emit 0x57
        // 0x58827EC9: push ecx
        __asm _emit 0x51
        // 0x58827ECA: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58827ED0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58827ED2: call 0x587b9d20
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x1E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58827ED7: pop edi
        __asm _emit 0x5F
        // 0x58827ED8: pop ebx
        __asm _emit 0x5B
        // 0x58827ED9: pop esi
        __asm _emit 0x5E
        // 0x58827EDA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
