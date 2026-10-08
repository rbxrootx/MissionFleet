// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 25 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9dd0.

// Ghidra body range 0x587B9DD0..0x587B9DE9; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9dd0_segment_00() {
    __asm {
        // 0x587B9DD0: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B9DD5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DD7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DD9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DDB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9DDD: push eax
        __asm _emit 0x50
        // 0x587B9DDE: push 0x80013105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9DE3: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9DE8: ret
        __asm _emit 0xC3
    }
}
