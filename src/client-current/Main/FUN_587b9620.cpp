// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9620 .. +0x1D bytes.
// Source symbol alias: FUN_587b9620.
extern "C" __declspec(naked) void FUN_587b9620() {
    __asm {
        // 0x587B9620: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9624: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9628: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B962A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B962C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B962E: push eax
        __asm _emit 0x50
        // 0x587B962F: push edx
        __asm _emit 0x52
        // 0x587B9630: push 0x80010021
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9635: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x76
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B963A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
