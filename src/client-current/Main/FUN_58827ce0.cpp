// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 37 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827ce0.

// Ghidra body range 0x58827CE0..0x58827D05; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_58827ce0_segment_00() {
    __asm {
        // 0x58827CE0: mov al, byte ptr [ecx + 0x9d]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CE6: movzx edx, word ptr [ecx + 0x8c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CED: push esi
        __asm _emit 0x56
        // 0x58827CEE: movzx esi, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF0
        // 0x58827CF1: dec edx
        __asm _emit 0x4A
        // 0x58827CF2: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58827CF4: pop esi
        __asm _emit 0x5E
        // 0x58827CF5: jge 0x58827d04
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x58827CF7: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x58827CF9: mov byte ptr [ecx + 0x9d], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CFF: jmp 0x58827c70
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827D04: ret
        __asm _emit 0xC3
    }
}
