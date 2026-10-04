// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875EE30 .. +0x13 bytes.
// Source symbol alias: FUN_5875ee30.
extern "C" __declspec(naked) void FUN_5875ee30() {
    __asm {
        // 0x5875EE30: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE35: mov dword ptr [ecx + 0x74], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875EE3C: mov dword ptr [ecx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5875EE3F: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5875EE42: ret
        __asm _emit 0xC3
    }
}
