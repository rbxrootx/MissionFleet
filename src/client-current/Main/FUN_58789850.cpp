// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_58789850.

// Ghidra body range 0x58789850..0x5878985D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_58789850_segment_00() {
    __asm {
        // 0x58789850: push esi
        __asm _emit 0x56
        // 0x58789851: push edi
        __asm _emit 0x57
        // 0x58789852: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58789854: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58789857: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58789859: je 0x58789871
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5878985B: jmp 0x58789860
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58789860..0x5878986A; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_58789850_segment_01() {
    __asm {
        // 0x58789860: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58789862: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58789864: push eax
        __asm _emit 0x50
        // 0x58789865: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x33
        __asm _emit 0x1F
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58789871..0x58789889; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_58789850_segment_02() {
    __asm {
        // 0x58789871: mov dword ptr [edi + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789878: mov dword ptr [edi + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878987F: mov dword ptr [edi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789886: pop edi
        __asm _emit 0x5F
        // 0x58789887: pop esi
        __asm _emit 0x5E
        // 0x58789888: ret
        __asm _emit 0xC3
    }
}
