// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA550 .. +0x15 bytes.
// Source symbol alias: FUN_587ba550.
extern "C" __declspec(naked) void FUN_587ba550() {
    __asm {
        // 0x587BA550: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA552: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA554: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA556: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA558: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA55A: push 0x80011000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA55F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x67
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA564: ret
        __asm _emit 0xC3
    }
}
