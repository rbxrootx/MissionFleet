// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A55A0 .. +0x17 bytes.
// Source symbol alias: FUN_587a55a0.
extern "C" __declspec(naked) void FUN_587a55a0() {
    __asm {
        // 0x587A55A0: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A55A5: je 0x587a55b4
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587A55A7: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A55AB: push eax
        __asm _emit 0x50
        // 0x587A55AC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587A55AF: call 0x587a54d0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A55B4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
