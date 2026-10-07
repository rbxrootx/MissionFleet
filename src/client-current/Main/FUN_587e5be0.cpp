// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 33 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e5be0.

// Ghidra body range 0x587E5BE0..0x587E5C01; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_587e5be0_segment_00() {
    __asm {
        // 0x587E5BE0: mov eax, dword ptr [ecx + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5BE6: xor eax, 0x100
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BEB: or eax, 0x200
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BF0: mov dword ptr [ecx + 0x20d5c], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BFA: mov dword ptr [ecx + 0x10474], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5C00: ret
        __asm _emit 0xC3
    }
}
