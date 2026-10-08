// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 60 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889c880.

// Ghidra body range 0x5889C880..0x5889C897; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c880_segment_00() {
    __asm {
        // 0x5889C880: push esi
        __asm _emit 0x56
        // 0x5889C881: push edi
        __asm _emit 0x57
        // 0x5889C882: lea eax, [ecx + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C888: mov esi, 0x20
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C88D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5889C890: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C895: jmp 0x5889c8a0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x5889C8A0..0x5889C8C5; 37 mapped bytes.
extern "C" __declspec(naked) void FUN_5889c880_segment_01() {
    __asm {
        // 0x5889C8A0: mov ecx, dword ptr [eax - 0x100]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889C8A6: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889C8AB: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5889C8AF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5889C8B1: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5889C8B5: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5889C8B8: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5889C8BB: jne 0x5889c8a0
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x5889C8BD: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5889C8C0: jne 0x5889c890
        __asm _emit 0x75
        __asm _emit 0xCE
        // 0x5889C8C2: pop edi
        __asm _emit 0x5F
        // 0x5889C8C3: pop esi
        __asm _emit 0x5E
        // 0x5889C8C4: ret
        __asm _emit 0xC3
    }
}
