// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901AB0 .. +0x2C bytes.
// Source symbol alias: FUN_58901ab0.
extern "C" __declspec(naked) void FUN_58901ab0() {
    __asm {
        // 0x58901AB0: push ecx
        __asm _emit 0x51
        // 0x58901AB1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58901AB5: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58901AB9: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58901ABC: push eax
        __asm _emit 0x50
        // 0x58901ABD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901AC1: push edx
        __asm _emit 0x52
        // 0x58901AC2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58901AC6: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58901AC9: push ecx
        __asm _emit 0x51
        // 0x58901ACA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58901ACE: push eax
        __asm _emit 0x50
        // 0x58901ACF: push ecx
        __asm _emit 0x51
        // 0x58901AD0: push edx
        __asm _emit 0x52
        // 0x58901AD1: call 0x58901a10
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901AD6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58901AD9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
