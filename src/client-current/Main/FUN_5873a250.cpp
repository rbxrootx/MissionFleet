// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A250 .. +0x7 bytes.
// Source symbol alias: FUN_5873a250.
extern "C" __declspec(naked) void FUN_5873a250() {
    __asm {
        // 0x5873A250: mov eax, dword ptr [ecx + 0x470]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A256: ret
        __asm _emit 0xC3
    }
}
