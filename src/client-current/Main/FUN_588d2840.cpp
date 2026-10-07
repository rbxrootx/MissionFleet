// Instruction stream reconstructed from the pinned mapped Main.dll and Ghidra body evidence.
// Mapped method size: 96 bytes in 1 exact range.
// Source symbol alias: FUN_588d2840.

// Mapped method range 0x588D2840..0x588D28A0; 96 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2840_segment_00() {
    __asm {
        // 0x588D2840: push esi
        __asm _emit 0x56
        // 0x588D2841: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2843: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2849: mov dword ptr [esi], 0x589a0f5c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D284F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D2851: je 0x588d2866
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588D2853: push eax
        __asm _emit 0x50
        // 0x588D2854: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2859: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D285C: mov dword ptr [esi + 0x84], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2866: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588D2869: mov dword ptr [esi], 0x5898c94c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D286F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D2871: je 0x588d2883
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588D2873: push eax
        __asm _emit 0x50
        // 0x588D2874: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xA3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2879: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D287C: mov dword ptr [esi + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2883: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D2885: call 0x58903450
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x0B
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D288A: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588D288F: je 0x588d289a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588D2891: push esi
        __asm _emit 0x56
        // 0x588D2892: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xA3
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2897: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D289A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D289C: pop esi
        __asm _emit 0x5E
        // 0x588D289D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
