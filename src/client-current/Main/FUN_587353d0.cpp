// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587353D0 .. +0x19 bytes.
// Source symbol alias: FUN_587353d0.
extern "C" __declspec(naked) void FUN_587353d0() {
    __asm {
        // 0x587353D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587353D4: push esi
        __asm _emit 0x56
        // 0x587353D5: push eax
        __asm _emit 0x50
        // 0x587353D6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587353D8: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587353DD: mov dword ptr [esi], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587353E3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587353E5: pop esi
        __asm _emit 0x5E
        // 0x587353E6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
