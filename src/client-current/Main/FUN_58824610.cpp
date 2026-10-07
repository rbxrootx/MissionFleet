// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 23 bytes in 1 exact ranges.
// Source symbol alias: FUN_58824610.

// Ghidra body range 0x58824610..0x58824627; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_58824610_segment_00() {
    __asm {
        // 0x58824610: push esi
        __asm _emit 0x56
        // 0x58824611: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58824613: call 0x58827610
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x2F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824618: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5882461A: call 0x588285b0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882461F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58824621: pop esi
        __asm _emit 0x5E
        // 0x58824622: jmp 0x588272d0
        __asm _emit 0xE9
        __asm _emit 0xA9
        __asm _emit 0x2C
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
