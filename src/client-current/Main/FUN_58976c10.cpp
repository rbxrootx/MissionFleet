// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 16 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976c10.

// Ghidra body range 0x58976C10..0x58976C20; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_58976c10_segment_00() {
    __asm {
        // 0x58976C10: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58976C14: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58976C18: lea eax, [eax + ecx - 1]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x58976C1C: cdq
        __asm _emit 0x99
        // 0x58976C1D: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58976C1F: ret
        __asm _emit 0xC3
    }
}
