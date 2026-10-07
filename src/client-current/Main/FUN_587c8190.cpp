// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C8190 .. +0xD bytes.
// Source symbol alias: FUN_587c8190.
extern "C" __declspec(naked) void FUN_587c8190() {
    __asm {
        // 0x587C8190: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C8194: mov dword ptr [ecx + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C819A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
