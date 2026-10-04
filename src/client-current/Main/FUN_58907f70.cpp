// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907F70 .. +0x6 bytes.
// Source symbol alias: FUN_58907f70.
extern "C" __declspec(naked) void FUN_58907f70() {
    __asm {
        // 0x58907F70: mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58907F73: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
