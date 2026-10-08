// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 38 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828dc0.

// Ghidra body range 0x58828DC0..0x58828DE6; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58828dc0_segment_00() {
    __asm {
        // 0x58828DC0: mov eax, dword ptr [ecx + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DC6: mov edx, dword ptr [ecx + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DCC: push esi
        __asm _emit 0x56
        // 0x58828DCD: lea esi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58828DD0: cmp esi, dword ptr [edx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DD6: pop esi
        __asm _emit 0x5E
        // 0x58828DD7: jg 0x58828de5
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x58828DD9: inc eax
        __asm _emit 0x40
        // 0x58828DDA: mov dword ptr [ecx + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828DE0: jmp 0x58828cb0
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828DE5: ret
        __asm _emit 0xC3
    }
}
