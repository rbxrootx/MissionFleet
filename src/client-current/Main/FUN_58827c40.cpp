// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 37 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827c40.

// Ghidra body range 0x58827C40..0x58827C65; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_58827c40_segment_00() {
    __asm {
        // 0x58827C40: mov al, byte ptr [ecx + 0x9c]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C46: movzx edx, word ptr [ecx + 0x84]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C4D: push esi
        __asm _emit 0x56
        // 0x58827C4E: movzx esi, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF0
        // 0x58827C51: dec edx
        __asm _emit 0x4A
        // 0x58827C52: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x58827C54: pop esi
        __asm _emit 0x5E
        // 0x58827C55: jge 0x58827c64
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x58827C57: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x58827C59: mov byte ptr [ecx + 0x9c], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C5F: jmp 0x58827bd0
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827C64: ret
        __asm _emit 0xC3
    }
}
