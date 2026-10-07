// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b1a40.

// Ghidra body range 0x587B1A40..0x587B1A52; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_587b1a40_segment_00() {
    __asm {
        // 0x587B1A40: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B1A44: mov dword ptr [ecx + 0x130], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1A4A: call 0x587b1410
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B1A4F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
