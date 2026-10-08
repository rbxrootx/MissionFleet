// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 67 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877880.

// Ghidra body range 0x58877880..0x588778C3; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_58877880_segment_00() {
    __asm {
        // 0x58877880: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x58877885: jne 0x588778be
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x58877887: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887788B: cmp eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877891: jne 0x5887789d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58877893: call 0x588772c0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877898: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887789A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5887789D: cmp eax, dword ptr [ecx + 0xa0]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588778A3: jne 0x588778af
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588778A5: call 0x58877310
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588778AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588778AC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588778AF: cmp eax, dword ptr [ecx + 0x98]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588778B5: jne 0x588778be
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588778B7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588778B9: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588778BC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588778BE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588778C0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
