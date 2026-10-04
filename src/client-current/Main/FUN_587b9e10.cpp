// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9E10 .. +0x1A bytes.
// Source symbol alias: FUN_587b9e10.
extern "C" __declspec(naked) void FUN_587b9e10() {
    __asm {
        // 0x587B9E10: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9E14: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9E16: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9E18: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9E1A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9E1C: push eax
        __asm _emit 0x50
        // 0x587B9E1D: push 0x8001312b
        __asm _emit 0x68
        __asm _emit 0x2B
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9E22: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x6E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9E27: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
