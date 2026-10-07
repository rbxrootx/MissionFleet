// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 1 exact ranges.
// Source symbol alias: FUN_587af690.

// Ghidra body range 0x587AF690..0x587AF6AB; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_587af690_segment_00() {
    __asm {
        // 0x587AF690: push esi
        __asm _emit 0x56
        // 0x587AF691: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF696: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AF698: call 0x587af500
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF69D: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF6A2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AF6A4: call 0x587af500
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF6A9: pop esi
        __asm _emit 0x5E
        // 0x587AF6AA: ret
        __asm _emit 0xC3
    }
}
