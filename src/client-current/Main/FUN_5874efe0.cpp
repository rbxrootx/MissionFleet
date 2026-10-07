// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874EFE0 .. +0x39 bytes.
// Source symbol alias: FUN_5874efe0.
extern "C" __declspec(naked) void FUN_5874efe0() {
    __asm {
        // 0x5874EFE0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874EFE4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874EFE8: push esi
        __asm _emit 0x56
        // 0x5874EFE9: push eax
        __asm _emit 0x50
        // 0x5874EFEA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EFEE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874EFF0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874EFF4: push ecx
        __asm _emit 0x51
        // 0x5874EFF5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EFF9: push edx
        __asm _emit 0x52
        // 0x5874EFFA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EFFE: push eax
        __asm _emit 0x50
        // 0x5874EFFF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874F003: push ecx
        __asm _emit 0x51
        // 0x5874F004: push edx
        __asm _emit 0x52
        // 0x5874F005: push eax
        __asm _emit 0x50
        // 0x5874F006: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874F008: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xCC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874F00D: mov dword ptr [esi], 0x5898d584
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874F013: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874F015: pop esi
        __asm _emit 0x5E
        // 0x5874F016: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
