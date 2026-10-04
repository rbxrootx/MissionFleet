// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x58791E20 .. +0x2A bytes.
// Source symbol alias: FUN_58791e20.
extern "C" __declspec(naked) void FUN_58791e20() {
    __asm {
        // 0x58791E20: push esi
        __asm _emit 0x56
        // 0x58791E21: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58791E25: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58791E29: jb 0x58791e37
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x58791E2B: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58791E2E: push eax
        __asm _emit 0x50
        // 0x58791E2F: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xAE
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58791E34: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58791E37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58791E39: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791E40: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58791E43: mov byte ptr [esi + 4], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58791E46: pop esi
        __asm _emit 0x5E
        // 0x58791E47: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
