// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873BEA0 .. +0x93 bytes.
// Source symbol alias: FUN_5873bea0.
extern "C" __declspec(naked) void FUN_5873bea0() {
    __asm {
        // 0x5873BEA0: push esi
        __asm _emit 0x56
        // 0x5873BEA1: push edi
        __asm _emit 0x57
        // 0x5873BEA2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873BEA4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873BEA6: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5873BEA8: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5873BEAB: jne 0x5873beed
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5873BEAD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BEB2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BEB5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BEB7: je 0x5873bedd
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5873BEB9: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BEBD: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BEC0: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BEC3: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BEC6: mov dword ptr [eax], 0x5898cb34
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x34
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BECC: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873BECF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BED2: pop edi
        __asm _emit 0x5F
        // 0x5873BED3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BED6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BED9: pop esi
        __asm _emit 0x5E
        // 0x5873BEDA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BEDD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BEDF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BEE2: pop edi
        __asm _emit 0x5F
        // 0x5873BEE3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BEE6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873BEE9: pop esi
        __asm _emit 0x5E
        // 0x5873BEEA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873BEED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BEF2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873BEF5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5873BEF7: je 0x5873bf11
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5873BEF9: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BEFD: mov dword ptr [eax], 0x5898cb34
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x34
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873BF03: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5873BF06: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5873BF09: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5873BF0C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5873BF0F: jmp 0x5873bf13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873BF11: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BF13: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BF16: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5873BF19: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BF1C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5873BF1F: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873BF22: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873BF25: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5873BF28: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5873BF2B: pop edi
        __asm _emit 0x5F
        // 0x5873BF2C: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873BF2F: pop esi
        __asm _emit 0x5E
        // 0x5873BF30: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
