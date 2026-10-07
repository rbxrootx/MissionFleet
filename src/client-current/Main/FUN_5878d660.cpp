// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 103 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878d660.

// Ghidra body range 0x5878D660..0x5878D6C7; 103 mapped bytes.
extern "C" __declspec(naked) void FUN_5878d660_segment_00() {
    __asm {
        // 0x5878D660: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878D664: push esi
        __asm _emit 0x56
        // 0x5878D665: push eax
        __asm _emit 0x50
        // 0x5878D666: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878D66A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878D66C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D66E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878D670: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5878D673: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878D677: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878D679: push ecx
        __asm _emit 0x51
        // 0x5878D67A: push edx
        __asm _emit 0x52
        // 0x5878D67B: push eax
        __asm _emit 0x50
        // 0x5878D67C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5878D67E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x5B
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5878D683: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878D687: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878D68D: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D694: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5878D697: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878D699: je 0x5878d6c1
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5878D69B: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5878D69E: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5878D6A1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5878D6A4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5878D6A7: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5878D6AA: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5878D6AC: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5878D6AF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878D6B2: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5878D6B5: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5878D6B8: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5878D6BB: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5878D6BE: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5878D6C1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878D6C3: pop esi
        __asm _emit 0x5E
        // 0x5878D6C4: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
