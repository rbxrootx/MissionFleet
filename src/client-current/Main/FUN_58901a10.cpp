// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901A10 .. +0x2B bytes.
// Source symbol alias: FUN_58901a10.
extern "C" __declspec(naked) void FUN_58901a10() {
    __asm {
        // 0x58901A10: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58901A14: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58901A18: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58901A1C: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58901A1E: je 0x58901a3a
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58901A20: push esi
        __asm _emit 0x56
        // 0x58901A21: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901A23: je 0x58901a2f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58901A25: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58901A27: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58901A29: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x58901A2C: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58901A2F: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58901A32: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58901A35: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58901A37: jne 0x58901a21
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58901A39: pop esi
        __asm _emit 0x5E
        // 0x58901A3A: ret
        __asm _emit 0xC3
    }
}
