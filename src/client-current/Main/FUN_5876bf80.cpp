// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876bf80.

// Ghidra body range 0x5876BF80..0x5876BF95; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_5876bf80_segment_00() {
    __asm {
        // 0x5876BF80: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876BF84: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876BF86: imul eax, dword ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876BF8B: cdq
        __asm _emit 0x99
        // 0x5876BF8C: idiv dword ptr [esp + 8]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876BF90: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5876BF92: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876BF94: ret
        __asm _emit 0xC3
    }
}
