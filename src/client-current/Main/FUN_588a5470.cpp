// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A5470 .. +0xE8 bytes.
// Source symbol alias: FUN_588a5470.
extern "C" __declspec(naked) void FUN_588a5470() {
    __asm {
        // 0x588A5470: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5476: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588A547B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588A547D: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5484: mov eax, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A548B: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588A548E: push esi
        __asm _emit 0x56
        // 0x588A548F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A5491: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5498: je 0x588a5500
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588A549A: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588A549D: je 0x588a54d4
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588A549F: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588A54A2: jne 0x588a5535
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A54A8: push ecx
        __asm _emit 0x51
        // 0x588A54A9: push 0x589a06bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A54AE: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A54B4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A54B7: push eax
        __asm _emit 0x50
        // 0x588A54B8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A54BC: push eax
        __asm _emit 0x50
        // 0x588A54BD: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A54C3: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588A54C6: push 0xff5454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588A54CB: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A54CD: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A54D1: push ecx
        __asm _emit 0x51
        // 0x588A54D2: jmp 0x588a552a
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x588A54D4: push ecx
        __asm _emit 0x51
        // 0x588A54D5: push 0x5899fee4
        __asm _emit 0x68
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588A54DA: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A54E0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A54E3: push eax
        __asm _emit 0x50
        // 0x588A54E4: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A54E8: push edx
        __asm _emit 0x52
        // 0x588A54E9: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A54EF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588A54F2: push 0xff5454
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588A54F7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A54F9: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A54FD: push eax
        __asm _emit 0x50
        // 0x588A54FE: jmp 0x588a552a
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x588A5500: push ecx
        __asm _emit 0x51
        // 0x588A5501: push 0x5899fe34
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xFE
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588A5506: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A550C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A550F: push eax
        __asm _emit 0x50
        // 0x588A5510: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A5514: push ecx
        __asm _emit 0x51
        // 0x588A5515: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A551B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588A551E: push 0x40ff40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x00
        // 0x588A5523: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A5525: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588A5529: push edx
        __asm _emit 0x52
        // 0x588A552A: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5530: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A5535: mov ecx, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A553B: call 0x58908870
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A5540: mov ecx, dword ptr [esp + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5547: pop esi
        __asm _emit 0x5E
        // 0x588A5548: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588A554A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A554F: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5555: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
