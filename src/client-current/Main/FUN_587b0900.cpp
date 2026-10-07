// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 10 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b0900.

// Ghidra body range 0x587B0900..0x587B090A; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_587b0900_segment_00() {
    __asm {
        // 0x587B0900: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B0904: mov dword ptr [ecx + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x587B0907: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
