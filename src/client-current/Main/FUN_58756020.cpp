// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58756020 .. +0xDD bytes.
// Source symbol alias: FUN_58756020.
extern "C" __declspec(naked) void FUN_58756020() {
    __asm {
        // 0x58756020: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58756022: push 0x5897e8ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58756027: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875602D: push eax
        __asm _emit 0x50
        // 0x5875602E: push esi
        __asm _emit 0x56
        // 0x5875602F: push edi
        __asm _emit 0x57
        // 0x58756030: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58756035: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58756037: push eax
        __asm _emit 0x50
        // 0x58756038: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875603C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756042: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58756044: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58756048: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875604A: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5875604C: jne 0x5875606a
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5875604E: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58756051: jne 0x5875606a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58756053: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58756056: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58756058: je 0x58756065
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5875605A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5875605C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875605E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58756060: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58756062: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58756065: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58756068: jmp 0x587560dc
        __asm _emit 0xEB
        __asm _emit 0x72
        // 0x5875606A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875606C: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5875606F: je 0x587560e9
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58756071: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58756074: cmp dword ptr [ecx], edi
        __asm _emit 0x39
        __asm _emit 0x39
        // 0x58756076: je 0x587560e9
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x58756078: inc eax
        __asm _emit 0x40
        // 0x58756079: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5875607C: cmp eax, dword ptr [esi + 8]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5875607F: jne 0x58756074
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x58756081: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58756084: jne 0x5875608d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58756086: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58756088: call 0x58755cf0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875608D: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58756090: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58756092: je 0x587560a0
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58756094: push eax
        __asm _emit 0x50
        // 0x58756095: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x6B
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875609A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875609D: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587560A0: cmp dword ptr [esi + 4], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587560A3: jne 0x587560dc
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x587560A5: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587560AA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x6B
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587560AF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587560B2: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587560B6: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587560BA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587560BC: je 0x587560cf
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587560BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587560C0: push edi
        __asm _emit 0x57
        // 0x587560C1: push 0x5898d6a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587560C6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587560C8: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xDC
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587560CD: jmp 0x587560d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587560CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587560D1: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587560D9: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587560DC: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587560E2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587560E4: mov edx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x30
        // 0x587560E7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587560E9: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587560ED: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587560F4: pop ecx
        __asm _emit 0x59
        // 0x587560F5: pop edi
        __asm _emit 0x5F
        // 0x587560F6: pop esi
        __asm _emit 0x5E
        // 0x587560F7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587560FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
