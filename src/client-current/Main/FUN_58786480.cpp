// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786480.

// Ghidra body range 0x58786480..0x5878648E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58786480_segment_00() {
    __asm {
        // 0x58786480: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786483: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786485: je 0x5878648b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786487: movzx eax, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x00
        // 0x5878648A: ret
        __asm _emit 0xC3
        // 0x5878648B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878648D: ret
        __asm _emit 0xC3
    }
}
