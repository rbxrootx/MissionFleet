// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 13 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cad90.

// Ghidra body range 0x587CAD90..0x587CAD9D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587cad90_segment_00() {
    __asm {
        // 0x587CAD90: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CAD94: mov dword ptr [ecx + 0x204], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CAD9A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
