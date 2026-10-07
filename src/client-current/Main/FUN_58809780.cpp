// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 11 bytes in 1 exact ranges.
// Source symbol alias: FUN_58809780.

// Ghidra body range 0x58809780..0x5880978B; 11 mapped bytes.
extern "C" __declspec(naked) void FUN_58809780_segment_00() {
    __asm {
        // 0x58809780: mov ecx, dword ptr [ecx + 0x8ac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809786: jmp 0x5884f4e0
        __asm _emit 0xE9
        __asm _emit 0x55
        __asm _emit 0x5D
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
