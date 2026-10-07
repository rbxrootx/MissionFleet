// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1389 bytes in 2 exact ranges.
// Source symbol alias: FUN_587cdd60.

// Ghidra body range 0x587CDD60..0x587CDE0D; 173 mapped bytes.
extern "C" __declspec(naked) void FUN_587cdd60_segment_00() {
    __asm {
        // 0x587CDD60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CDD62: push 0x5898028e
        __asm _emit 0x68
        __asm _emit 0x8E
        __asm _emit 0x02
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDD67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD6D: push eax
        __asm _emit 0x50
        // 0x587CDD6E: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD74: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CDD79: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CDD7B: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD82: push ebx
        __asm _emit 0x53
        // 0x587CDD83: push ebp
        __asm _emit 0x55
        // 0x587CDD84: push esi
        __asm _emit 0x56
        // 0x587CDD85: push edi
        __asm _emit 0x57
        // 0x587CDD86: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CDD8B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CDD8D: push eax
        __asm _emit 0x50
        // 0x587CDD8E: lea eax, [esp + 0x11c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD95: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDD9B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CDD9D: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587CDDA0: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x587CDDA3: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587CDDA6: ja 0x587ce2a8
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDAC: jmp dword ptr [eax*4 + 0x587ce2d0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0xE2
        __asm _emit 0x7C
        __asm _emit 0x58
        // 0x587CDDB3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CDDB5: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDDBA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDDBC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDDBE: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDDC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDDC5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDDC7: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDDCC: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587CDDCF: call 0x587ce7a0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDD4: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDD9: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDDDC: movzx eax, byte ptr [ecx + 0x74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587CDDE0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587CDDE3: je 0x587cdfef
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDE9: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587CDDEC: je 0x587cdf5d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDF2: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587CDDF5: jne 0x587ce05a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDDFB: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDE00: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x587CDE03: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDE05: je 0x587ce05a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDE0B: jmp 0x587cde10
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587CDE10..0x587CE2D0; 1216 mapped bytes.
extern "C" __declspec(naked) void FUN_587cdd60_segment_01() {
    __asm {
        // 0x587CDE10: mov eax, dword ptr [edi + 0x6648]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDE16: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CDE18: je 0x587cde22
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587CDE1A: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDE1D: cmp dword ptr [ecx + 0x30], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x30
        // 0x587CDE20: je 0x587cde66
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x587CDE22: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587CDE25: jne 0x587cde2f
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587CDE27: mov edx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587CDE2A: cmp dword ptr [edx + 0x30], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x30
        // 0x587CDE2D: jne 0x587cde3b
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587CDE2F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CDE31: jne 0x587cde5a
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x587CDE33: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CDE36: cmp dword ptr [eax + 0x30], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x30
        // 0x587CDE39: jne 0x587cde5a
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587CDE3B: push 0x5899b408
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDE40: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDE42: call 0x587cc990
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDE47: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDE4A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDE4C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CDE4E: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDE53: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDE56: mov byte ptr [ecx + 0x75], 1
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587CDE5A: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587CDE5D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDE5F: jne 0x587cde10
        __asm _emit 0x75
        __asm _emit 0xAF
        // 0x587CDE61: jmp 0x587ce05a
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDE66: mov ebp, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x04
        // 0x587CDE69: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587CDE6C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CDE6E: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDE72: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CDE74: cmp dword ptr [eax], ebp
        __asm _emit 0x39
        __asm _emit 0x28
        // 0x587CDE76: jg 0x587cde8a
        __asm _emit 0x7F
        __asm _emit 0x12
        // 0x587CDE78: cmp ebp, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587CDE7B: jg 0x587cde8a
        __asm _emit 0x7F
        __asm _emit 0x0D
        // 0x587CDE7D: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x587CDE80: cmp dword ptr [eax + 4], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587CDE83: jg 0x587cde8a
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587CDE85: cmp edx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CDE88: jle 0x587cde98
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x587CDE8A: inc ecx
        __asm _emit 0x41
        // 0x587CDE8B: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587CDE8E: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587CDE91: jne 0x587cde74
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x587CDE93: jmp 0x587ce05a
        __asm _emit 0xE9
        __asm _emit 0xC2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDE98: movzx edx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDE9F: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587CDEA1: jne 0x587cdeae
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587CDEA3: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CDEA7: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDEAC: jmp 0x587cdeb3
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587CDEAE: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDEB3: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDEB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDEB8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CDEBA: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDEBF: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CDEC2: mov byte ptr [eax + 0x75], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587CDEC6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587CDEC8: je 0x587cdf38
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x587CDECA: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDED1: push ecx
        __asm _emit 0x51
        // 0x587CDED2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDED4: call 0x587cd9f0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDED9: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDEDF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587CDEE2: mov cl, byte ptr [edi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDEE8: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDEEE: jne 0x587cdf03
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587CDEF0: push 0x5899b3e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDEF5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDEFB: push eax
        __asm _emit 0x50
        // 0x587CDEFC: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CDF00: push edx
        __asm _emit 0x52
        // 0x587CDF01: jmp 0x587cdf14
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587CDF03: push 0x5899b3b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDF08: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDF0E: push eax
        __asm _emit 0x50
        // 0x587CDF0F: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CDF13: push eax
        __asm _emit 0x50
        // 0x587CDF14: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CDF1A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587CDF1D: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CDF21: push ecx
        __asm _emit 0x51
        // 0x587CDF22: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CDF24: call 0x587cc990
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDF29: mov dword ptr [edi + 0x6648], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDF33: jmp 0x587ce05a
        __asm _emit 0xE9
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDF38: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587CDF3A: je 0x587ce05a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDF40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CDF42: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CDF44: mov dword ptr [edi + 0x398], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587CDF4E: call 0x588dffb0
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587CDF53: push 0x5899b388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDF58: jmp 0x587ce049
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDF5D: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDF63: mov edi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x587CDF66: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDF68: je 0x587ce05a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDF6E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587CDF70: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CDF73: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587CDF76: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587CDF79: lea ebx, [ecx - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0xD8
        // 0x587CDF7C: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587CDF7E: jg 0x587cdfa9
        __asm _emit 0x7F
        __asm _emit 0x29
        // 0x587CDF80: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x28
        // 0x587CDF83: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587CDF85: jg 0x587cdfa9
        __asm _emit 0x7F
        __asm _emit 0x22
        // 0x587CDF87: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587CDF8A: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x587CDF8D: lea edx, [eax - 0x28]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xD8
        // 0x587CDF90: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587CDF92: jg 0x587cdfa9
        __asm _emit 0x7F
        __asm _emit 0x15
        // 0x587CDF94: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x587CDF97: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587CDF99: jg 0x587cdfa9
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x587CDF9B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CDF9D: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587CDFA2: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587CDFA7: je 0x587cdfb5
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587CDFA9: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587CDFAC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CDFAE: jne 0x587cdf70
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x587CDFB0: jmp 0x587ce05a
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDFB5: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CDFB8: push edi
        __asm _emit 0x57
        // 0x587CDFB9: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587CDFBB: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CDFC0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDFC5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587CDFC8: mov cl, byte ptr [edi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDFCE: cmp cl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDFD4: jne 0x587cdfe8
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587CDFD6: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587CDFD8: jne 0x587cdfe1
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587CDFDA: push 0x5899b35c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDFDF: jmp 0x587ce049
        __asm _emit 0xEB
        __asm _emit 0x68
        // 0x587CDFE1: push 0x5899b334
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDFE6: jmp 0x587ce049
        __asm _emit 0xEB
        __asm _emit 0x61
        // 0x587CDFE8: push 0x5899b30c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xB3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CDFED: jmp 0x587ce049
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x587CDFEF: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CDFF5: mov eax, dword ptr [edx + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CDFFB: sub eax, dword ptr [ecx + 0x78]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x587CDFFE: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7D
        // 0x587CE001: jb 0x587ce05a
        __asm _emit 0x72
        __asm _emit 0x57
        // 0x587CE003: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE005: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CE007: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xBF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE00C: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE011: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CE015: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE018: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x02
        // 0x587CE01C: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587CE01F: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE024: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CE028: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE02B: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x587CE02F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE031: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE033: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CE036: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE03B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE03D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE03F: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE044: push 0x5899b2e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CE049: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CE04F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CE052: push eax
        __asm _emit 0x50
        // 0x587CE053: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE055: call 0x587cc990
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE05A: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587CE05D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE05F: jne 0x587ce0ab
        __asm _emit 0x75
        __asm _emit 0x4A
        // 0x587CE061: movzx eax, byte ptr [esi + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0D
        // 0x587CE065: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE068: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CE06B: mov dl, byte ptr [eax + ecx - 3]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0xFD
        // 0x587CE06F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587CE071: cmp dl, byte ptr [eax - 2]
        __asm _emit 0x3A
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x587CE074: jbe 0x587ce087
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x587CE076: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CE078: mov byte ptr [eax - 1], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x587CE07B: mov dword ptr [esi + 0x18], 4
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE082: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE087: movzx ecx, byte ptr [eax - 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0xFD
        // 0x587CE08B: cmp cl, byte ptr [eax - 2]
        __asm _emit 0x3A
        __asm _emit 0x48
        __asm _emit 0xFE
        // 0x587CE08E: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x587CE090: and ecx, 0xffffff02
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x02
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE096: add ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE09C: mov byte ptr [eax - 1], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x587CE09F: mov dword ptr [esi + 0x18], 4
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE0A6: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE0AB: dec eax
        __asm _emit 0x48
        // 0x587CE0AC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE0AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE0B0: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587CE0B3: call 0x587cc780
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE0B8: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0xEB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE0BD: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587CE0C0: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587CE0C3: jne 0x587ce124
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x587CE0C5: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE0CA: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CE0CE: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE0D1: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE0D6: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CE0D9: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CE0DC: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE0E1: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CE0E5: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE0E8: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CE0EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE0ED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE0EF: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CE0F2: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE0F7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE0F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE0FB: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE100: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE102: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE104: call 0x587cc780
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE109: mov edx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x587CE10C: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587CE10F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE115: push edx
        __asm _emit 0x52
        // 0x587CE116: push eax
        __asm _emit 0x50
        // 0x587CE117: call 0x587e5c30
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE11C: dec dword ptr [esi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x587CE11F: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE124: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CE126: jne 0x587ce13b
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587CE128: mov dword ptr [esi + 0x18], 5
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE12F: mov dword ptr [esi + 0x2c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x2C
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE136: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE13B: dec eax
        __asm _emit 0x48
        // 0x587CE13C: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587CE13F: jmp 0x587ce2a8
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE144: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CE146: cmp dword ptr [esi + 0x24], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x587CE149: jne 0x587ce1bd
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x587CE14B: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE150: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xEA
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CE155: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CE158: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587CE15C: mov dword ptr [esp + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE163: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587CE165: je 0x587ce18e
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587CE167: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE16D: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE173: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x587CE176: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE17B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE17D: push edi
        __asm _emit 0x57
        // 0x587CE17E: push edi
        __asm _emit 0x57
        // 0x587CE17F: push ecx
        __asm _emit 0x51
        // 0x587CE180: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587CE183: push ecx
        __asm _emit 0x51
        // 0x587CE184: push edx
        __asm _emit 0x52
        // 0x587CE185: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CE187: call 0x587ca1c0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE18C: jmp 0x587ce190
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CE18E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CE190: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CE193: mov ecx, 0xffffffec
        __asm _emit 0xB9
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE198: mov dword ptr [eax + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587CE19B: mov edx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587CE19E: mov dword ptr [edx + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x18
        // 0x587CE1A1: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CE1A4: mov eax, 0x14
        __asm _emit 0xB8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE1A9: mov dword ptr [ecx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x587CE1AC: mov edx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587CE1AF: mov dword ptr [esp + 0x124], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE1BA: mov dword ptr [edx + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x20
        // 0x587CE1BD: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CE1C0: push edi
        __asm _emit 0x57
        // 0x587CE1C1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE1C3: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE1C8: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CE1CB: mov byte ptr [eax + 0x75], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587CE1CF: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE1D4: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CE1D8: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE1DB: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE1E0: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CE1E3: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587CE1E6: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE1EB: movzx ecx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587CE1EF: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CE1F2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CE1F5: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587CE1F8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE1FA: call 0x587cd000
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE1FF: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587CE202: jne 0x587ce274
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x587CE204: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x587CE207: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CE20A: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x587CE20D: mov dword ptr [eax + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE213: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE215: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE217: mov dword ptr [eax + 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x7C
        // 0x587CE21A: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE21F: push edi
        __asm _emit 0x57
        // 0x587CE220: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE222: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE227: push edi
        __asm _emit 0x57
        // 0x587CE228: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE22A: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE22F: push edi
        __asm _emit 0x57
        // 0x587CE230: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE232: call 0x587cc780
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE237: cmp byte ptr [esi + 0xd], 1
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x0D
        __asm _emit 0x01
        // 0x587CE23B: jne 0x587ce244
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587CE23D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE23F: call 0x587cda60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE244: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE249: mov dword ptr [eax + 0x10558], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE24F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE255: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587CE258: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587CE25B: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587CE25E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE264: push edx
        __asm _emit 0x52
        // 0x587CE265: push eax
        __asm _emit 0x50
        // 0x587CE266: call 0x587e5c30
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE26B: mov dword ptr [esi + 0x18], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE272: jmp 0x587ce2a8
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x587CE274: mov dword ptr [esi + 0x18], 6
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE27B: jmp 0x587ce2a8
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x587CE27D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE27F: call 0x587cd230
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE284: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE286: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE288: call 0x587cd4c0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE28D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CE28F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CE291: call 0x587cd650
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CE296: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CE29C: call 0x587e5fb0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587CE2A1: mov dword ptr [esi + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE2A8: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE2AF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE2B6: pop ecx
        __asm _emit 0x59
        // 0x587CE2B7: pop edi
        __asm _emit 0x5F
        // 0x587CE2B8: pop esi
        __asm _emit 0x5E
        // 0x587CE2B9: pop ebp
        __asm _emit 0x5D
        // 0x587CE2BA: pop ebx
        __asm _emit 0x5B
        // 0x587CE2BB: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE2C2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587CE2C4: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CE2C9: add esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE2CF: ret
        __asm _emit 0xC3
    }
}
