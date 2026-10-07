// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786330.

// Ghidra body range 0x58786330..0x5878633E; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58786330_segment_00() {
    __asm {
        // 0x58786330: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786333: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786335: je 0x5878633b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786337: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x5878633A: ret
        __asm _emit 0xC3
        // 0x5878633B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878633D: ret
        __asm _emit 0xC3
    }
}
