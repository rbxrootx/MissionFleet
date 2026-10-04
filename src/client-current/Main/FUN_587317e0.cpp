// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587317E0 .. +0x27 bytes.
// Source symbol alias: FUN_587317e0.
extern "C" __declspec(naked) void FUN_587317e0() {
    __asm {
        // 0x587317E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587317E4: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587317EA: jle 0x58731802
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587317EC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587317EE: jl 0x58731802
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x587317F0: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587317F6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587317F8: je 0x58731802
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587317FA: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x587317FD: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587317FF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58731802: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58731804: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
