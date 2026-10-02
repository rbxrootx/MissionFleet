// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753E10 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58753e10() {
    __asm {
        // 0x58753E10: push ecx
        __asm _emit 0x51
        // 0x58753E11: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753E15: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58753E19: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58753E1C: push eax
        __asm _emit 0x50
        // 0x58753E1D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753E21: push edx
        __asm _emit 0x52
        // 0x58753E22: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753E26: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58753E29: push ecx
        __asm _emit 0x51
        // 0x58753E2A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753E2E: push eax
        __asm _emit 0x50
        // 0x58753E2F: push ecx
        __asm _emit 0x51
        // 0x58753E30: push edx
        __asm _emit 0x52
        // 0x58753E31: call 0x587535c0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753E36: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58753E39: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
