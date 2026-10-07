// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972490.

// Ghidra body range 0x58972490..0x58972497; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_58972490_segment_00() {
    __asm {
        // 0x58972490: mov eax, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972496: ret
        __asm _emit 0xC3
    }
}
