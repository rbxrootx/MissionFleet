// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 2 exact ranges.
// Source symbol alias: FUN_58789db0.

// Ghidra body range 0x58789DB0..0x58789DCA; 26 mapped bytes.
extern "C" __declspec(naked) void FUN_58789db0_segment_00() {
    __asm {
        // 0x58789DB0: push ebx
        __asm _emit 0x53
        // 0x58789DB1: push esi
        __asm _emit 0x56
        // 0x58789DB2: push edi
        __asm _emit 0x57
        // 0x58789DB3: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58789DB5: mov esi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x58789DB8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58789DBA: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58789DBC: je 0x58789dd1
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58789DBE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58789DC0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58789DC2: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58789DC4: push eax
        __asm _emit 0x50
        // 0x58789DC5: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x2E
        __asm _emit 0x1F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58789DD1..0x58789DE1; 16 mapped bytes.
extern "C" __declspec(naked) void FUN_58789db0_segment_01() {
    __asm {
        // 0x58789DD1: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x10
        // 0x58789DD4: mov dword ptr [edi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x0C
        // 0x58789DD7: mov dword ptr [edi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x58789DDA: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58789DDD: pop edi
        __asm _emit 0x5F
        // 0x58789DDE: pop esi
        __asm _emit 0x5E
        // 0x58789DDF: pop ebx
        __asm _emit 0x5B
        // 0x58789DE0: ret
        __asm _emit 0xC3
    }
}
