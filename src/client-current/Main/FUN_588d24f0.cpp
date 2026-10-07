// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra reports 33 bytes in 2 ranges; the complete matched stream is 36 bytes in 3 ranges.
// Source symbol alias: FUN_588d24f0.

// Ghidra body range 0x588D24F0..0x588D250B; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_588d24f0_segment_00() {
    __asm {
        // 0x588D24F0: push esi
        __asm _emit 0x56
        // 0x588D24F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D24F3: mov dword ptr [esi], 0x589a0f38
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D24F9: call 0x58741990
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xF4
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D24FE: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588D2503: je 0x588d250e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588D2505: push esi
        __asm _emit 0x56
        // 0x588D2506: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xA7
        __asm _emit 0x0A
        __asm _emit 0x00
    }
}

// Mapped reachable fall-through at 0x588D250B..0x588D250E; excluded from Ghidra body ranges.
extern "C" __declspec(naked) void FUN_588d24f0_segment_01() {
    __asm {
        // 0x588D250B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
    }
}

// Ghidra body range 0x588D250E..0x588D2514; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_588d24f0_segment_02() {
    __asm {
        // 0x588D250E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D2510: pop esi
        __asm _emit 0x5E
        // 0x588D2511: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
