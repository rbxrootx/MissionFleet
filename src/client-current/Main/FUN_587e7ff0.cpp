// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e7ff0.

// Ghidra body range 0x587E7FF0..0x587E8003; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_587e7ff0_segment_00() {
    __asm {
        // 0x587E7FF0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E7FF2: mov edx, dword ptr [ecx + 0x72c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x2C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7FF8: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x587E7FFB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7FFD: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587E7FFF: push edx
        __asm _emit 0x52
        // 0x587E8000: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E8002: ret
        __asm _emit 0xC3
    }
}
