// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 225 bytes in 2 exact ranges.
// Source symbol alias: FUN_5876ebe0.

// Ghidra body range 0x5876EBE0..0x5876ECA0; 192 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ebe0_segment_00() {
    __asm {
        // 0x5876EBE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5876EBE2: push 0x58988a28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x8A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876EBE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EBED: push eax
        __asm _emit 0x50
        // 0x5876EBEE: push ecx
        __asm _emit 0x51
        // 0x5876EBEF: push esi
        __asm _emit 0x56
        // 0x5876EBF0: push edi
        __asm _emit 0x57
        // 0x5876EBF1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876EBF6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5876EBF8: push eax
        __asm _emit 0x50
        // 0x5876EBF9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876EBFD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EC03: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876EC05: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876EC09: mov dword ptr [esi], 0x58995c20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x5C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876EC0F: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5876EC12: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876EC14: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876EC18: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC1A: je 0x5876ec27
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC1C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC1E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC20: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC22: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC24: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5876EC27: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876EC2A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC2C: je 0x5876ec39
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC2E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC30: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC32: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC34: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC36: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5876EC39: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876EC3C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC3E: je 0x5876ec4b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC40: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC42: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC44: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC46: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC48: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5876EC4B: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876EC4E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC50: je 0x5876ec5d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC52: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC54: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC56: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC58: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC5A: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5876EC5D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5876EC60: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC62: je 0x5876ec6f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC64: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC66: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC68: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC6A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC6C: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5876EC6F: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5876EC72: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC74: je 0x5876ec81
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC76: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC78: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC7A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC7C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC7E: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5876EC81: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5876EC84: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EC86: je 0x5876ec93
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876EC88: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EC8A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EC8C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876EC8E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EC90: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5876EC93: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876EC96: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5876EC98: je 0x5876eca6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876EC9A: push eax
        __asm _emit 0x50
        // 0x5876EC9B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xDF
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876ECA6..0x5876ECC7; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ebe0_segment_01() {
    __asm {
        // 0x5876ECA6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876ECA8: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876ECB0: call 0x58902d60
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x40
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876ECB5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876ECB9: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876ECC0: pop ecx
        __asm _emit 0x59
        // 0x5876ECC1: pop edi
        __asm _emit 0x5F
        // 0x5876ECC2: pop esi
        __asm _emit 0x5E
        // 0x5876ECC3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876ECC6: ret
        __asm _emit 0xC3
    }
}
