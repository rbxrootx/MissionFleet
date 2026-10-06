// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B95E0 .. +0x1A bytes.
// Source symbol alias: FUN_587b95e0.
extern "C" __declspec(naked) void FUN_587b95e0() {
    __asm {
        // 0x587B95E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B95E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B95E6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B95E8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B95EA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B95EC: push eax
        __asm _emit 0x50
        // 0x587B95ED: push 0x80010034
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B95F2: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x76
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B95F7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
