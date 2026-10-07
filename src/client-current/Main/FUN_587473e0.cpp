// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_587473e0.

// Ghidra body range 0x587473E0..0x58747409; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_587473e0_segment_00() {
    __asm {
        // 0x587473E0: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587473E4: sub ecx, dword ptr [esp + 8]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587473E8: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587473EC: sub eax, dword ptr [esp + 4]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587473F0: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587473F2: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x587473F5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587473F7: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x587473FA: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587473FC: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747400: fild dword ptr [esp + 0xc]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747404: jmp 0x5897cc90
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
