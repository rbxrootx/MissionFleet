// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 99 bytes in 1 exact ranges.
// Source symbol alias: FUN_587480a0.

// Ghidra body range 0x587480A0..0x58748103; 99 mapped bytes.
extern "C" __declspec(naked) void FUN_587480a0_segment_00() {
    __asm {
        // 0x587480A0: push esi
        __asm _emit 0x56
        // 0x587480A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587480A3: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587480A6: jne 0x587480ad
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587480A8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x4B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587480AD: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587480B0: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480B4: je 0x587480bc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587480B6: pop esi
        __asm _emit 0x5E
        // 0x587480B7: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0x4B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587480BC: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587480BF: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480C3: jne 0x587480df
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587480C5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587480C7: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480CB: jne 0x587480da
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587480CD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587480D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587480D2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587480D4: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480D8: je 0x587480d0
        __asm _emit 0x74
        __asm _emit 0xF6
        // 0x587480DA: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587480DD: pop esi
        __asm _emit 0x5E
        // 0x587480DE: ret
        __asm _emit 0xC3
        // 0x587480DF: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587480E2: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480E6: jne 0x587480fe
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587480E8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587480EB: cmp ecx, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587480EE: jne 0x587480fe
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587480F0: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587480F3: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587480F5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587480F8: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587480FC: je 0x587480e8
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x587480FE: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58748101: pop esi
        __asm _emit 0x5E
        // 0x58748102: ret
        __asm _emit 0xC3
    }
}
