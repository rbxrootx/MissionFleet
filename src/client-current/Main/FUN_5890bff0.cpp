// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BFF0 .. +0x2B bytes.
// Source symbol alias: FUN_5890bff0.
extern "C" __declspec(naked) void FUN_5890bff0() {
    __asm {
        // 0x5890BFF0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BFF4: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5890BFF8: push esi
        __asm _emit 0x56
        // 0x5890BFF9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BFFB: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BFFF: push eax
        __asm _emit 0x50
        // 0x5890C000: push ecx
        __asm _emit 0x51
        // 0x5890C001: push edx
        __asm _emit 0x52
        // 0x5890C002: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890C004: mov dword ptr [esi], 0x589a2bb0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB0
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890C00A: call 0x5890e400
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C00F: mov dword ptr [esi], 0x589a2c50
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0x2C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890C015: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890C017: pop esi
        __asm _emit 0x5E
        // 0x5890C018: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
