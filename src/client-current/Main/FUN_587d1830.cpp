// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1715 bytes in 7 discontiguous ranges.
// Source symbol alias: FUN_587d1830.

// Ghidra body range 0x587D1830..0x587D1988; 344 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_00() {
    __asm {
        // 0x587D1830: sub esp, 0x9c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1836: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D183B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587D183D: mov dword ptr [esp + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1844: push ebx
        __asm _emit 0x53
        // 0x587D1845: push ebp
        __asm _emit 0x55
        // 0x587D1846: push esi
        __asm _emit 0x56
        // 0x587D1847: mov esi, dword ptr [esp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D184E: mov eax, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1855: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587D185A: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587D185C: push edi
        __asm _emit 0x57
        // 0x587D185D: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D1861: je 0x587d1cb6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1867: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D186B: push ecx
        __asm _emit 0x51
        // 0x587D186C: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D186F: push eax
        __asm _emit 0x50
        // 0x587D1870: call 0x58795290
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x3A
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587D1875: mov edx, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D187C: movzx eax, word ptr [edx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x02
        // 0x587D1880: dec eax
        __asm _emit 0x48
        // 0x587D1881: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587D1884: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587D1887: ja 0x587d1941
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D188D: jmp dword ptr [eax*4 + 0x587d1f00]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587D1894: movzx eax, word ptr [esp + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587D1899: movzx ecx, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D189E: movzx edx, word ptr [esp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587D18A3: push eax
        __asm _emit 0x50
        // 0x587D18A4: push ecx
        __asm _emit 0x51
        // 0x587D18A5: push edx
        __asm _emit 0x52
        // 0x587D18A6: push 0x5899b510
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xB5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D18AB: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D18B1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D18B4: push eax
        __asm _emit 0x50
        // 0x587D18B5: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D18B9: push eax
        __asm _emit 0x50
        // 0x587D18BA: jmp 0x587d1938
        __asm _emit 0xEB
        __asm _emit 0x7C
        // 0x587D18BC: movzx ecx, word ptr [esp + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587D18C1: movzx edx, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D18C6: push ecx
        __asm _emit 0x51
        // 0x587D18C7: push edx
        __asm _emit 0x52
        // 0x587D18C8: push 0x5899b4f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D18CD: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D18D3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D18D6: push eax
        __asm _emit 0x50
        // 0x587D18D7: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D18DB: push eax
        __asm _emit 0x50
        // 0x587D18DC: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D18E2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D18E5: jmp 0x587d1941
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x587D18E7: movzx ecx, word ptr [esp + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587D18EC: movzx edx, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D18F1: push ecx
        __asm _emit 0x51
        // 0x587D18F2: push edx
        __asm _emit 0x52
        // 0x587D18F3: push 0x5899b4d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D18F8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D18FE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D1901: push eax
        __asm _emit 0x50
        // 0x587D1902: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587D1906: push eax
        __asm _emit 0x50
        // 0x587D1907: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D190D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D1910: jmp 0x587d1941
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587D1912: movzx ecx, word ptr [esp + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587D1917: movzx edx, word ptr [esp + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D191C: movzx eax, word ptr [esp + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587D1921: push ecx
        __asm _emit 0x51
        // 0x587D1922: push edx
        __asm _emit 0x52
        // 0x587D1923: push eax
        __asm _emit 0x50
        // 0x587D1924: push 0x5899b4b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D1929: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D192F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D1932: push eax
        __asm _emit 0x50
        // 0x587D1933: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587D1937: push ecx
        __asm _emit 0x51
        // 0x587D1938: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D193E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587D1941: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1947: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587D194B: push edx
        __asm _emit 0x52
        // 0x587D194C: call 0x58889600
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x7C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D1951: mov eax, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1958: cmp word ptr [eax + 2], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587D195D: mov eax, dword ptr [ebx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1963: jne 0x587d1c22
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1969: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D196E: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D1972: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D197A: lea edi, [ebx + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1980: lea esi, [ebx + 0x3bc]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1986: jmp 0x587d1990
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x587D1990..0x587D199D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_01() {
    __asm {
        // 0x587D1990: lea ecx, [edi - 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1996: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D199B: jmp 0x587d19a0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587D19A0..0x587D19CD; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_02() {
    __asm {
        // 0x587D19A0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D19A2: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D19A6: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D19A9: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587D19AB: jne 0x587d19a0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587D19AD: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587D19AF: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D19B3: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587D19B6: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D19BA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D19BC: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D19C0: lea ecx, [ebx + 0x420]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D19C6: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D19CB: jmp 0x587d19d0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587D19D0..0x587D1C47; 631 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_03() {
    __asm {
        // 0x587D19D0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D19D2: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x587D19D6: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D19D9: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x587D19DB: jne 0x587d19d0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x587D19DD: mov ecx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D19E4: mov eax, dword ptr [ecx*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x8D
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D19EB: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D19EF: cmp byte ptr [eax + edx + 0xfc], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D19F7: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D19FD: je 0x587d1a8b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A03: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D1A07: je 0x587d1a20
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587D1A09: mov eax, dword ptr [eax + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x38
        // 0x587D1A0C: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1A0F: dec eax
        __asm _emit 0x48
        // 0x587D1A10: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A16: jbe 0x587d1a20
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587D1A18: push eax
        __asm _emit 0x50
        // 0x587D1A19: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x45
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D1A1E: jmp 0x587d1a47
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587D1A20: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1A25: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x587D1A2C: jle 0x587d1a45
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587D1A2E: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A35: je 0x587d1a45
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D1A37: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A3D: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A43: jmp 0x587d1a47
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D1A45: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1A47: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587D1A49: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D1A4C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1A4E: je 0x587d1a79
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D1A50: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587D1A53: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587D1A56: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D1A59: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587D1A5C: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587D1A5F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D1A62: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587D1A65: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D1A67: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D1A6A: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1A6D: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D1A70: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D1A73: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D1A76: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D1A79: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D1A7B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1A7D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D1A80: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587D1A83: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587D1A86: jmp 0x587d1b0c
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A8B: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D1A8F: je 0x587d1aa8
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587D1A91: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x587D1A94: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1A97: dec eax
        __asm _emit 0x48
        // 0x587D1A98: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1A9E: jbe 0x587d1aa8
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587D1AA0: push eax
        __asm _emit 0x50
        // 0x587D1AA1: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x45
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D1AA6: jmp 0x587d1acf
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587D1AA8: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1AAD: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x587D1AB4: jle 0x587d1acd
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587D1AB6: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1ABD: je 0x587d1acd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D1ABF: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1AC5: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1ACB: jmp 0x587d1acf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D1ACD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1ACF: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587D1AD1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D1AD4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1AD6: je 0x587d1b01
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D1AD8: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587D1ADB: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587D1ADE: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D1AE1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587D1AE4: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587D1AE7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D1AEA: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587D1AED: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D1AEF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D1AF2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1AF5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D1AF8: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D1AFB: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D1AFE: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D1B01: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587D1B03: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x587D1B06: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x587D1B09: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x587D1B0C: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D1B10: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587D1B12: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587D1B15: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x587D1B18: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587D1B1B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D1B1F: jl 0x587d1990
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x6B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1B25: mov eax, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B2C: mov ecx, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1B33: movzx eax, word ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x01
        // 0x587D1B36: cmp eax, 0x551
        __asm _emit 0x3D
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B3B: jg 0x587d1bcd
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B41: je 0x587d1bb9
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x587D1B43: cmp eax, 0x379
        __asm _emit 0x3D
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B48: jg 0x587d1b9a
        __asm _emit 0x7F
        __asm _emit 0x50
        // 0x587D1B4A: je 0x587d1b86
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587D1B4C: cmp eax, 0x1b1
        __asm _emit 0x3D
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B51: je 0x587d1b72
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587D1B53: cmp eax, 0x281
        __asm _emit 0x3D
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B58: jne 0x587d1d5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B5E: mov edx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B65: push edx
        __asm _emit 0x52
        // 0x587D1B66: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1B68: call 0x587d0180
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1B6D: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B72: mov eax, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B79: push eax
        __asm _emit 0x50
        // 0x587D1B7A: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1B7C: call 0x587d0100
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1B81: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B86: mov ecx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B8D: push ecx
        __asm _emit 0x51
        // 0x587D1B8E: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1B90: call 0x587d0250
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1B95: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B9A: cmp eax, 0x411
        __asm _emit 0x3D
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1B9F: jne 0x587d1d5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BA5: mov edx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BAC: push edx
        __asm _emit 0x52
        // 0x587D1BAD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1BAF: call 0x587d01e0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1BB4: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BB9: mov eax, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BC0: push eax
        __asm _emit 0x50
        // 0x587D1BC1: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1BC3: call 0x587d0250
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1BC8: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0x8D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BCD: cmp eax, 0x609
        __asm _emit 0x3D
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BD2: je 0x587d1c0e
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587D1BD4: cmp eax, 0x719
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BD9: je 0x587d1bfa
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587D1BDB: cmp eax, 0x829
        __asm _emit 0x3D
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BE0: jne 0x587d1d5a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BE6: mov ecx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BED: push ecx
        __asm _emit 0x51
        // 0x587D1BEE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1BF0: call 0x587d0250
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1BF5: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1BFA: mov edx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C01: push edx
        __asm _emit 0x52
        // 0x587D1C02: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1C04: call 0x587d01e0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1C09: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C0E: mov eax, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C15: push eax
        __asm _emit 0x50
        // 0x587D1C16: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1C18: call 0x587d01e0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1C1D: jmp 0x587d1d5a
        __asm _emit 0xE9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C22: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C27: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1C2B: lea ebp, [ebx + 0x420]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C31: lea edi, [ebx + 0x3bc]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C37: lea esi, [ebx + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C3D: mov dword ptr [esp + 0x10], 0x19
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C45: jmp 0x587d1c50
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587D1C50..0x587D1C5D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_04() {
    __asm {
        // 0x587D1C50: lea ecx, [esi - 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1C56: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C5B: jmp 0x587d1c60
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587D1C60..0x587D1CFD; 157 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_05() {
    __asm {
        // 0x587D1C60: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D1C62: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C67: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587D1C6B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D1C6E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D1C71: jne 0x587d1c60
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587D1C73: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D1C75: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587D1C77: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D1C7B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587D1C7E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587D1C80: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1C84: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587D1C86: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D1C8A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D1C8C: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C91: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D1C93: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1C98: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587D1C9C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D1C9F: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D1CA2: jne 0x587d1c91
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587D1CA4: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D1CA7: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587D1CAA: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587D1CAF: jne 0x587d1c50
        __asm _emit 0x75
        __asm _emit 0x9F
        // 0x587D1CB1: jmp 0x587d1d51
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CB6: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1CBC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D1CBE: call 0x58889600
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x79
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D1CC3: mov eax, dword ptr [ebx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CC9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CCE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1CD2: lea ebp, [ebx + 0x420]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CD8: lea edi, [ebx + 0x3bc]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CDE: lea esi, [ebx + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CE4: mov dword ptr [esp + 0x10], 0x19
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CEC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D1CF0: lea ecx, [esi - 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1CF6: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1CFB: jmp 0x587d1d00
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587D1D00..0x587D1F00; 512 mapped bytes.
extern "C" __declspec(naked) void FUN_587d1830_segment_06() {
    __asm {
        // 0x587D1D00: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D1D02: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D07: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587D1D0B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D1D0E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D1D11: jne 0x587d1d00
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587D1D13: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587D1D15: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587D1D17: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D1D1B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587D1D1E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587D1D20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1D24: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587D1D26: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D1D2A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587D1D2C: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D31: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D1D33: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D38: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587D1D3C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D1D3F: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587D1D42: jne 0x587d1d31
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587D1D44: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587D1D47: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587D1D4A: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x587D1D4F: jne 0x587d1cf0
        __asm _emit 0x75
        __asm _emit 0x9F
        // 0x587D1D51: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D1D55: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D5A: mov edi, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D61: mov edx, dword ptr [edi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1D68: movzx ecx, word ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0A
        // 0x587D1D6B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D1D6D: mov eax, 0x589baab0
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D1D72: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        // 0x587D1D75: je 0x587d1d8a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587D1D77: add eax, 0xe84
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D7C: add esi, ebp
        __asm _emit 0x03
        __asm _emit 0xF5
        // 0x587D1D7E: cmp eax, 0x589c2d54
        __asm _emit 0x3D
        __asm _emit 0x54
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D1D83: jl 0x587d1d72
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x587D1D85: jmp 0x587d1ede
        __asm _emit 0xE9
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D8A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587D1D8C: imul eax, eax, 0xe84
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D92: mov ecx, 0xa9
        __asm _emit 0xB9
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1D97: cmp word ptr [eax + 0x589baab0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D1D9E: je 0x587d1ede
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DA4: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1DAA: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D1DAE: je 0x587d1dd4
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587D1DB0: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x587D1DB3: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1DB6: dec eax
        __asm _emit 0x48
        // 0x587D1DB7: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DBD: jbe 0x587d1dd4
        __asm _emit 0x76
        __asm _emit 0x15
        // 0x587D1DBF: push eax
        __asm _emit 0x50
        // 0x587D1DC0: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D1DC5: mov ecx, dword ptr [ebx + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DCB: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587D1DCD: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587D1DCF: mov ecx, dword ptr [esi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x0E
        // 0x587D1DD2: jmp 0x587d1e08
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x587D1DD4: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1DD9: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x587D1DE0: jle 0x587d1df9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587D1DE2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DE9: je 0x587d1df9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D1DEB: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DF1: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1DF7: jmp 0x587d1dfb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D1DF9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1DFB: mov edx, dword ptr [ebx + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1E01: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587D1E03: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587D1E05: mov ecx, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x16
        // 0x587D1E08: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D1E0B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1E0D: je 0x587d1e38
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D1E0F: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587D1E12: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587D1E15: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D1E18: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x587D1E1B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587D1E1E: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D1E21: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x587D1E24: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D1E26: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D1E29: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1E2C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D1E2F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D1E32: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D1E35: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D1E38: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1E3E: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D1E42: je 0x587d1e7e
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587D1E44: mov edx, dword ptr [edi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1E4B: mov eax, dword ptr [edx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x38
        // 0x587D1E4E: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1E51: dec eax
        __asm _emit 0x48
        // 0x587D1E52: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1E58: jbe 0x587d1e7e
        __asm _emit 0x76
        __asm _emit 0x24
        // 0x587D1E5A: push eax
        __asm _emit 0x50
        // 0x587D1E5B: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D1E60: mov ecx, dword ptr [ebx + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1E66: mov esi, dword ptr [esi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0E
        // 0x587D1E69: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587D1E6C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1E6E: je 0x587d1ede
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x587D1E70: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587D1E73: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587D1E76: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587D1E79: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x587D1E7C: jmp 0x587d1ec1
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x587D1E7E: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1E83: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x587D1E8A: jle 0x587d1ea3
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587D1E8C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1E93: je 0x587d1ea3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D1E95: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1E9B: mov eax, dword ptr [ecx + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1EA1: jmp 0x587d1ea5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D1EA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1EA5: mov edx, dword ptr [ebx + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1EAB: mov esi, dword ptr [esi + edx]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x16
        // 0x587D1EAE: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587D1EB1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1EB3: je 0x587d1ede
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D1EB5: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x587D1EB8: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587D1EBB: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D1EBE: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587D1EC1: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x587D1EC4: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x587D1EC7: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587D1ECA: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D1ECC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D1ECF: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D1ED2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587D1ED5: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D1ED8: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587D1EDB: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x587D1EDE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587D1EE0: call 0x587cff80
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1EE5: mov ecx, dword ptr [esp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1EEC: pop edi
        __asm _emit 0x5F
        // 0x587D1EED: pop esi
        __asm _emit 0x5E
        // 0x587D1EEE: pop ebp
        __asm _emit 0x5D
        // 0x587D1EEF: pop ebx
        __asm _emit 0x5B
        // 0x587D1EF0: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587D1EF2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xAC
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587D1EF7: add esp, 0x9c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1EFD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
