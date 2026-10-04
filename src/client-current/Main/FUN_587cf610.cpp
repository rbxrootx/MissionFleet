// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CF610 .. +0x77 bytes.
// Source symbol alias: FUN_587cf610.
extern "C" __declspec(naked) void FUN_587cf610() {
    __asm {
        // 0x587CF610: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CF612: push 0x58981aab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x1A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CF617: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF61D: push eax
        __asm _emit 0x50
        // 0x587CF61E: push ecx
        __asm _emit 0x51
        // 0x587CF61F: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF624: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CF626: push eax
        __asm _emit 0x50
        // 0x587CF627: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CF62B: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF631: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587CF634: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF636: jne 0x587cf677
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x587CF638: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF63D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xD6
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CF642: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CF645: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CF649: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF651: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CF653: je 0x587cf675
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587CF655: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CF657: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CF659: push 0x5899b478
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CF65E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CF660: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x47
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587CF665: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CF669: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF670: pop ecx
        __asm _emit 0x59
        // 0x587CF671: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CF674: ret
        __asm _emit 0xC3
        // 0x587CF675: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CF677: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CF67B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF682: pop ecx
        __asm _emit 0x59
        // 0x587CF683: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CF686: ret
        __asm _emit 0xC3
    }
}
