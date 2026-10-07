// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874E0A0 .. +0x39 bytes.
// Source symbol alias: FUN_5874e0a0.
extern "C" __declspec(naked) void FUN_5874e0a0() {
    __asm {
        // 0x5874E0A0: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874E0A4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874E0A8: push esi
        __asm _emit 0x56
        // 0x5874E0A9: push eax
        __asm _emit 0x50
        // 0x5874E0AA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874E0AE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874E0B0: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874E0B4: push ecx
        __asm _emit 0x51
        // 0x5874E0B5: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874E0B9: push edx
        __asm _emit 0x52
        // 0x5874E0BA: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874E0BE: push eax
        __asm _emit 0x50
        // 0x5874E0BF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874E0C3: push ecx
        __asm _emit 0x51
        // 0x5874E0C4: push edx
        __asm _emit 0x52
        // 0x5874E0C5: push eax
        __asm _emit 0x50
        // 0x5874E0C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874E0C8: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874E0CD: mov dword ptr [esi], 0x5898d374
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xD3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874E0D3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874E0D5: pop esi
        __asm _emit 0x5E
        // 0x5874E0D6: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
