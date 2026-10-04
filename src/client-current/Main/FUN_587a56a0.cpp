// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A56A0 .. +0x75 bytes.
// Source symbol alias: FUN_587a56a0.
extern "C" __declspec(naked) void FUN_587a56a0() {
    __asm {
        // 0x587A56A0: mov eax, dword ptr [ecx + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56A6: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587A56A8: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587A56AA: mov dword ptr [ecx + 0x243ec], 2
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56B4: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A56BA: add eax, 7
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x07
        // 0x587A56BD: cmp dword ptr [edx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56C3: jle 0x587a56dd
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x587A56C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A56C7: jl 0x587a56dd
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x587A56C9: cmp dword ptr [edx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56D0: je 0x587a56dd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587A56D2: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56D8: mov eax, dword ptr [edx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x587A56DB: jmp 0x587a56df
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A56DD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A56DF: mov dword ptr [ecx + 0x244fc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A56E5: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A56EA: cmp dword ptr [eax + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x587A56F1: jle 0x587a570c
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x587A56F3: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A56FA: je 0x587a570c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A56FC: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5702: mov eax, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x587A5705: mov dword ptr [ecx + 0x24500], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A570B: ret
        __asm _emit 0xC3
        // 0x587A570C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A570E: mov dword ptr [ecx + 0x24500], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A5714: ret
        __asm _emit 0xC3
    }
}
