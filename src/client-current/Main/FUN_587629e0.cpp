// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 24 bytes in 1 exact ranges.
// Source symbol alias: FUN_587629e0.

// Ghidra body range 0x587629E0..0x587629F8; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_587629e0_segment_00() {
    __asm {
        // 0x587629E0: cmp dword ptr [ecx + 0x78], 3
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x03
        // 0x587629E4: jne 0x587629f7
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587629E6: cmp dword ptr [ecx + 0x7c], 1
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x7C
        __asm _emit 0x01
        // 0x587629EA: jne 0x587629f7
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587629EC: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587629F2: jmp 0x587929d0
        __asm _emit 0xE9
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587629F7: ret
        __asm _emit 0xC3
    }
}
