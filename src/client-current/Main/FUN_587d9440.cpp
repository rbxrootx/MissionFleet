// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 29 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d9440.

// Ghidra body range 0x587D9440..0x587D945D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587d9440_segment_00() {
    __asm {
        // 0x587D9440: mov eax, dword ptr [ecx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9446: mov edx, dword ptr [eax + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x48
        // 0x587D9449: lea ecx, [eax + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x587D944C: push ecx
        __asm _emit 0x51
        // 0x587D944D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D9453: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587D9456: push edx
        __asm _emit 0x52
        // 0x587D9457: call 0x587ba000
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x0B
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D945C: ret
        __asm _emit 0xC3
    }
}
