// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874CE40 .. +0x39 bytes.
// Source symbol alias: FUN_5874ce40.
extern "C" __declspec(naked) void FUN_5874ce40() {
    __asm {
        // 0x5874CE40: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874CE44: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874CE48: push esi
        __asm _emit 0x56
        // 0x5874CE49: push eax
        __asm _emit 0x50
        // 0x5874CE4A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874CE4E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874CE50: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874CE54: push ecx
        __asm _emit 0x51
        // 0x5874CE55: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874CE59: push edx
        __asm _emit 0x52
        // 0x5874CE5A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874CE5E: push eax
        __asm _emit 0x50
        // 0x5874CE5F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874CE63: push ecx
        __asm _emit 0x51
        // 0x5874CE64: push edx
        __asm _emit 0x52
        // 0x5874CE65: push eax
        __asm _emit 0x50
        // 0x5874CE66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874CE68: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874CE6D: mov dword ptr [esi], 0x5898d194
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874CE73: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874CE75: pop esi
        __asm _emit 0x5E
        // 0x5874CE76: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
