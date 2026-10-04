// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A09E0 .. +0x63 bytes.
// Source symbol alias: FUN_587a09e0.
extern "C" __declspec(naked) void FUN_587a09e0() {
    __asm {
        // 0x587A09E0: push esi
        __asm _emit 0x56
        // 0x587A09E1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A09E3: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587A09E6: jne 0x587a09ed
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A09E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A09ED: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A09F0: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A09F4: je 0x587a09fc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A09F6: pop esi
        __asm _emit 0x5E
        // 0x587A09F7: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0xC2
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A09FC: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A09FF: cmp byte ptr [ecx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A03: jne 0x587a0a1f
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587A0A05: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A0A07: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A0B: jne 0x587a0a1a
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587A0A0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A0A10: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A0A12: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587A0A14: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A18: je 0x587a0a10
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587A0A1A: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A0A1D: pop esi
        __asm _emit 0x5E
        // 0x587A0A1E: ret
        __asm _emit 0xC3
        // 0x587A0A1F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A0A22: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A26: jne 0x587a0a3e
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587A0A28: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A0A2B: cmp ecx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587A0A2E: jne 0x587a0a3e
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A0A30: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A0A33: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587A0A35: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A0A38: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0A3C: je 0x587a0a28
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x587A0A3E: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A0A41: pop esi
        __asm _emit 0x5E
        // 0x587A0A42: ret
        __asm _emit 0xC3
    }
}
