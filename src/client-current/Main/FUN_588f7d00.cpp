// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 7 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7d00.

// Ghidra body range 0x588F7D00..0x588F7D07; 7 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7d00_segment_00() {
    __asm {
        // 0x588F7D00: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7D02: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588F7D05: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
