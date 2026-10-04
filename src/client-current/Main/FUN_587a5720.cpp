// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5720 .. +0x67 bytes.
// Source symbol alias: FUN_587a5720.
extern "C" __declspec(naked) void FUN_587a5720() {
    __asm {
        // 0x587A5720: mov dword ptr [ecx + 0x243ec], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A572A: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A572F: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5734: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A573A: jle 0x587a5750
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587A573C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5743: je 0x587a5750
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587A5745: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A574B: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587A574E: jmp 0x587a5752
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A5750: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5752: mov dword ptr [ecx + 0x244fc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A5758: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A575D: cmp dword ptr [eax + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5763: jle 0x587a577e
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x587A5765: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A576C: je 0x587a577e
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A576E: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5774: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x587A5777: mov dword ptr [ecx + 0x24500], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A577D: ret
        __asm _emit 0xC3
        // 0x587A577E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A5780: mov dword ptr [ecx + 0x24500], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A5786: ret
        __asm _emit 0xC3
    }
}
