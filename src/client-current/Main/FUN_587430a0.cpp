// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 18 bytes in 1 exact ranges.
// Source symbol alias: FUN_587430a0.

// Ghidra body range 0x587430A0..0x587430B2; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_587430a0_segment_00() {
    __asm {
        // 0x587430A0: push esi
        __asm _emit 0x56
        // 0x587430A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587430A3: lea ecx, [esi + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587430A9: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xCD
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587430AE: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587430B0: pop esi
        __asm _emit 0x5E
        // 0x587430B1: ret
        __asm _emit 0xC3
    }
}
