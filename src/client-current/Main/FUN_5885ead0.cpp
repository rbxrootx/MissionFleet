// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_5885ead0.

// Ghidra body range 0x5885EAD0..0x5885EAE2; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_5885ead0_segment_00() {
    __asm {
        // 0x5885EAD0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5885EAD4: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5885EAD8: mov dword ptr [ecx + edx*4 + 0x628], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EADF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
