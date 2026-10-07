// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 14 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785fc0.

// Ghidra body range 0x58785FC0..0x58785FCE; 14 mapped bytes.
extern "C" __declspec(naked) void FUN_58785fc0_segment_00() {
    __asm {
        // 0x58785FC0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785FC3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785FC5: je 0x58785fcb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58785FC7: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x58785FCA: ret
        __asm _emit 0xC3
        // 0x58785FCB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785FCD: ret
        __asm _emit 0xC3
    }
}
