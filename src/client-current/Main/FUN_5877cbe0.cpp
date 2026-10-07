// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 75 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877cbe0.

// Ghidra body range 0x5877CBE0..0x5877CC2B; 75 mapped bytes.
extern "C" __declspec(naked) void FUN_5877cbe0_segment_00() {
    __asm {
        // 0x5877CBE0: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877CBE5: je 0x5877cc19
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5877CBE7: mov eax, dword ptr [ecx + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CBED: mov dword ptr [ecx + 0x258], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CBF7: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CBFC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877CC00: mov eax, dword ptr [ecx + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CC06: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877CC0A: mov ecx, dword ptr [ecx + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CC10: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877CC12: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5877CC16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877CC19: mov dword ptr [ecx + 0x258], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877CC23: call 0x5877b1f0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877CC28: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
