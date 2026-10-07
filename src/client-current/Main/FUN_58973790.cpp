// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973790.

// Ghidra body range 0x58973790..0x589737A5; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58973790_segment_00() {
    __asm {
        // 0x58973790: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58973793: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973795: je 0x589737a2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58973797: mov edx, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5897379A: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897379C: je 0x589737a2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5897379E: add eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x28
        // 0x589737A1: ret
        __asm _emit 0xC3
        // 0x589737A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589737A4: ret
        __asm _emit 0xC3
    }
}
