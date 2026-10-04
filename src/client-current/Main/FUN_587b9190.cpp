// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9190 .. +0x15 bytes.
// Source symbol alias: FUN_587b9190.
extern "C" __declspec(naked) void FUN_587b9190() {
    __asm {
        // 0x587B9190: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9192: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9194: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9196: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9198: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B919A: push 0x80010f01
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B919F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x7A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B91A4: ret
        __asm _emit 0xC3
    }
}
