// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 32 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828250.

// Ghidra body range 0x58828250..0x58828270; 32 mapped bytes.
extern "C" __declspec(naked) void FUN_58828250_segment_00() {
    __asm {
        // 0x58828250: mov edx, dword ptr [ecx + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828256: mov eax, dword ptr [ecx + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882825C: sub edx, 8
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5882825F: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58828261: jge 0x5882826f
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58828263: inc eax
        __asm _emit 0x40
        // 0x58828264: mov dword ptr [ecx + 0x1fc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882826A: jmp 0x588281a0
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882826F: ret
        __asm _emit 0xC3
    }
}
