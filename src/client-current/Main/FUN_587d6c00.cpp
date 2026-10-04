// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D6C00 .. +0x7 bytes.
// Source symbol alias: FUN_587d6c00.
extern "C" __declspec(naked) void FUN_587d6c00() {
    __asm {
        // 0x587D6C00: mov eax, dword ptr [ecx + 0x1028]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D6C06: ret
        __asm _emit 0xC3
    }
}
