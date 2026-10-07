// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 149 bytes in 1 exact ranges.
// Source symbol alias: FUN_588867d0.

// Ghidra body range 0x588867D0..0x58886865; 149 mapped bytes.
extern "C" __declspec(naked) void FUN_588867d0_segment_00() {
    __asm {
        // 0x588867D0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588867D2: push 0x58986b18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x6B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588867D7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588867DD: push eax
        __asm _emit 0x50
        // 0x588867DE: sub esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x28
        // 0x588867E1: push esi
        __asm _emit 0x56
        // 0x588867E2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588867E7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588867E9: push eax
        __asm _emit 0x50
        // 0x588867EA: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588867EE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588867F4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588867F6: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588867FA: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588867FC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x64
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58886801: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58886804: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58886806: je 0x5888680c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58886808: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5888680A: jmp 0x5888680e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888680C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888680E: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58886810: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58886814: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58886816: mov dword ptr [esp + 0xe], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5888681A: mov dword ptr [esp + 0x12], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x5888681E: mov dword ptr [esp + 0x16], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58886822: mov dword ptr [esp + 0x1a], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58886826: mov dword ptr [esp + 0x1e], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x5888682A: mov dword ptr [esp + 0x22], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x5888682E: mov dword ptr [esp + 0x26], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x58886832: mov dword ptr [esp + 0x2a], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x58886836: mov word ptr [esp + 0x2e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2E
        // 0x5888683B: lea eax, [esp + 0xe]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5888683F: push eax
        __asm _emit 0x50
        // 0x58886840: push ecx
        __asm _emit 0x51
        // 0x58886841: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886843: mov dword ptr [esp + 0x40], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888684B: call 0x58883e10
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886850: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58886852: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58886856: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888685D: pop ecx
        __asm _emit 0x59
        // 0x5888685E: pop esi
        __asm _emit 0x5E
        // 0x5888685F: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x58886862: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
