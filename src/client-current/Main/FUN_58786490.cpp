// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786490.

// Ghidra body range 0x58786490..0x5878649E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58786490_segment_00() {
    __asm {
        // 0x58786490: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786493: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786495: je 0x5878649b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786497: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5878649A: ret
        __asm _emit 0xC3
        // 0x5878649B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878649D: ret
        __asm _emit 0xC3
    }
}
