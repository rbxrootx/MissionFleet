// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9A90 .. +0x1B bytes.
// Source symbol alias: FUN_587b9a90.
extern "C" __declspec(naked) void FUN_587b9a90() {
    __asm {
        // 0x587B9A90: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9A95: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9A97: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9A99: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9A9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9A9D: push eax
        __asm _emit 0x50
        // 0x587B9A9E: push 0x80010028
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9AA3: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x71
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9AA8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
