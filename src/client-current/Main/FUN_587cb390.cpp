// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb390.

// Ghidra body range 0x587CB390..0x587CB3AE; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb390_segment_00() {
    __asm {
        // 0x587CB390: cmp dword ptr [ecx + 0x214], 3
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587CB397: je 0x587cb3ab
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587CB399: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CB39D: cmp dword ptr [ecx + 0x8c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3A3: jge 0x587cb3ab
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587CB3A5: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB3AB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
