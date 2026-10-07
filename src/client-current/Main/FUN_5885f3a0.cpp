// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5885F3A0 .. +0x64 bytes.
// Source symbol alias: FUN_5885f3a0.
extern "C" __declspec(naked) void FUN_5885f3a0() {
    __asm {
        // 0x5885F3A0: push esi
        __asm _emit 0x56
        // 0x5885F3A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885F3A3: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3A9: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xA7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F3AE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885F3B0: jne 0x5885f3d3
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5885F3B2: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3B7: cmp dword ptr [esi + 0xa8], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3BD: je 0x5885f402
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5885F3BF: push ecx
        __asm _emit 0x51
        // 0x5885F3C0: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3C6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F3CC: call 0x587ed5b0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xE1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885F3D1: pop esi
        __asm _emit 0x5E
        // 0x5885F3D2: ret
        __asm _emit 0xC3
        // 0x5885F3D3: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3D9: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xA7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F3DE: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3E3: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5885F3E5: jne 0x5885f402
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5885F3E7: cmp dword ptr [esi + 0xa8], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3ED: je 0x5885f402
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885F3EF: mov dword ptr [esi + 0xa8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F3F5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F3FB: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885F3FD: call 0x587ed5b0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885F402: pop esi
        __asm _emit 0x5E
        // 0x5885F403: ret
        __asm _emit 0xC3
    }
}
