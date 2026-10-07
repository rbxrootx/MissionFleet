// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cf530.

// Ghidra body range 0x587CF530..0x587CF575; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_587cf530_segment_00() {
    __asm {
        // 0x587CF530: push esi
        __asm _emit 0x56
        // 0x587CF531: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CF533: cmp dword ptr [esi + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF53A: je 0x587cf573
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587CF53C: movzx eax, word ptr [esi + 0xa04]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF543: movzx ecx, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF54A: push eax
        __asm _emit 0x50
        // 0x587CF54B: push ecx
        __asm _emit 0x51
        // 0x587CF54C: mov ecx, dword ptr [esi + 0x778]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF552: call 0x58789710
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xA1
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587CF557: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF559: je 0x587cf573
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587CF55B: mov edx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF561: push edx
        __asm _emit 0x52
        // 0x587CF562: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CF564: call 0x5874b0e0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xBB
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587CF569: mov dword ptr [esi + 0x114], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF573: pop esi
        __asm _emit 0x5E
        // 0x587CF574: ret
        __asm _emit 0xC3
    }
}
