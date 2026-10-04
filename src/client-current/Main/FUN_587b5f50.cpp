// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B5F50 .. +0x72 bytes.
// Source symbol alias: FUN_587b5f50.
extern "C" __declspec(naked) void FUN_587b5f50() {
    __asm {
        // 0x587B5F50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B5F52: push 0x58980ff8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x0F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B5F57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5F5D: push eax
        __asm _emit 0x50
        // 0x587B5F5E: push ecx
        __asm _emit 0x51
        // 0x587B5F5F: push esi
        __asm _emit 0x56
        // 0x587B5F60: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B5F65: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B5F67: push eax
        __asm _emit 0x50
        // 0x587B5F68: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B5F6C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5F72: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B5F74: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B5F78: mov dword ptr [esi], 0x5899a090
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0xA0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B5F7E: cmp dword ptr [esi + 0x7c], -1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x7C
        __asm _emit 0xFF
        // 0x587B5F82: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5F8A: je 0x587b5fa2
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587B5F8C: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587B5F8F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B5F91: je 0x587b5fa2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587B5F93: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587B5F95: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587B5F97: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B5F99: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B5F9B: mov dword ptr [esi + 0x74], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5FA2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B5FA4: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B5FAC: call 0x589033e0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xD4
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B5FB1: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B5FB5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5FBC: pop ecx
        __asm _emit 0x59
        // 0x587B5FBD: pop esi
        __asm _emit 0x5E
        // 0x587B5FBE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B5FC1: ret
        __asm _emit 0xC3
    }
}
