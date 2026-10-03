// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890B900 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_5890b900() {
    __asm {
        // 0x5890B900: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890B902: push 0x5898aae6
        __asm _emit 0x68
        __asm _emit 0xE6
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890B907: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B90D: push eax
        __asm _emit 0x50
        // 0x5890B90E: push ecx
        __asm _emit 0x51
        // 0x5890B90F: push ebx
        __asm _emit 0x53
        // 0x5890B910: push esi
        __asm _emit 0x56
        // 0x5890B911: push edi
        __asm _emit 0x57
        // 0x5890B912: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890B917: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890B919: push eax
        __asm _emit 0x50
        // 0x5890B91A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890B91E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B924: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890B926: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B92C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5890B92E: je 0x5890b942
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5890B930: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5890B932: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890B934: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890B936: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890B938: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B942: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x5890B944: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B949: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890B94C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890B950: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B954: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B95C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890B95E: je 0x5890b985
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5890B960: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5890B963: mov edi, dword ptr [ebx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x28
        // 0x5890B966: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5890B969: sub edi, dword ptr [ebx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x20
        // 0x5890B96C: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5890B96F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5890B971: push ecx
        __asm _emit 0x51
        // 0x5890B972: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5890B975: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5890B977: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5890B979: push ecx
        __asm _emit 0x51
        // 0x5890B97A: push ebx
        __asm _emit 0x53
        // 0x5890B97B: push esi
        __asm _emit 0x56
        // 0x5890B97C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890B97E: call 0x5896c7d0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x0E
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890B983: jmp 0x5890b987
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890B985: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B987: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B98D: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890B995: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B99B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5890B99D: je 0x5890b9b1
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5890B99F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890B9A1: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5890B9A3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890B9A5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890B9A7: mov dword ptr [esi + 0x8c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B9B1: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x5890B9B3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B9B8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890B9BB: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B9BF: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B9C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890B9C9: je 0x5890b9f4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5890B9CB: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5890B9CE: mov edi, dword ptr [ebx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x28
        // 0x5890B9D1: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5890B9D4: sub edi, dword ptr [ebx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x20
        // 0x5890B9D7: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5890B9DA: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5890B9DC: push ecx
        __asm _emit 0x51
        // 0x5890B9DD: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5890B9E0: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5890B9E2: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5890B9E4: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890B9E8: push ecx
        __asm _emit 0x51
        // 0x5890B9E9: push edx
        __asm _emit 0x52
        // 0x5890B9EA: push esi
        __asm _emit 0x56
        // 0x5890B9EB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890B9ED: call 0x5896c7d0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x0D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890B9F2: jmp 0x5890b9f6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890B9F4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890B9F6: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B9FC: mov esi, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BA02: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BA0A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890BA0C: je 0x5890ba1e
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5890BA0E: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5890BA11: sub ecx, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5890BA14: push ecx
        __asm _emit 0x51
        // 0x5890BA15: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BA17: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890BA19: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BA1E: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890BA22: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BA29: pop ecx
        __asm _emit 0x59
        // 0x5890BA2A: pop edi
        __asm _emit 0x5F
        // 0x5890BA2B: pop esi
        __asm _emit 0x5E
        // 0x5890BA2C: pop ebx
        __asm _emit 0x5B
        // 0x5890BA2D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890BA30: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
