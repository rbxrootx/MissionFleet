// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 114 bytes in 1 exact ranges.
// Source symbol alias: FUN_58857e40.

// Ghidra body range 0x58857E40..0x58857EB2; 114 mapped bytes.
extern "C" __declspec(naked) void FUN_58857e40_segment_00() {
    __asm {
        // 0x58857E40: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58857E42: push 0x589854b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58857E47: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E4D: push eax
        __asm _emit 0x50
        // 0x58857E4E: push ecx
        __asm _emit 0x51
        // 0x58857E4F: push esi
        __asm _emit 0x56
        // 0x58857E50: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58857E55: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58857E57: push eax
        __asm _emit 0x50
        // 0x58857E58: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58857E5C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E62: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58857E64: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58857E68: mov dword ptr [esi], 0x5899e9d8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58857E6E: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E74: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E7C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58857E7E: je 0x58857e92
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58857E80: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58857E82: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58857E84: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58857E86: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58857E88: mov dword ptr [esi + 0x84], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E92: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857E94: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857E9C: call 0x587b5f50
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xE0
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58857EA1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58857EA5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857EAC: pop ecx
        __asm _emit 0x59
        // 0x58857EAD: pop esi
        __asm _emit 0x5E
        // 0x58857EAE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58857EB1: ret
        __asm _emit 0xC3
    }
}
