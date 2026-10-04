// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DCBF0 .. +0x16 bytes.
// Source symbol alias: FUN_588dcbf0.
extern "C" __declspec(naked) void FUN_588dcbf0() {
    __asm {
        // 0x588DCBF0: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCBF7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCBFD: movzx eax, byte ptr [eax + ecx + 0x430]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCC05: ret
        __asm _emit 0xC3
    }
}
