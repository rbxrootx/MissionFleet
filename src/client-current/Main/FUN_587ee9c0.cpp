// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 62 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ee9c0.

// Ghidra body range 0x587EE9C0..0x587EE9FE; 62 mapped bytes.
extern "C" __declspec(naked) void FUN_587ee9c0_segment_00() {
    __asm {
        // 0x587EE9C0: push esi
        __asm _emit 0x56
        // 0x587EE9C1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587EE9C5: lea eax, [ecx + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE9CB: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE9D0: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587EE9D2: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587EE9D8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587EE9DA: je 0x587ee9f2
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587EE9DC: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587EE9DF: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587EE9E1: je 0x587ee9f2
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587EE9E3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587EE9E5: inc eax
        __asm _emit 0x40
        // 0x587EE9E6: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587EE9E9: jne 0x587ee9d2
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587EE9EB: dec eax
        __asm _emit 0x48
        // 0x587EE9EC: mov byte ptr [eax], dl
        __asm _emit 0x88
        __asm _emit 0x10
        // 0x587EE9EE: pop esi
        __asm _emit 0x5E
        // 0x587EE9EF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EE9F2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EE9F4: jne 0x587ee9f7
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587EE9F6: dec eax
        __asm _emit 0x48
        // 0x587EE9F7: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EE9FA: pop esi
        __asm _emit 0x5E
        // 0x587EE9FB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
