// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58750390 .. +0x11 bytes.
// Source symbol alias: FUN_58750390.
extern "C" __declspec(naked) void FUN_58750390() {
    __asm {
        // 0x58750390: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58750394: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58750398: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875039B: mov dword ptr [ecx + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x5875039E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
