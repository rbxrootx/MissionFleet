// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E900 .. +0x10 bytes.
// Source symbol alias: FUN_5877e900.
extern "C" __declspec(naked) void FUN_5877e900() {
    __asm {
        // 0x5877E900: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5877E902: mov dword ptr [eax], 0x589969e4
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xE4
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877E908: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E90F: ret
        __asm _emit 0xC3
    }
}
