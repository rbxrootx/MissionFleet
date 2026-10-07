// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 23 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e5bc0.

// Ghidra body range 0x587E5BC0..0x587E5BD7; 23 mapped bytes.
extern "C" __declspec(naked) void FUN_587e5bc0_segment_00() {
    __asm {
        // 0x587E5BC0: mov eax, dword ptr [ecx + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5BC6: and eax, 0xfffff4ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E5BCB: or eax, 0x420
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BD0: mov dword ptr [ecx + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5BD6: ret
        __asm _emit 0xC3
    }
}
