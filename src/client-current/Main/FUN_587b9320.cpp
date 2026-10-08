// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b9320.

// Ghidra body range 0x587B9320..0x587B933E; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587b9320_segment_00() {
    __asm {
        // 0x587B9320: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B9325: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B932B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B932D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B932F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9331: push eax
        __asm _emit 0x50
        // 0x587B9332: push edx
        __asm _emit 0x52
        // 0x587B9333: push 0x80010f0b
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9338: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x79
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B933D: ret
        __asm _emit 0xC3
    }
}
