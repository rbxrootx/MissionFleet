// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890E0B0 .. +0xB0 bytes.
// Source symbol alias: FUN_5890e0b0.
extern "C" __declspec(naked) void FUN_5890e0b0() {
    __asm {
        // 0x5890E0B0: sub esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x7C
        // 0x5890E0B3: push esi
        __asm _emit 0x56
        // 0x5890E0B4: push edi
        __asm _emit 0x57
        // 0x5890E0B5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5890E0B7: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5890E0BA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890E0BC: je 0x5890e156
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E0C2: push ebx
        __asm _emit 0x53
        // 0x5890E0C3: push 0x7c
        __asm _emit 0x6A
        __asm _emit 0x7C
        // 0x5890E0C5: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890E0C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890E0CB: push eax
        __asm _emit 0x50
        // 0x5890E0CC: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xEB
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890E0D1: mov ebx, dword ptr [esp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E0D8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5890E0DB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890E0DD: push ebx
        __asm _emit 0x53
        // 0x5890E0DE: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890E0E2: push edx
        __asm _emit 0x52
        // 0x5890E0E3: mov dword ptr [esp + 0x18], 0x7c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E0EB: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5890E0ED: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5890E0F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890E0F2: push esi
        __asm _emit 0x56
        // 0x5890E0F3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890E0F5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890E0F7: je 0x5890e13f
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5890E0F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E100: cmp eax, 0x8876021c
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0x88
        // 0x5890E105: jne 0x5890e137
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x5890E107: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5890E10A: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890E10C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890E10E: push ebx
        __asm _emit 0x53
        // 0x5890E10F: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890E113: push edx
        __asm _emit 0x52
        // 0x5890E114: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890E116: push eax
        __asm _emit 0x50
        // 0x5890E117: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5890E11A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890E11C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890E11E: jne 0x5890e100
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5890E120: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890E124: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890E128: pop ebx
        __asm _emit 0x5B
        // 0x5890E129: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5890E12C: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5890E12F: pop edi
        __asm _emit 0x5F
        // 0x5890E130: pop esi
        __asm _emit 0x5E
        // 0x5890E131: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E134: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890E137: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E13F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890E143: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890E147: pop ebx
        __asm _emit 0x5B
        // 0x5890E148: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5890E14B: mov dword ptr [edi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5890E14E: pop edi
        __asm _emit 0x5F
        // 0x5890E14F: pop esi
        __asm _emit 0x5E
        // 0x5890E150: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E153: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890E156: pop edi
        __asm _emit 0x5F
        // 0x5890E157: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890E159: pop esi
        __asm _emit 0x5E
        // 0x5890E15A: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E15D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
