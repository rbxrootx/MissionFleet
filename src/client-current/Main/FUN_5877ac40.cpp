// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 239 bytes in 3 exact ranges.
// Source symbol alias: FUN_5877ac40.

// Ghidra body range 0x5877AC40..0x5877AD27; 231 mapped bytes.
extern "C" __declspec(naked) void FUN_5877ac40_segment_00() {
    __asm {
        // 0x5877AC40: push edi
        __asm _emit 0x57
        // 0x5877AC41: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5877AC43: mov eax, dword ptr [edi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC49: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AC4C: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AC4F: je 0x5877ad4b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC55: push ebx
        __asm _emit 0x53
        // 0x5877AC56: mov ebx, 0xb
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC5B: push esi
        __asm _emit 0x56
        // 0x5877AC5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5877AC60: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AC63: cmp ecx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AC66: je 0x5877ac7d
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5877AC68: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877AC6B: dec edx
        __asm _emit 0x4A
        // 0x5877AC6C: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5877AC6E: jne 0x5877ac74
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5877AC70: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877AC72: jmp 0x5877ac77
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5877AC74: lea edx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5877AC77: dec dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5877AC7A: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877AC7D: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5877AC80: mov esi, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x88
        // 0x5877AC83: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877AC88: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC8E: jle 0x5877aca4
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5877AC90: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC97: je 0x5877aca4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877AC99: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC9F: mov ecx, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x2C
        // 0x5877ACA2: jmp 0x5877aca6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877ACA4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877ACA6: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877ACAC: push edx
        __asm _emit 0x52
        // 0x5877ACAD: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877ACB2: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877ACB7: cmp dword ptr [eax + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACBD: jle 0x5877acd3
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5877ACBF: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACC6: je 0x5877acd3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877ACC8: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACCE: mov ecx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x2C
        // 0x5877ACD1: jmp 0x5877acd5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877ACD3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877ACD5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5877ACD7: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877ACDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877ACDC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877ACDE: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACE4: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACEA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877ACEC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877ACEE: push ecx
        __asm _emit 0x51
        // 0x5877ACEF: mov ecx, dword ptr [edi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ACF5: push edx
        __asm _emit 0x52
        // 0x5877ACF6: push esi
        __asm _emit 0x56
        // 0x5877ACF7: call 0x58751a60
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x6D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5877ACFC: mov eax, dword ptr [edi + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AD02: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AD05: cmp ecx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5877AD08: je 0x5877ad21
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5877AD0A: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877AD0D: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5877AD10: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x5877AD13: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AD19: cmp edx, dword ptr [ecx + 0x80]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AD1F: jge 0x5877ad40
        __asm _emit 0x7D
        __asm _emit 0x1F
        // 0x5877AD21: push esi
        __asm _emit 0x56
        // 0x5877AD22: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x1F
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877AD40..0x5877AD46; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5877ac40_segment_01() {
    __asm {
        // 0x5877AD40: push esi
        __asm _emit 0x56
        // 0x5877AD41: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x1E
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877AD4B..0x5877AD4D; 2 mapped bytes.
extern "C" __declspec(naked) void FUN_5877ac40_segment_02() {
    __asm {
        // 0x5877AD4B: pop edi
        __asm _emit 0x5F
        // 0x5877AD4C: ret
        __asm _emit 0xC3
    }
}
