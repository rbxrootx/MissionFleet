// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ce2f0.

// Ghidra body range 0x587CE2F0..0x587CE30E; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587ce2f0_segment_00() {
    __asm {
        // 0x587CE2F0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587CE2F2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587CE2F4: mov dword ptr [eax], 0x5899b448
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CE2FA: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587CE2FD: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587CE300: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587CE303: mov dword ptr [eax + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x587CE306: mov dword ptr [eax + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE30D: ret
        __asm _emit 0xC3
    }
}
