// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58849340 .. +0x1E bytes.
// Source symbol alias: FUN_58849340.
extern "C" __declspec(naked) void FUN_58849340() {
    __asm {
        // 0x58849340: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58849344: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58849348: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884934A: je 0x5884935d
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884934C: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58849350: push esi
        __asm _emit 0x56
        // 0x58849351: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58849353: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58849355: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58849358: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5884935A: jne 0x58849351
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x5884935C: pop esi
        __asm _emit 0x5E
        // 0x5884935D: ret
        __asm _emit 0xC3
    }
}
