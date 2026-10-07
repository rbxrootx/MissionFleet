// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58893E50 .. +0x26 bytes.
// Source symbol alias: FUN_58893e50.
extern "C" __declspec(naked) void FUN_58893e50() {
    __asm {
        // 0x58893E50: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58893E54: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58893E58: push esi
        __asm _emit 0x56
        // 0x58893E59: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58893E5B: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58893E61: push eax
        __asm _emit 0x50
        // 0x58893E62: push ecx
        __asm _emit 0x51
        // 0x58893E63: push edx
        __asm _emit 0x52
        // 0x58893E64: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893E66: call 0x5888d2d0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x94
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893E6B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58893E6D: call 0x5888cee0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x90
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58893E72: pop esi
        __asm _emit 0x5E
        // 0x58893E73: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
