// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890E020 .. +0x3A bytes.
// Source symbol alias: FUN_5890e020.
extern "C" __declspec(naked) void FUN_5890e020() {
    __asm {
        // 0x5890E020: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890E024: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890E028: push esi
        __asm _emit 0x56
        // 0x5890E029: push eax
        __asm _emit 0x50
        // 0x5890E02A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890E02E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890E030: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890E034: push ecx
        __asm _emit 0x51
        // 0x5890E035: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890E039: push edx
        __asm _emit 0x52
        // 0x5890E03A: push eax
        __asm _emit 0x50
        // 0x5890E03B: push ecx
        __asm _emit 0x51
        // 0x5890E03C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890E03E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x3C
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x5890E043: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E048: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5890E04B: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5890E04E: mov dword ptr [esi], 0x589a2d20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x2D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890E054: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890E056: pop esi
        __asm _emit 0x5E
        // 0x5890E057: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
