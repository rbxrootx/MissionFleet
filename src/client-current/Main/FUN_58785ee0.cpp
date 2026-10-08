// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 17 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785ee0.

// Ghidra body range 0x58785EE0..0x58785EF1; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_58785ee0_segment_00() {
    __asm {
        // 0x58785EE0: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58785EE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58785EE5: je 0x58785eee
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58785EE7: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58785EEB: mov dword ptr [eax + 0x4c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x4C
        // 0x58785EEE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
