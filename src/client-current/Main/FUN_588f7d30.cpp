// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F7D30 .. +0x5 bytes.
// Source symbol alias: FUN_588f7d30.
extern "C" __declspec(naked) void FUN_588f7d30() {
    __asm {
        // 0x588F7D30: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588F7D32: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
