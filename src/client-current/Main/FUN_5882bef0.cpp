// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 65 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882bef0.

// Ghidra body range 0x5882BEF0..0x5882BF31; 65 mapped bytes.
extern "C" __declspec(naked) void FUN_5882bef0_segment_00() {
    __asm {
        // 0x5882BEF0: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5882BEF3: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5882BEF7: push esi
        __asm _emit 0x56
        // 0x5882BEF8: mov esi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x1C
        // 0x5882BEFB: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5882BEFD: cmp dword ptr [eax], esi
        __asm _emit 0x39
        __asm _emit 0x30
        // 0x5882BEFF: jg 0x5882bf2b
        __asm _emit 0x7F
        __asm _emit 0x2A
        // 0x5882BF01: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5882BF04: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5882BF06: cmp dword ptr [eax + 8], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x5882BF09: jl 0x5882bf2b
        __asm _emit 0x7C
        __asm _emit 0x20
        // 0x5882BF0B: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5882BF0E: mov esi, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x20
        // 0x5882BF11: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x5882BF13: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5882BF16: jg 0x5882bf2b
        __asm _emit 0x7F
        __asm _emit 0x13
        // 0x5882BF18: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x5882BF1B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5882BF1D: cmp dword ptr [eax + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5882BF20: jl 0x5882bf2b
        __asm _emit 0x7C
        __asm _emit 0x09
        // 0x5882BF22: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882BF27: pop esi
        __asm _emit 0x5E
        // 0x5882BF28: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882BF2B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882BF2D: pop esi
        __asm _emit 0x5E
        // 0x5882BF2E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
