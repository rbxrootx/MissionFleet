// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_587864a0.

// Ghidra body range 0x587864A0..0x587864AE; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_587864a0_segment_00() {
    __asm {
        // 0x587864A0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587864A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587864A5: je 0x587864ab
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587864A7: add eax, 0x60
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x60
        // 0x587864AA: ret
        __asm _emit 0xC3
        // 0x587864AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587864AD: ret
        __asm _emit 0xC3
    }
}
