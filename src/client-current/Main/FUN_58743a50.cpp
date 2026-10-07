// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743a50.

// Ghidra body range 0x58743A50..0x58743A87; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_58743a50_segment_00() {
    __asm {
        // 0x58743A50: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x58743A52: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x91
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743A57: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743A5A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743A5C: je 0x58743a64
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A5E: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A64: lea ecx, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743A67: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743A69: je 0x58743a71
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A6B: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A71: lea ecx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743A74: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743A76: je 0x58743a7e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A78: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A7E: mov byte ptr [eax + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58743A82: mov byte ptr [eax + 0x29], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743A86: ret
        __asm _emit 0xC3
    }
}
