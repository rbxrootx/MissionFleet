// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5883274E .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5883274e() {
    __asm {
        // 0x5883274E: mov dword ptr [0x58966724], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x24
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832758: ret
        __asm _emit 0xC3
    }
}
