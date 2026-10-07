// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B99D0 .. +0x1A bytes.
// Source symbol alias: FUN_587b99d0.
extern "C" __declspec(naked) void FUN_587b99d0() {
    __asm {
        // 0x587B99D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B99D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99D8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99DA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99DC: push eax
        __asm _emit 0x50
        // 0x587B99DD: push 0x80011010
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B99E2: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B99E7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
