// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753ea0.

// Ghidra body range 0x58753EA0..0x58753EB3; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58753ea0_segment_00() {
    __asm {
        // 0x58753EA0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753EA4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58753EA7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58753EA9: push edx
        __asm _emit 0x52
        // 0x58753EAA: push eax
        __asm _emit 0x50
        // 0x58753EAB: call 0x58753a50
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753EB0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
