// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 33 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2b50.

// Ghidra body range 0x588D2B50..0x588D2B71; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2b50_segment_00() {
    __asm {
        // 0x588D2B50: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D2B54: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D2B58: mov dword ptr [ecx + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B5E: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588D2B62: mov dword ptr [ecx + 0x234], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B68: mov dword ptr [ecx + 0x238], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2B6E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
