// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7350 .. +0x72 bytes.
// Source symbol alias: FUN_587b7350.
extern "C" __declspec(naked) void FUN_587b7350() {
    __asm {
        // 0x587B7350: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B7352: push 0x58981098
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x10
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7357: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B735D: push eax
        __asm _emit 0x50
        // 0x587B735E: push ecx
        __asm _emit 0x51
        // 0x587B735F: push esi
        __asm _emit 0x56
        // 0x587B7360: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7365: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B7367: push eax
        __asm _emit 0x50
        // 0x587B7368: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B736C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7372: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B7374: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B7378: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B737C: push eax
        __asm _emit 0x50
        // 0x587B737D: call 0x58907ac0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x07
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B7382: fld dword ptr [0x58995b14]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x5B
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7388: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587B738B: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B738F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7391: fld dword ptr [0x5898d778]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7397: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B739F: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x587B73A2: mov dword ptr [esi], 0x5899a134
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B73A8: call 0x58907950
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x05
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B73AD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B73AF: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B73B3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B73BA: pop ecx
        __asm _emit 0x59
        // 0x587B73BB: pop esi
        __asm _emit 0x5E
        // 0x587B73BC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587B73BF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
