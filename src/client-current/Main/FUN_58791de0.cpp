// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 50 bytes in 1 exact ranges.
// Source symbol alias: FUN_58791de0.

// Ghidra body range 0x58791DE0..0x58791E12; 50 mapped bytes.
extern "C" __declspec(naked) void FUN_58791de0_segment_00() {
    __asm {
        // 0x58791DE0: push ecx
        __asm _emit 0x51
        // 0x58791DE1: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58791DE5: push esi
        __asm _emit 0x56
        // 0x58791DE6: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58791DEA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58791DEC: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58791DEF: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791DF6: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58791DFA: mov byte ptr [esi + 4], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58791DFD: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58791E01: push eax
        __asm _emit 0x50
        // 0x58791E02: push edx
        __asm _emit 0x52
        // 0x58791E03: push ecx
        __asm _emit 0x51
        // 0x58791E04: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58791E06: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x31
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58791E0B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58791E0D: pop esi
        __asm _emit 0x5E
        // 0x58791E0E: pop ecx
        __asm _emit 0x59
        // 0x58791E0F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
