// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9400 .. +0x20 bytes.
// Source symbol alias: FUN_587b9400.
extern "C" __declspec(naked) void FUN_587b9400() {
    __asm {
        // 0x587B9400: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9404: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9408: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B940A: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587B940C: push eax
        __asm _emit 0x50
        // 0x587B940D: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9411: push edx
        __asm _emit 0x52
        // 0x587B9412: push eax
        __asm _emit 0x50
        // 0x587B9413: push 0x80010f09
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9418: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x78
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B941D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
