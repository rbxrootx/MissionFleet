// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E8010 .. +0x24 bytes.
// Source symbol alias: FUN_587e8010.
extern "C" __declspec(naked) void FUN_587e8010() {
    __asm {
        // 0x587E8010: cmp dword ptr [ecx + 4], 1
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x587E8014: jne 0x587e8033
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587E8016: cmp dword ptr [ecx + 0x482c], -1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x587E801D: mov dword ptr [ecx + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E8024: je 0x587e8033
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587E8026: mov eax, dword ptr [ecx + 0x4820]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E802C: push eax
        __asm _emit 0x50
        // 0x587E802D: call dword ptr [0x5898c0c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587E8033: ret
        __asm _emit 0xC3
    }
}
