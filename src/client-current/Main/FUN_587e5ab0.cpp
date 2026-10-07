// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 13 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e5ab0.

// Ghidra body range 0x587E5AB0..0x587E5ABD; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587e5ab0_segment_00() {
    __asm {
        // 0x587E5AB0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5AB4: mov dword ptr [ecx + 0x390], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5ABA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
