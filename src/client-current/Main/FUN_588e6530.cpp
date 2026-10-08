// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 15 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e6530.

// Ghidra body range 0x588E6530..0x588E653F; 15 mapped bytes.
extern "C" __declspec(naked) void FUN_588e6530_segment_00() {
    __asm {
        // 0x588E6530: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6534: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E6539: mov dword ptr [ecx + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x4C
        // 0x588E653C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
