// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890E5A0 .. +0x2F bytes.
// Source symbol alias: FUN_5890e5a0.
extern "C" __declspec(naked) void FUN_5890e5a0() {
    __asm {
        // 0x5890E5A0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890E5A4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890E5A8: push esi
        __asm _emit 0x56
        // 0x5890E5A9: push eax
        __asm _emit 0x50
        // 0x5890E5AA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890E5AE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890E5B0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890E5B4: push ecx
        __asm _emit 0x51
        // 0x5890E5B5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890E5B9: push edx
        __asm _emit 0x52
        // 0x5890E5BA: push eax
        __asm _emit 0x50
        // 0x5890E5BB: push ecx
        __asm _emit 0x51
        // 0x5890E5BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890E5BE: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x64
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x5890E5C3: mov dword ptr [esi], 0x589a2d3c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0x2D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890E5C9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890E5CB: pop esi
        __asm _emit 0x5E
        // 0x5890E5CC: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
