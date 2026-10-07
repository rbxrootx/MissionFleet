// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_58974e00.

// Ghidra body range 0x58974E00..0x58974E3B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_58974e00_segment_00() {
    __asm {
        // 0x58974E00: mov edx, dword ptr [ecx + 0x1fc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974E06: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974E08: dec edx
        __asm _emit 0x4A
        // 0x58974E09: push esi
        __asm _emit 0x56
        // 0x58974E0A: push edi
        __asm _emit 0x57
        // 0x58974E0B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58974E0D: jle 0x58974e25
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58974E0F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58974E13: lea esi, [ecx + 0x110]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974E19: cmp dword ptr [esi], edi
        __asm _emit 0x39
        __asm _emit 0x3E
        // 0x58974E1B: je 0x58974e2c
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58974E1D: inc eax
        __asm _emit 0x40
        // 0x58974E1E: add esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x0C
        // 0x58974E21: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58974E23: jl 0x58974e19
        __asm _emit 0x7C
        __asm _emit 0xF4
        // 0x58974E25: pop edi
        __asm _emit 0x5F
        // 0x58974E26: pop esi
        __asm _emit 0x5E
        // 0x58974E27: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58974E29: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58974E2C: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x58974E2F: pop edi
        __asm _emit 0x5F
        // 0x58974E30: pop esi
        __asm _emit 0x5E
        // 0x58974E31: lea eax, [ecx + eax*4 + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58974E38: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
