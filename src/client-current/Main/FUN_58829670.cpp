// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_58829670.

// Ghidra body range 0x58829670..0x58829685; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58829670_segment_00() {
    __asm {
        // 0x58829670: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58829672: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58829675: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58829677: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829679: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882967E: push eax
        __asm _emit 0x50
        // 0x5882967F: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58829682: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58829684: ret
        __asm _emit 0xC3
    }
}
