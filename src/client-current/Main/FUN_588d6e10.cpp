// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6E10 .. +0x1D bytes.
// Source symbol alias: FUN_588d6e10.
extern "C" __declspec(naked) void FUN_588d6e10() {
    __asm {
        // 0x588D6E10: mov eax, dword ptr [ecx + 0x6504]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6E16: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D6E1B: add eax, dword ptr [esp + 4]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D6E1F: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D6E24: mov dword ptr [ecx + 0x6504], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6E2A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
