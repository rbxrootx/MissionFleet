// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DB040 .. +0xA bytes.
// Source symbol alias: FUN_588db040.
extern "C" __declspec(naked) void FUN_588db040() {
    __asm {
        // 0x588DB040: mov eax, dword ptr [ecx + 0xdc4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DB046: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588DB049: ret
        __asm _emit 0xC3
    }
}
