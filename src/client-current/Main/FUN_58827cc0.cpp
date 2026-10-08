// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 24 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827cc0.

// Ghidra body range 0x58827CC0..0x58827CD8; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58827cc0_segment_00() {
    __asm {
        // 0x58827CC0: mov al, byte ptr [ecx + 0x9d]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CC6: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58827CC8: jbe 0x58827cd7
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x58827CCA: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58827CCC: mov byte ptr [ecx + 0x9d], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CD2: jmp 0x58827c70
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827CD7: ret
        __asm _emit 0xC3
    }
}
