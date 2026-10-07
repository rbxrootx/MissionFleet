// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9110.

// Ghidra body range 0x587B9110..0x587B9125; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9110_segment_00() {
    __asm {
        // 0x587B9110: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9112: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9114: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9116: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9118: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B911A: push 0x80010d01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B911F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x7B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9124: ret
        __asm _emit 0xC3
    }
}
