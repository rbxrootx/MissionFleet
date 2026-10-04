// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589081C0 .. +0x20 bytes.
// Source symbol alias: FUN_589081c0.
extern "C" __declspec(naked) void FUN_589081c0() {
    __asm {
        // 0x589081C0: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x589081C3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x589081C5: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x589081C7: je 0x589081dc
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x589081C9: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589081CF: nop
        __asm _emit 0x90
        // 0x589081D0: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x589081D2: je 0x589081df
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x589081D4: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x589081D7: inc eax
        __asm _emit 0x40
        // 0x589081D8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x589081DA: jne 0x589081d0
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x589081DC: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x589081DF: ret
        __asm _emit 0xC3
    }
}
