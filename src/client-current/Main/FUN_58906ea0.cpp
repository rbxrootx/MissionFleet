// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58906EA0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_58906ea0() {
    __asm {
        // 0x58906EA0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58906EA2: push 0x5897f888
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58906EA7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906EAD: push eax
        __asm _emit 0x50
        // 0x58906EAE: push ecx
        __asm _emit 0x51
        // 0x58906EAF: push esi
        __asm _emit 0x56
        // 0x58906EB0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58906EB5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58906EB7: push eax
        __asm _emit 0x50
        // 0x58906EB8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58906EBC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906EC2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58906EC4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58906EC8: mov dword ptr [esi], 0x589a2938
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58906ECE: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906ED4: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906EDC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58906EDE: je 0x58906ef2
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58906EE0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58906EE2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58906EE4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58906EE6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58906EE8: mov dword ptr [esi + 0xf4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906EF2: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906EF8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58906EFA: je 0x58906f0e
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58906EFC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58906EFE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58906F00: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58906F02: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58906F04: mov dword ptr [esi + 0xf0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F0E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58906F10: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58906F18: call 0x58902d60
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58906F1D: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58906F21: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58906F28: pop ecx
        __asm _emit 0x59
        // 0x58906F29: pop esi
        __asm _emit 0x5E
        // 0x58906F2A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58906F2D: ret
        __asm _emit 0xC3
    }
}
