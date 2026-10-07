// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9420 .. +0x20 bytes.
// Source symbol alias: FUN_587b9420.
extern "C" __declspec(naked) void FUN_587b9420() {
    __asm {
        // 0x587B9420: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9424: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9428: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B942A: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587B942C: push eax
        __asm _emit 0x50
        // 0x587B942D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9431: push edx
        __asm _emit 0x52
        // 0x587B9432: push eax
        __asm _emit 0x50
        // 0x587B9433: push 0x80010f0a
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9438: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x78
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B943D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
