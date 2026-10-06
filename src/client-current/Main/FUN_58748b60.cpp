// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58748B60 .. +0x5E bytes.
// Source symbol alias: FUN_58748b60.
extern "C" __declspec(naked) void FUN_58748b60() {
    __asm {
        // 0x58748B60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58748B62: push 0x5897e2d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xE2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58748B67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748B6D: push eax
        __asm _emit 0x50
        // 0x58748B6E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58748B71: push esi
        __asm _emit 0x56
        // 0x58748B72: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58748B77: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58748B79: push eax
        __asm _emit 0x50
        // 0x58748B7A: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748B7E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748B84: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58748B86: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58748B8A: lea eax, [esp + 0xb]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x58748B8E: push eax
        __asm _emit 0x50
        // 0x58748B8F: lea ecx, [esp + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58748B93: push ecx
        __asm _emit 0x51
        // 0x58748B94: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58748B96: call 0x587ff3e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58748B9B: lea ecx, [esi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x58748B9E: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748BA6: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x72
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x58748BAB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58748BAD: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58748BB1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748BB8: pop ecx
        __asm _emit 0x59
        // 0x58748BB9: pop esi
        __asm _emit 0x5E
        // 0x58748BBA: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58748BBD: ret
        __asm _emit 0xC3
    }
}
