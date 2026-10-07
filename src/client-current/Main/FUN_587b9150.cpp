// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9150.

// Ghidra body range 0x587B9150..0x587B9165; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9150_segment_00() {
    __asm {
        // 0x587B9150: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9152: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9154: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9156: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9158: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B915A: push 0x80010d07
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B915F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x7B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9164: ret
        __asm _emit 0xC3
    }
}
