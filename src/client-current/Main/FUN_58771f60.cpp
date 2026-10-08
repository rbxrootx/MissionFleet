// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 12 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771f60.

// Ghidra body range 0x58771F60..0x58771F6C; 12 mapped bytes.
extern "C" __declspec(naked) void FUN_58771f60_segment_00() {
    __asm {
        // 0x58771F60: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58771F64: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58771F67: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58771F69: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
