// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890C1D0 .. +0x3E bytes.
// Source symbol alias: FUN_5890c1d0.
extern "C" __declspec(naked) void FUN_5890c1d0() {
    __asm {
        // 0x5890C1D0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890C1D4: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890C1D8: push esi
        __asm _emit 0x56
        // 0x5890C1D9: push eax
        __asm _emit 0x50
        // 0x5890C1DA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C1DE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890C1E0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890C1E4: push ecx
        __asm _emit 0x51
        // 0x5890C1E5: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C1E9: push edx
        __asm _emit 0x52
        // 0x5890C1EA: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C1EE: push eax
        __asm _emit 0x50
        // 0x5890C1EF: push ecx
        __asm _emit 0x51
        // 0x5890C1F0: push edx
        __asm _emit 0x52
        // 0x5890C1F1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890C1F3: call 0x5890d0c0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C1F8: mov dword ptr [esi], 0x589a2c78
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x78
        __asm _emit 0x2C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890C1FE: mov dword ptr [esi + 0x12c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C208: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890C20A: pop esi
        __asm _emit 0x5E
        // 0x5890C20B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
