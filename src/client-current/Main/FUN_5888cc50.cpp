// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_5888cc50.

// Ghidra body range 0x5888CC50..0x5888CC6A; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_5888cc50_segment_00() {
    __asm {
        // 0x5888CC50: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5888CC54: mov dword ptr [0x58a0b46c], eax
        __asm _emit 0xA3
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5888CC59: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x5888CC5C: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888CC61: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5888CC65: jmp 0x58895060
        __asm _emit 0xE9
        __asm _emit 0xF6
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
