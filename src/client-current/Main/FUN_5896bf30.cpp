// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 6 bytes in 1 exact ranges.
// Source symbol alias: FUN_5896bf30.

// Ghidra body range 0x5896BF30..0x5896BF36; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_5896bf30_segment_00() {
    __asm {
        // 0x5896BF30: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896BF35: ret
        __asm _emit 0xC3
    }
}
