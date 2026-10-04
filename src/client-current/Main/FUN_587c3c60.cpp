// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C3C60 .. +0x39 bytes.
// Source symbol alias: FUN_587c3c60.
extern "C" __declspec(naked) void FUN_587c3c60() {
    __asm {
        // 0x587C3C60: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C3C64: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C3C68: push esi
        __asm _emit 0x56
        // 0x587C3C69: push eax
        __asm _emit 0x50
        // 0x587C3C6A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C3C6E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C3C70: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C3C74: push ecx
        __asm _emit 0x51
        // 0x587C3C75: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C3C79: push edx
        __asm _emit 0x52
        // 0x587C3C7A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C3C7E: push eax
        __asm _emit 0x50
        // 0x587C3C7F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C3C83: push ecx
        __asm _emit 0x51
        // 0x587C3C84: push edx
        __asm _emit 0x52
        // 0x587C3C85: push eax
        __asm _emit 0x50
        // 0x587C3C86: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C3C88: call 0x5875bb10
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587C3C8D: mov dword ptr [esi], 0x5899ad2c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x2C
        __asm _emit 0xAD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C3C93: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C3C95: pop esi
        __asm _emit 0x5E
        // 0x587C3C96: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
