// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 25 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a5670.

// Ghidra body range 0x587A5670..0x587A5689; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_587a5670_segment_00() {
    __asm {
        // 0x587A5670: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A5674: mov ecx, dword ptr [ecx + eax*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x81
        __asm _emit 0x08
        // 0x587A5678: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A567A: je 0x587a5686
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587A567C: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A5680: push edx
        __asm _emit 0x52
        // 0x587A5681: call 0x587b0bc0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5686: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
