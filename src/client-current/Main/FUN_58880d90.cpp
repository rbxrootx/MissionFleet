// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_58880d90.

// Ghidra body range 0x58880D90..0x58880DBC; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_58880d90_segment_00() {
    __asm {
        // 0x58880D90: push ecx
        __asm _emit 0x51
        // 0x58880D91: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880D95: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58880D99: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58880D9C: push eax
        __asm _emit 0x50
        // 0x58880D9D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58880DA1: push edx
        __asm _emit 0x52
        // 0x58880DA2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880DA6: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58880DA9: push ecx
        __asm _emit 0x51
        // 0x58880DAA: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58880DAE: push eax
        __asm _emit 0x50
        // 0x58880DAF: push ecx
        __asm _emit 0x51
        // 0x58880DB0: push edx
        __asm _emit 0x52
        // 0x58880DB1: call 0x5887cb60
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xBD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58880DB6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58880DB9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
