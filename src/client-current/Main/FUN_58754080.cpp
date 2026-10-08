// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58754080.

// Ghidra body range 0x58754080..0x58754093; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58754080_segment_00() {
    __asm {
        // 0x58754080: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58754084: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58754087: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58754089: push edx
        __asm _emit 0x52
        // 0x5875408A: push eax
        __asm _emit 0x50
        // 0x5875408B: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754090: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
