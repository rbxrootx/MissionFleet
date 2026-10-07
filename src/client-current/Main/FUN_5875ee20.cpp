// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875EE20 .. +0x4 bytes.
// Source symbol alias: FUN_5875ee20.
extern "C" __declspec(naked) void FUN_5875ee20() {
    __asm {
        // 0x5875EE20: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5875EE23: ret
        __asm _emit 0xC3
    }
}
