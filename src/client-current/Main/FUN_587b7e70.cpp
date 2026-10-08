// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 331 bytes in 3 exact ranges.
// Source symbol alias: FUN_587b7e70.

// Ghidra body range 0x587B7E70..0x587B7EE9; 121 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7e70_segment_00() {
    __asm {
        // 0x587B7E70: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E76: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7E7B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B7E7D: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E84: push ebx
        __asm _emit 0x53
        // 0x587B7E85: push esi
        __asm _emit 0x56
        // 0x587B7E86: push edi
        __asm _emit 0x57
        // 0x587B7E87: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x587B7E89: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7E8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E8F: push eax
        __asm _emit 0x50
        // 0x587B7E90: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B7E92: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x4D
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7E97: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7E9B: mov edx, 0x58a0b450
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B7EA0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B7EA2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7EA5: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7EAA: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B7EAC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587B7EB0: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B7EB6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B7EB8: je 0x587b7ecb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B7EBA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587B7EBD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B7EBF: je 0x587b7ecb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B7EC1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B7EC3: inc eax
        __asm _emit 0x40
        // 0x587B7EC4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587B7EC7: jne 0x587b7eb0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B7EC9: jmp 0x587b7ecf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B7ECB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B7ECD: jne 0x587b7ed0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B7ECF: dec eax
        __asm _emit 0x48
        // 0x587B7ED0: mov edx, dword ptr [esp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7ED7: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7EDA: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B7EDE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B7EE0: mov esi, 0x18
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7EE5: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B7EE7: jmp 0x587b7ef0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587B7EF0..0x587B7F2D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7e70_segment_01() {
    __asm {
        // 0x587B7EF0: lea ecx, [esi + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B7EF6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B7EF8: je 0x587b7f0b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B7EFA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587B7EFD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B7EFF: je 0x587b7f0b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B7F01: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B7F03: inc eax
        __asm _emit 0x40
        // 0x587B7F04: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587B7F07: jne 0x587b7ef0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B7F09: jmp 0x587b7f0f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B7F0B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B7F0D: jne 0x587b7f10
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B7F0F: dec eax
        __asm _emit 0x48
        // 0x587B7F10: mov esi, dword ptr [esp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7F17: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7F1A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B7F1C: je 0x587b7f6f
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x587B7F1E: lea eax, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B7F22: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B7F24: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7F29: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x587B7F2B: jmp 0x587b7f30
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587B7F30..0x587B7FC5; 149 mapped bytes.
extern "C" __declspec(naked) void FUN_587b7e70_segment_02() {
    __asm {
        // 0x587B7F30: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B7F36: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B7F38: je 0x587b7f4b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B7F3A: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587B7F3D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B7F3F: je 0x587b7f4b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B7F41: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B7F43: inc eax
        __asm _emit 0x40
        // 0x587B7F44: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587B7F47: jne 0x587b7f30
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B7F49: jmp 0x587b7f4f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B7F4B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B7F4D: jne 0x587b7f50
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B7F4F: dec eax
        __asm _emit 0x48
        // 0x587B7F50: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B7F52: lea edx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B7F56: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7F58: push edx
        __asm _emit 0x52
        // 0x587B7F59: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7F5C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7F61: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7F64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7F66: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B7F68: lea eax, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B7F6C: push eax
        __asm _emit 0x50
        // 0x587B7F6D: jmp 0x587b7f89
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x587B7F6F: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B7F71: lea ecx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B7F75: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7F77: push ecx
        __asm _emit 0x51
        // 0x587B7F78: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7F7D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7F80: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7F82: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B7F84: lea edx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B7F88: push edx
        __asm _emit 0x52
        // 0x587B7F89: push 0x50000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587B7F8E: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7F93: lea edi, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587B7F97: lea esi, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7F9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7F9D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B7F9F: push 0x8001b111
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B7FA4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B7FA6: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x8C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B7FAB: mov ecx, dword ptr [esp + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FB2: pop edi
        __asm _emit 0x5F
        // 0x587B7FB3: pop esi
        __asm _emit 0x5E
        // 0x587B7FB4: pop ebx
        __asm _emit 0x5B
        // 0x587B7FB5: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B7FB7: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7FBC: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7FC2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
