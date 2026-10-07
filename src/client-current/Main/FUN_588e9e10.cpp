// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 326 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e9e10.

// Ghidra body range 0x588E9E10..0x588E9F56; 326 mapped bytes.
extern "C" __declspec(naked) void FUN_588e9e10_segment_00() {
    __asm {
        // 0x588E9E10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E9E12: push 0x5898983e
        __asm _emit 0x68
        __asm _emit 0x3E
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E9E17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E1D: push eax
        __asm _emit 0x50
        // 0x588E9E1E: push ecx
        __asm _emit 0x51
        // 0x588E9E1F: push esi
        __asm _emit 0x56
        // 0x588E9E20: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588E9E25: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588E9E27: push eax
        __asm _emit 0x50
        // 0x588E9E28: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588E9E2C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E32: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E9E34: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E9E38: lea ecx, [esi + 0xce8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E3E: mov dword ptr [esi], 0x589a13f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0x13
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E9E44: call 0x588c61a0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xC3
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x588E9E49: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E9E4B: mov dword ptr [esi + 0xce0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E51: mov dword ptr [esi + 0xce4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E57: mov dword ptr [esi + 0x9a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E5D: mov dword ptr [esi + 0x9a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E63: mov dword ptr [esi + 0x9ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E69: mov dword ptr [esi + 0x9b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E6F: mov dword ptr [esi + 0x9b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E75: mov dword ptr [esi + 0x9b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E7B: mov dword ptr [esi + 0x9bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E81: mov dword ptr [esi + 0x9c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E87: mov dword ptr [esi + 0x9c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E8D: mov dword ptr [esi + 0x9c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E93: mov dword ptr [esi + 0x9cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E99: mov dword ptr [esi + 0x9d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9E9F: mov dword ptr [esi + 0x9d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EA5: mov dword ptr [esi + 0x9d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EAB: mov dword ptr [esi + 0x9dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EB1: mov dword ptr [esi + 0x9e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EB7: mov dword ptr [esi + 0x9e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EBD: mov dword ptr [esi + 0x9e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EC3: mov dword ptr [esi + 0x9ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EC9: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588E9ECD: mov dword ptr [esi + 0x9f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9ED3: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E9ED7: mov dword ptr [esi + 0x9f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EDD: mov dword ptr [esi + 0x9f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EE3: mov dword ptr [esi + 0x9fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EE9: mov dword ptr [esi + 0xa00], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EEF: mov dword ptr [esi + 0xa04], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EF5: mov dword ptr [esi + 0xa08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9EFB: mov dword ptr [esi + 0xa0c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F01: mov dword ptr [esi + 0xa10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F07: mov dword ptr [esi + 0xa14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F0D: mov dword ptr [esi + 0xa18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F13: mov dword ptr [esi + 0xa1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F19: mov dword ptr [esi + 0xa20], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F1F: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E9F23: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F29: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588E9F2D: push eax
        __asm _emit 0x50
        // 0x588E9F2E: push ecx
        __asm _emit 0x51
        // 0x588E9F2F: push edx
        __asm _emit 0x52
        // 0x588E9F30: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E9F32: mov dword ptr [esi + 0xe84], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F3C: call 0x588e9c70
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9F41: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588E9F43: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588E9F47: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F4E: pop ecx
        __asm _emit 0x59
        // 0x588E9F4F: pop esi
        __asm _emit 0x5E
        // 0x588E9F50: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588E9F53: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
