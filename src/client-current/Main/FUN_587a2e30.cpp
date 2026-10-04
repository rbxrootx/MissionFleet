// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A2E30 .. +0x23 bytes.
// Source symbol alias: FUN_587a2e30.
extern "C" __declspec(naked) void FUN_587a2e30() {
    __asm {
        // 0x587A2E30: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A2E34: mov dword ptr [ecx + 0x15c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2E3A: mov dword ptr [ecx + 0x178], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2E40: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A2E44: mov dword ptr [ecx + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2E4A: mov dword ptr [ecx + 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A2E50: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
