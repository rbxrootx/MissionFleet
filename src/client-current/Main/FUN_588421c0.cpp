// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_588421c0.

// Ghidra body range 0x588421C0..0x588421DA; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_588421c0_segment_00() {
    __asm {
        // 0x588421C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588421C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588421C6: je 0x588421d7
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588421C8: mov ecx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588421CE: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588421D2: jmp 0x58841af0
        __asm _emit 0xE9
        __asm _emit 0x19
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588421D7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
