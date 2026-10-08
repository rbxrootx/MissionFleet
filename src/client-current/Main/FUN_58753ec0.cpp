// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753ec0.

// Ghidra body range 0x58753EC0..0x58753ED3; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_58753ec0_segment_00() {
    __asm {
        // 0x58753EC0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753EC4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58753EC7: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58753EC9: push edx
        __asm _emit 0x52
        // 0x58753ECA: push eax
        __asm _emit 0x50
        // 0x58753ECB: call 0x58753b20
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58753ED0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
