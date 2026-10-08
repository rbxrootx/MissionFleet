// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 22 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fdcf0.

// Ghidra body range 0x588FDCF0..0x588FDD06; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_588fdcf0_segment_00() {
    __asm {
        // 0x588FDCF0: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588FDCF3: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588FDCF6: jle 0x588fdd05
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x588FDCF8: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FDCFE: dec eax
        __asm _emit 0x48
        // 0x588FDCFF: push eax
        __asm _emit 0x50
        // 0x588FDD00: call 0x588fd790
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDD05: ret
        __asm _emit 0xC3
    }
}
