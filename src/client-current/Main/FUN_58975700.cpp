// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975700.

// Ghidra body range 0x58975700..0x5897571E; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_58975700_segment_00() {
    __asm {
        // 0x58975700: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975704: push eax
        __asm _emit 0x50
        // 0x58975705: call 0x589756c0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897570A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897570E: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58975712: push ecx
        __asm _emit 0x51
        // 0x58975713: push eax
        __asm _emit 0x50
        // 0x58975714: push edx
        __asm _emit 0x52
        // 0x58975715: call 0x58975680
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897571A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897571D: ret
        __asm _emit 0xC3
    }
}
