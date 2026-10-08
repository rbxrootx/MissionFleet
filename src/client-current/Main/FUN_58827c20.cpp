// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 24 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827c20.

// Ghidra body range 0x58827C20..0x58827C38; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58827c20_segment_00() {
    __asm {
        // 0x58827C20: mov al, byte ptr [ecx + 0x9c]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C26: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58827C28: jbe 0x58827c37
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x58827C2A: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58827C2C: mov byte ptr [ecx + 0x9c], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C32: jmp 0x58827bd0
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58827C37: ret
        __asm _emit 0xC3
    }
}
