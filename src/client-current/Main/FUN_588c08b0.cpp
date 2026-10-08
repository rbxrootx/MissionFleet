// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 33 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c08b0.

// Ghidra body range 0x588C08B0..0x588C08D1; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_588c08b0_segment_00() {
    __asm {
        // 0x588C08B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588C08B4: push esi
        __asm _emit 0x56
        // 0x588C08B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C08B7: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588C08BA: push eax
        __asm _emit 0x50
        // 0x588C08BB: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588C08C0: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C08C4: push ecx
        __asm _emit 0x51
        // 0x588C08C5: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588C08C8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x6A
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588C08CD: pop esi
        __asm _emit 0x5E
        // 0x588C08CE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
