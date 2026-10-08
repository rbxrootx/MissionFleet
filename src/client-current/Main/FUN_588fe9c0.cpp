// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 16 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fe9c0.

// Ghidra body range 0x588FE9C0..0x588FE9D0; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_588fe9c0_segment_00() {
    __asm {
        // 0x588FE9C0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FE9C4: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588FE9C7: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FE9CB: jmp 0x588fe0e0
        __asm _emit 0xE9
        __asm _emit 0x10
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
