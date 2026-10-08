// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b4470.

// Ghidra body range 0x587B4470..0x587B4477; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_587b4470_segment_00() {
    __asm {
        // 0x587B4470: mov eax, dword ptr [ecx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4476: ret
        __asm _emit 0xC3
    }
}
