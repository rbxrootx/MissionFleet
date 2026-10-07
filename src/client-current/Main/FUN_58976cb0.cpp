// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976cb0.

// Ghidra body range 0x58976CB0..0x58976D01; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_58976cb0_segment_00() {
    __asm {
        // 0x58976CB0: push esi
        __asm _emit 0x56
        // 0x58976CB1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58976CB5: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58976CB7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58976CB9: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58976CBC: push esi
        __asm _emit 0x56
        // 0x58976CBD: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58976CBF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58976CC2: mov dword ptr [esi + 0x14c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976CC8: mov dword ptr [eax], 0x58976e00
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CCE: mov dword ptr [eax + 4], 0x58976fa0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0xA0
        __asm _emit 0x6F
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CD5: mov dword ptr [eax + 8], 0x58977240
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x40
        __asm _emit 0x72
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CDC: mov dword ptr [eax + 0xc], 0x589774f0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0xF0
        __asm _emit 0x74
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CE3: mov dword ptr [eax + 0x10], 0x58977510
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x75
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CEA: mov dword ptr [eax + 0x14], 0x58976d10
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x6D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CF1: mov dword ptr [eax + 0x18], 0x58976de0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0xE0
        __asm _emit 0x6D
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58976CF8: mov dword ptr [eax + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976CFF: pop esi
        __asm _emit 0x5E
        // 0x58976D00: ret
        __asm _emit 0xC3
    }
}
