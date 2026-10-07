// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874EC40 .. +0x39 bytes.
// Source symbol alias: FUN_5874ec40.
extern "C" __declspec(naked) void FUN_5874ec40() {
    __asm {
        // 0x5874EC40: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874EC44: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874EC48: push esi
        __asm _emit 0x56
        // 0x5874EC49: push eax
        __asm _emit 0x50
        // 0x5874EC4A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EC4E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874EC50: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874EC54: push ecx
        __asm _emit 0x51
        // 0x5874EC55: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EC59: push edx
        __asm _emit 0x52
        // 0x5874EC5A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EC5E: push eax
        __asm _emit 0x50
        // 0x5874EC5F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874EC63: push ecx
        __asm _emit 0x51
        // 0x5874EC64: push edx
        __asm _emit 0x52
        // 0x5874EC65: push eax
        __asm _emit 0x50
        // 0x5874EC66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874EC68: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874EC6D: mov dword ptr [esi], 0x5898d50c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x0C
        __asm _emit 0xD5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874EC73: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874EC75: pop esi
        __asm _emit 0x5E
        // 0x5874EC76: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
