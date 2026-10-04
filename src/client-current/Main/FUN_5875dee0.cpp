// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875DEE0 .. +0x39 bytes.
// Source symbol alias: FUN_5875dee0.
extern "C" __declspec(naked) void FUN_5875dee0() {
    __asm {
        // 0x5875DEE0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875DEE4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875DEE8: push esi
        __asm _emit 0x56
        // 0x5875DEE9: push eax
        __asm _emit 0x50
        // 0x5875DEEA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875DEEE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875DEF0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875DEF4: push ecx
        __asm _emit 0x51
        // 0x5875DEF5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875DEF9: push edx
        __asm _emit 0x52
        // 0x5875DEFA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875DEFE: push eax
        __asm _emit 0x50
        // 0x5875DEFF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875DF03: push ecx
        __asm _emit 0x51
        // 0x5875DF04: push edx
        __asm _emit 0x52
        // 0x5875DF05: push eax
        __asm _emit 0x50
        // 0x5875DF06: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875DF08: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875DF0D: mov dword ptr [esi], 0x5898d9a8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA8
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875DF13: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875DF15: pop esi
        __asm _emit 0x5E
        // 0x5875DF16: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
