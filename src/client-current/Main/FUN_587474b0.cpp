// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 55 bytes in 1 exact ranges.
// Source symbol alias: FUN_587474b0.

// Ghidra body range 0x587474B0..0x587474E7; 55 mapped bytes.
extern "C" __declspec(naked) void FUN_587474b0_segment_00() {
    __asm {
        // 0x587474B0: push esi
        __asm _emit 0x56
        // 0x587474B1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587474B3: mov ecx, dword ptr [esi + 0x810]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587474B9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587474BB: je 0x587474e5
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587474BD: cmp dword ptr [esi + 0x80c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587474C4: je 0x587474e5
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x587474C6: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xF2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587474CB: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587474D0: jne 0x587474e5
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587474D2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587474D4: call 0x587471b0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587474D9: lea ecx, [esi + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587474DF: pop esi
        __asm _emit 0x5E
        // 0x587474E0: jmp 0x58744fb0
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587474E5: pop esi
        __asm _emit 0x5E
        // 0x587474E6: ret
        __asm _emit 0xC3
    }
}
