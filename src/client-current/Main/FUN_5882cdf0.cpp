// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 427 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882cdf0.

// Ghidra body range 0x5882CDF0..0x5882CF9B; 427 mapped bytes.
extern "C" __declspec(naked) void FUN_5882cdf0_segment_00() {
    __asm {
        // 0x5882CDF0: push ebp
        __asm _emit 0x55
        // 0x5882CDF1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5882CDF3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5882CDF6: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CDFC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882CE01: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882CE03: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE0A: push ebx
        __asm _emit 0x53
        // 0x5882CE0B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882CE0D: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE13: push esi
        __asm _emit 0x56
        // 0x5882CE14: push edi
        __asm _emit 0x57
        // 0x5882CE15: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882CE17: je 0x5882cf86
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE1D: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x96
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CE22: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882CE24: mov eax, dword ptr [ebx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE2A: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE2F: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882CE33: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882CE35: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE3C: mov ecx, dword ptr [ebx + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE42: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE49: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE4F: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x92
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CE54: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE5A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882CE5C: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CE60: call 0x58786340
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CE65: mov ecx, dword ptr [ebx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE6B: push edi
        __asm _emit 0x57
        // 0x5882CE6C: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x5882CE6F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CE74: mov ecx, dword ptr [ebx + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE7A: push esi
        __asm _emit 0x56
        // 0x5882CE7B: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CE80: mov ecx, dword ptr [ebx + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE86: push edi
        __asm _emit 0x57
        // 0x5882CE87: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CE8C: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE92: call 0x587863c0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CE97: mov ecx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CE9D: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5882CEA0: push edx
        __asm _emit 0x52
        // 0x5882CEA1: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CEA6: mov ecx, dword ptr [ebx + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEAC: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xB9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CEB1: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEB7: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xB9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CEBC: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5882CEBE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882CEC0: jbe 0x5882cf7f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEC6: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882CECA: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CECE: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CED3: lea ecx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882CEDC: push ecx
        __asm _emit 0x51
        // 0x5882CEDD: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFD
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882CEE2: lea edi, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x01
        // 0x5882CEE5: push edi
        __asm _emit 0x57
        // 0x5882CEE6: lea edx, [esp + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEED: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CEF2: push edx
        __asm _emit 0x52
        // 0x5882CEF3: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CEF9: mov ecx, dword ptr [ebx + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CEFF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5882CF02: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CF07: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CF09: lea eax, [esp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CF10: push eax
        __asm _emit 0x50
        // 0x5882CF11: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xB9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CF16: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CF1A: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5882CF1D: je 0x5882cf4b
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5882CF1F: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882CF24: je 0x5882cf4b
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5882CF26: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5882CF28: push ecx
        __asm _emit 0x51
        // 0x5882CF29: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882CF2F: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xBD
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882CF34: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CF3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882CF3C: je 0x5882cf51
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5882CF3E: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CF43: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CF45: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x5882CF48: push eax
        __asm _emit 0x50
        // 0x5882CF49: jmp 0x5882cf69
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5882CF4B: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CF51: push esi
        __asm _emit 0x56
        // 0x5882CF52: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xB2
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CF57: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CF5D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CF62: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CF64: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CF69: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xB9
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CF6E: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x5882CF73: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5882CF75: cmp esi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CF79: jb 0x5882cece
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CF7F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882CF81: call 0x5882c3d0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CF86: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CF8D: pop edi
        __asm _emit 0x5F
        // 0x5882CF8E: pop esi
        __asm _emit 0x5E
        // 0x5882CF8F: pop ebx
        __asm _emit 0x5B
        // 0x5882CF90: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882CF92: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xFC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882CF97: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5882CF99: pop ebp
        __asm _emit 0x5D
        // 0x5882CF9A: ret
        __asm _emit 0xC3
    }
}
