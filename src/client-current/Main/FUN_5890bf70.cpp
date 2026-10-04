// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BF70 .. +0x2B bytes.
// Source symbol alias: FUN_5890bf70.
extern "C" __declspec(naked) void FUN_5890bf70() {
    __asm {
        // 0x5890BF70: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BF74: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5890BF78: push esi
        __asm _emit 0x56
        // 0x5890BF79: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BF7B: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5890BF7F: push eax
        __asm _emit 0x50
        // 0x5890BF80: push ecx
        __asm _emit 0x51
        // 0x5890BF81: push edx
        __asm _emit 0x52
        // 0x5890BF82: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BF84: mov dword ptr [esi], 0x589a2bb0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xB0
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BF8A: call 0x5890e400
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BF8F: mov dword ptr [esi], 0x589a2c00
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x2C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BF95: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890BF97: pop esi
        __asm _emit 0x5E
        // 0x5890BF98: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
