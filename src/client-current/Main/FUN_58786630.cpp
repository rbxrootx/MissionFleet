// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786630.

// Ghidra body range 0x58786630..0x5878663E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58786630_segment_00() {
    __asm {
        // 0x58786630: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786633: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786635: je 0x5878663b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786637: mov eax, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x40
        // 0x5878663A: ret
        __asm _emit 0xC3
        // 0x5878663B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878663D: ret
        __asm _emit 0xC3
    }
}
