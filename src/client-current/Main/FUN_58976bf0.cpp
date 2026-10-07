// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58976bf0.

// Ghidra body range 0x58976BF0..0x58976C0C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58976bf0_segment_00() {
    __asm {
        // 0x58976BF0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58976BF4: push 0x112
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976BF9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58976BFB: push eax
        __asm _emit 0x50
        // 0x58976BFC: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58976BFF: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x58976C01: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58976C04: mov byte ptr [eax + 0x111], 0
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58976C0B: ret
        __asm _emit 0xC3
    }
}
