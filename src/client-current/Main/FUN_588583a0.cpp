// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588583A0 .. +0x24 bytes.
// Source symbol alias: FUN_588583a0.
extern "C" __declspec(naked) void FUN_588583a0() {
    __asm {
        // 0x588583A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588583A4: lea eax, [ecx + eax*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588583AB: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588583AF: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588583B1: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588583B5: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588583BB: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588583BF: jmp 0x587a15e0
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x92
        __asm _emit 0xF4
        __asm _emit 0xFF
    }
}
