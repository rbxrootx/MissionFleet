// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874EE50 .. +0x39 bytes.
// Source symbol alias: FUN_5874ee50.
extern "C" __declspec(naked) void FUN_5874ee50() {
    __asm {
        // 0x5874EE50: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874EE54: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874EE58: push esi
        __asm _emit 0x56
        // 0x5874EE59: push eax
        __asm _emit 0x50
        // 0x5874EE5A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EE5E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874EE60: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874EE64: push ecx
        __asm _emit 0x51
        // 0x5874EE65: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EE69: push edx
        __asm _emit 0x52
        // 0x5874EE6A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EE6E: push eax
        __asm _emit 0x50
        // 0x5874EE6F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EE73: push ecx
        __asm _emit 0x51
        // 0x5874EE74: push edx
        __asm _emit 0x52
        // 0x5874EE75: push eax
        __asm _emit 0x50
        // 0x5874EE76: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874EE78: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874EE7D: mov dword ptr [esi], 0x5898d548
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874EE83: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874EE85: pop esi
        __asm _emit 0x5E
        // 0x5874EE86: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
