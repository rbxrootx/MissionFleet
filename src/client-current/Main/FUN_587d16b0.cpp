// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D16B0 .. +0x152 bytes.
// Source symbol alias: FUN_587d16b0.
extern "C" __declspec(naked) void FUN_587d16b0() {
    __asm {
        // 0x587D16B0: push esi
        __asm _emit 0x56
        // 0x587D16B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D16B3: cmp dword ptr [esi + 0xfc], 0xc8
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16BD: jne 0x587d17fc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16C3: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D16C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D16C9: jne 0x587d1708
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587D16CB: movzx ecx, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16D2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D16D4: sub eax, dword ptr [esi + 0xdc]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16DA: mov dword ptr [esi + 0xf4], 0xa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16E4: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16EA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D16EC: jg 0x587d16f0
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587D16EE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D16F0: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16F6: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x587D16F8: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D16FE: call 0x58789680
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x7F
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D1703: jmp 0x587d17c7
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1708: push edi
        __asm _emit 0x57
        // 0x587D1709: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587D170C: jne 0x587d1747
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587D170E: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1714: mov edi, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D171A: movzx edx, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1721: imul edi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF9
        // 0x587D1724: lea eax, [ecx + edx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x11
        // 0x587D1727: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587D1729: mov dword ptr [esi + 0xf4], 0x28
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1733: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1739: jle 0x587d173d
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587D173B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587D173D: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1743: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587D1745: jmp 0x587d17bb
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x587D1747: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D174A: jne 0x587d177e
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x587D174C: movzx edi, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBE
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1753: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D1755: sub ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D175B: mov dword ptr [esi + 0xf4], 0x14
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1765: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D1767: cdq
        __asm _emit 0x99
        // 0x587D1768: idiv dword ptr [esi + 0xdc]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D176E: mov dword ptr [esi + 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1774: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D1776: jne 0x587d177a
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587D1778: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D177A: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587D177C: jmp 0x587d17b5
        __asm _emit 0xEB
        __asm _emit 0x37
        // 0x587D177E: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587D1781: jne 0x587d17c6
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x587D1783: movzx edi, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBE
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D178A: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1790: lea ecx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587D1793: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D1795: cdq
        __asm _emit 0x99
        // 0x587D1796: idiv dword ptr [esi + 0xdc]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D179C: mov dword ptr [esi + 0xf4], 0x1e
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17A6: mov dword ptr [esi + 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17AC: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587D17AF: jne 0x587d17b3
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587D17B1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587D17B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D17B5: mov dword ptr [esi + 0xe8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17BB: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17C1: call 0x58789680
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x7E
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587D17C6: pop edi
        __asm _emit 0x5F
        // 0x587D17C7: movzx ecx, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17CE: cmp ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17D4: je 0x587d17fc
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587D17D6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D17D8: call 0x587d0e40
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D17DD: mov edx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17E3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D17E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D17EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D17ED: push edx
        __asm _emit 0x52
        // 0x587D17EE: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D17F3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D17F8: pop esi
        __asm _emit 0x5E
        // 0x587D17F9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D17FC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D17FE: pop esi
        __asm _emit 0x5E
        // 0x587D17FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
