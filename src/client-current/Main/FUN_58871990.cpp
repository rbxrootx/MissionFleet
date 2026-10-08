// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 26 bytes in 1 exact ranges.
// Source symbol alias: FUN_58871990.

// Ghidra body range 0x58871990..0x588719AA; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_58871990_segment_00() {
    __asm {
        // 0x58871990: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58871995: jne 0x588719a5
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58871997: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887199B: cmp eax, dword ptr [ecx + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x5887199E: jne 0x588719a5
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588719A0: call 0x58871290
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588719A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588719A7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
