// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 52 bytes in 1 exact ranges.
// Source symbol alias: FUN_588faf30.

// Ghidra body range 0x588FAF30..0x588FAF64; 52 mapped bytes.
extern "C" __declspec(naked) void FUN_588faf30_segment_00() {
    __asm {
        // 0x588FAF30: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588FAF33: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FAF37: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x588FAF3A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FAF3E: movzx edx, byte ptr [eax + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x6A
        // 0x588FAF42: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FAF46: movzx eax, byte ptr [eax + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x40
        __asm _emit 0x6B
        // 0x588FAF4A: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FAF4E: lea edx, [esp]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x24
        // 0x588FAF51: push edx
        __asm _emit 0x52
        // 0x588FAF52: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588FAF55: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FAF59: call 0x588faec0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAF5E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FAF61: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
