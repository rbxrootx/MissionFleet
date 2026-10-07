// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 60 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878a0e0.

// Ghidra body range 0x5878A0E0..0x5878A11C; 60 mapped bytes.
extern "C" __declspec(naked) void FUN_5878a0e0_segment_00() {
    __asm {
        // 0x5878A0E0: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x5878A0E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A0E5: jne 0x5878a0fd
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x5878A0E7: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878A0EB: inc dword ptr [ecx + 8]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5878A0EE: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x5878A0F1: mov dword ptr [ecx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5878A0F4: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5878A0F7: mov dword ptr [ecx + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x5878A0FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5878A0FD: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878A101: mov dword ptr [eax + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A104: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x5878A107: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A10A: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x5878A10D: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x5878A110: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A113: inc dword ptr [ecx + 8]
        __asm _emit 0xFF
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5878A116: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5878A119: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
