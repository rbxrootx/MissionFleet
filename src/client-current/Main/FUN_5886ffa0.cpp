// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 23 bytes in 1 exact ranges.
// Source symbol alias: FUN_5886ffa0.

// Ghidra body range 0x5886FFA0..0x5886FFB7; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_5886ffa0_segment_00() {
    __asm {
        // 0x5886FFA0: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5886FFA4: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5886FFA8: push edx
        __asm _emit 0x52
        // 0x5886FFA9: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FFAF: call 0x5886ba60
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886FFB4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
