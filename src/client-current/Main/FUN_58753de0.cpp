// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753DE0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58753de0() {
    __asm {
        // 0x58753DE0: push ecx
        __asm _emit 0x51
        // 0x58753DE1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753DE5: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58753DE9: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58753DEC: push eax
        __asm _emit 0x50
        // 0x58753DED: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753DF1: push edx
        __asm _emit 0x52
        // 0x58753DF2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753DF6: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58753DF9: push ecx
        __asm _emit 0x51
        // 0x58753DFA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753DFE: push eax
        __asm _emit 0x50
        // 0x58753DFF: push ecx
        __asm _emit 0x51
        // 0x58753E00: push edx
        __asm _emit 0x52
        // 0x58753E01: call 0x58753590
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753E06: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58753E09: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
