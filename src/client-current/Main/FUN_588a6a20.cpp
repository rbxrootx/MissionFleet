// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6A20 .. +0x10 bytes.
// Source symbol alias: FUN_588a6a20.
extern "C" __declspec(naked) void FUN_588a6a20() {
    __asm {
        // 0x588A6A20: mov eax, dword ptr [ecx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A26: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588A6A2A: mov dword ptr [eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x588A6A2D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
