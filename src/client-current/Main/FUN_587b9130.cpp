// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9130.

// Ghidra body range 0x587B9130..0x587B9145; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9130_segment_00() {
    __asm {
        // 0x587B9130: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9132: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9134: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9136: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9138: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B913A: push 0x80010d06
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B913F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x7B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9144: ret
        __asm _emit 0xC3
    }
}
