// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A5380 .. +0x3 bytes.
extern "C" __declspec(naked) void FUN_588a5380() {
    __asm {
        // 0x588A5380: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
