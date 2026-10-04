// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58743A10 .. +0x37 bytes.
// Source symbol alias: FUN_58743a10.
extern "C" __declspec(naked) void FUN_58743a10() {
    __asm {
        // 0x58743A10: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58743A12: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743A17: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58743A1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743A1C: je 0x58743a24
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A1E: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A24: lea ecx, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743A27: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743A29: je 0x58743a31
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A2B: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A31: lea ecx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743A34: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743A36: je 0x58743a3e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58743A38: mov dword ptr [ecx], 0
        __asm _emit 0xC7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743A3E: mov byte ptr [eax + 0x14], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58743A42: mov byte ptr [eax + 0x15], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58743A46: ret
        __asm _emit 0xC3
    }
}
