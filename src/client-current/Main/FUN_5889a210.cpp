// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889a210.

// Ghidra body range 0x5889A210..0x5889A23C; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a210_segment_00() {
    __asm {
        // 0x5889A210: push ecx
        __asm _emit 0x51
        // 0x5889A211: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A215: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5889A219: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5889A21C: push eax
        __asm _emit 0x50
        // 0x5889A21D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889A221: push edx
        __asm _emit 0x52
        // 0x5889A222: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A226: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5889A229: push ecx
        __asm _emit 0x51
        // 0x5889A22A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889A22E: push eax
        __asm _emit 0x50
        // 0x5889A22F: push ecx
        __asm _emit 0x51
        // 0x5889A230: push edx
        __asm _emit 0x52
        // 0x5889A231: call 0x58899bb0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A236: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5889A239: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
