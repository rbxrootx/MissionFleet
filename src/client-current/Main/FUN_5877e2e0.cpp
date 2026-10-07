// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E2E0 .. +0x32 bytes.
// Source symbol alias: FUN_5877e2e0.
extern "C" __declspec(naked) void FUN_5877e2e0() {
    __asm {
        // 0x5877E2E0: push esi
        __asm _emit 0x56
        // 0x5877E2E1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5877E2E5: cmp dword ptr [ecx + 0x64], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x64
        // 0x5877E2E8: je 0x5877e30e
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5877E2EA: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5877E2ED: push edi
        __asm _emit 0x57
        // 0x5877E2EE: mov edi, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x74
        // 0x5877E2F1: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5877E2F3: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5877E2F6: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x5877E2F9: inc eax
        __asm _emit 0x40
        // 0x5877E2FA: imul edx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD6
        // 0x5877E2FD: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5877E300: dec eax
        __asm _emit 0x48
        // 0x5877E301: mov dword ptr [ecx + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x64
        // 0x5877E304: mov dword ptr [ecx + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x5877E307: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x5877E30A: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5877E30D: pop edi
        __asm _emit 0x5F
        // 0x5877E30E: pop esi
        __asm _emit 0x5E
        // 0x5877E30F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
