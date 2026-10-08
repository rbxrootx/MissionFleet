// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba0a0.

// Ghidra body range 0x587BA0A0..0x587BA0B5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba0a0_segment_00() {
    __asm {
        // 0x587BA0A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0A6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0A8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0AA: push 0x8001c004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA0AF: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA0B4: ret
        __asm _emit 0xC3
    }
}
