// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 24 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976c20.

// Ghidra body range 0x58976C20..0x58976C38; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58976c20_segment_00() {
    __asm {
        // 0x58976C20: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58976C24: push esi
        __asm _emit 0x56
        // 0x58976C25: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58976C29: lea ecx, [eax + esi - 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x30
        __asm _emit 0xFF
        // 0x58976C2D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58976C2F: cdq
        __asm _emit 0x99
        // 0x58976C30: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x58976C32: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58976C34: pop esi
        __asm _emit 0x5E
        // 0x58976C35: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58976C37: ret
        __asm _emit 0xC3
    }
}
