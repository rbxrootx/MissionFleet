// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 43 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887da60.

// Ghidra body range 0x5887DA60..0x5887DA8B; 43 mapped bytes.
extern "C" __declspec(naked) void FUN_5887da60_segment_00() {
    __asm {
        // 0x5887DA60: push ecx
        __asm _emit 0x51
        // 0x5887DA61: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887DA65: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5887DA69: mov byte ptr [esp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5887DA6D: mov eax, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5887DA70: push eax
        __asm _emit 0x50
        // 0x5887DA71: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887DA75: push ecx
        __asm _emit 0x51
        // 0x5887DA76: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887DA7A: push edx
        __asm _emit 0x52
        // 0x5887DA7B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5887DA7F: push eax
        __asm _emit 0x50
        // 0x5887DA80: push ecx
        __asm _emit 0x51
        // 0x5887DA81: push edx
        __asm _emit 0x52
        // 0x5887DA82: call 0x5887b450
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887DA87: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5887DA8A: ret
        __asm _emit 0xC3
    }
}
