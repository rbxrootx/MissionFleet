// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58807E80 .. +0x1B8 bytes.
// Source symbol alias: FUN_58807e80.
extern "C" __declspec(naked) void FUN_58807e80() {
    __asm {
        // 0x58807E80: push edi
        __asm _emit 0x57
        // 0x58807E81: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58807E83: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807E89: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x21
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807E8E: movzx ecx, word ptr [edi + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807E95: add ecx, -4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFC
        // 0x58807E98: cmp ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x58807E9B: ja 0x58808034
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807EA1: jmp dword ptr [ecx*4 + 0x58808038]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x58807EA8: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807EAD: test byte ptr [eax + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807EB4: je 0x58807ec6
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58807EB6: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807EBC: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807EC1: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x6F
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58807EC6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807ECC: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x20
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807ED1: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58807ED4: jge 0x5880800b
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807EDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807EDC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807EDE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807EE0: push 0x1d6
        __asm _emit 0x68
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807EE5: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58807EEA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58807EEC: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xCE
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58807EF1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58807EF3: pop edi
        __asm _emit 0x5F
        // 0x58807EF4: ret
        __asm _emit 0xC3
        // 0x58807EF5: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807EFB: movzx eax, word ptr [ecx + 0x1b8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F02: push esi
        __asm _emit 0x56
        // 0x58807F03: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F08: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58807F0B: ja 0x58807f2e
        __asm _emit 0x77
        __asm _emit 0x21
        // 0x58807F0D: jmp dword ptr [eax*4 + 0x5880806c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x58807F14: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F19: jmp 0x58807f2e
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58807F1B: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F20: jmp 0x58807f2e
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58807F22: mov esi, 0x10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F27: jmp 0x58807f2e
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58807F29: mov esi, 0xe
        __asm _emit 0xBE
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F2E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807F34: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x20
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807F39: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58807F3B: pop esi
        __asm _emit 0x5E
        // 0x58807F3C: jae 0x5880800b
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807F44: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807F46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58807F48: push 0x1d6
        __asm _emit 0x68
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807F4D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x3B
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x58807F52: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58807F54: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xCD
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58807F59: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58807F5B: pop edi
        __asm _emit 0x5F
        // 0x58807F5C: ret
        __asm _emit 0xC3
        // 0x58807F5D: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807F63: test byte ptr [edx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807F6A: je 0x58807f7c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58807F6C: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807F72: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807F77: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x6E
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58807F7C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807F82: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807F87: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58807F8A: jmp 0x58807ed4
        __asm _emit 0xE9
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807F8F: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807F94: test byte ptr [eax + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58807F9B: je 0x58807fad
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58807F9D: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807FA3: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58807FA8: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x6E
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58807FAD: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807FB3: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x1F
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58807FB8: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58807FBB: jmp 0x58807ed4
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807FC0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58807FC5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58807FC8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58807FCA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58807FCC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58807FCE: je 0x58807eda
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807FD4: cmp byte ptr [eax + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58807FDB: jne 0x58807fe0
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58807FDD: inc ecx
        __asm _emit 0x41
        // 0x58807FDE: jmp 0x58807fe1
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58807FE0: inc edx
        __asm _emit 0x42
        // 0x58807FE1: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x58807FE4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58807FE6: jne 0x58807fd4
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58807FE8: cmp ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0A
        // 0x58807FEB: jl 0x58807eda
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807FF1: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x58807FF4: jmp 0x58807ed4
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58807FF9: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x58807FFB: jmp 0x58807fff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58807FFD: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58807FFF: push eax
        __asm _emit 0x50
        // 0x58808000: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58808002: call 0x588044a0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808007: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58808009: je 0x58808034
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880800B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880800D: call 0x58805d90
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808012: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58808014: je 0x5880801d
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58808016: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880801B: pop edi
        __asm _emit 0x5F
        // 0x5880801C: ret
        __asm _emit 0xC3
        // 0x5880801D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880801F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58808021: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58808023: push 0x1d7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808028: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x3A
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x5880802D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880802F: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xCC
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58808034: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58808036: pop edi
        __asm _emit 0x5F
        // 0x58808037: ret
        __asm _emit 0xC3
    }
}
