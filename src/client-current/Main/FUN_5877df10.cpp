// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877DF10 .. +0x93 bytes.
// Source symbol alias: FUN_5877df10.
extern "C" __declspec(naked) void FUN_5877df10() {
    __asm {
        // 0x5877DF10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877DF12: push 0x5897f488
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877DF17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DF1D: push eax
        __asm _emit 0x50
        // 0x5877DF1E: push ecx
        __asm _emit 0x51
        // 0x5877DF1F: push esi
        __asm _emit 0x56
        // 0x5877DF20: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877DF25: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877DF27: push eax
        __asm _emit 0x50
        // 0x5877DF28: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877DF2C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DF32: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877DF34: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877DF38: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5877DF3C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877DF40: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877DF44: push eax
        __asm _emit 0x50
        // 0x5877DF45: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877DF49: push ecx
        __asm _emit 0x51
        // 0x5877DF4A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877DF4E: push edx
        __asm _emit 0x52
        // 0x5877DF4F: push eax
        __asm _emit 0x50
        // 0x5877DF50: push ecx
        __asm _emit 0x51
        // 0x5877DF51: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877DF53: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x6A
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877DF58: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5877DF5B: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x5877DF5E: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DF66: mov dword ptr [esi], 0x58996974
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877DF6C: mov word ptr [esi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5877DF70: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877DF72: je 0x5877df7a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5877DF74: push esi
        __asm _emit 0x56
        // 0x5877DF75: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x4F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877DF7A: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5877DF7D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5877DF7F: je 0x5877df87
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5877DF81: push esi
        __asm _emit 0x56
        // 0x5877DF82: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x4F
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877DF87: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877DF89: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DF90: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877DF94: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DF9B: pop ecx
        __asm _emit 0x59
        // 0x5877DF9C: pop esi
        __asm _emit 0x5E
        // 0x5877DF9D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877DFA0: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
