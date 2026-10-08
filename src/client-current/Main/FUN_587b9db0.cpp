// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 25 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9db0.

// Ghidra body range 0x587B9DB0..0x587B9DC9; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9db0_segment_00() {
    __asm {
        // 0x587B9DB0: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B9DB5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DB7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DB9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DBB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DBD: push eax
        __asm _emit 0x50
        // 0x587B9DBE: push 0x80013108
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9DC3: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9DC8: ret
        __asm _emit 0xC3
    }
}
