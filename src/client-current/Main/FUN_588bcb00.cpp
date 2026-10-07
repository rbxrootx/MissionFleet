// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 36 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bcb00.

// Ghidra body range 0x588BCB00..0x588BCB24; 36 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcb00_segment_00() {
    __asm {
        // 0x588BCB00: push esi
        __asm _emit 0x56
        // 0x588BCB01: push edi
        __asm _emit 0x57
        // 0x588BCB02: lea esi, [ecx + 0x3d4]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCB08: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCB0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588BCB10: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588BCB12: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCB17: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCB1A: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588BCB1D: jne 0x588bcb10
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588BCB1F: pop edi
        __asm _emit 0x5F
        // 0x588BCB20: pop esi
        __asm _emit 0x5E
        // 0x588BCB21: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
