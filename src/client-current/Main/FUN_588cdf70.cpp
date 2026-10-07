// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 47 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cdf70.

// Ghidra body range 0x588CDF70..0x588CDF9F; 47 mapped bytes.
extern "C" __declspec(naked) void FUN_588cdf70_segment_00() {
    __asm {
        // 0x588CDF70: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CDF74: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CDF78: push esi
        __asm _emit 0x56
        // 0x588CDF79: push eax
        __asm _emit 0x50
        // 0x588CDF7A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CDF7E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CDF80: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CDF84: push ecx
        __asm _emit 0x51
        // 0x588CDF85: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CDF89: push edx
        __asm _emit 0x52
        // 0x588CDF8A: push eax
        __asm _emit 0x50
        // 0x588CDF8B: push ecx
        __asm _emit 0x51
        // 0x588CDF8C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CDF8E: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CDF93: mov dword ptr [esi], 0x589a0da8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA8
        __asm _emit 0x0D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CDF99: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CDF9B: pop esi
        __asm _emit 0x5E
        // 0x588CDF9C: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
