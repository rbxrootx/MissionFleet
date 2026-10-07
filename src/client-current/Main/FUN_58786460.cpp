// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786460.

// Ghidra body range 0x58786460..0x58786472; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_58786460_segment_00() {
    __asm {
        // 0x58786460: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786463: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786465: je 0x5878646f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58786467: movzx eax, word ptr [eax + 0x3c4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878646E: ret
        __asm _emit 0xC3
        // 0x5878646F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786471: ret
        __asm _emit 0xC3
    }
}
