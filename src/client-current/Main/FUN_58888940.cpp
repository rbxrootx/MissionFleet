// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888940 .. +0x1A bytes.
// Source symbol alias: FUN_58888940.
extern "C" __declspec(naked) void FUN_58888940() {
    __asm {
        // 0x58888940: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58888945: mov dword ptr [ecx + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888894B: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888951: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58888955: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0xEA
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
