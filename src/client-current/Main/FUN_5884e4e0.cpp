// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 31 bytes in 1 exact ranges.
// Source symbol alias: FUN_5884e4e0.

// Ghidra body range 0x5884E4E0..0x5884E4FF; 31 mapped bytes.
extern "C" __declspec(naked) void FUN_5884e4e0_segment_00() {
    __asm {
        // 0x5884E4E0: mov edx, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E4E6: mov dword ptr [ecx + 0xdc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884E4F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884E4F2: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5884E4F5: mov ecx, dword ptr [ecx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884E4FB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5884E4FE: ret
        __asm _emit 0xC3
    }
}
