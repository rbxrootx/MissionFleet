// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 275 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771f70.

// Ghidra body range 0x58771F70..0x58772083; 275 mapped bytes.
extern "C" __declspec(naked) void FUN_58771f70_segment_00() {
    __asm {
        // 0x58771F70: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x58771F73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58771F78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58771F7A: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58771F7E: push ebx
        __asm _emit 0x53
        // 0x58771F7F: mov ebx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58771F83: push ebp
        __asm _emit 0x55
        // 0x58771F84: mov ebp, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58771F88: push esi
        __asm _emit 0x56
        // 0x58771F89: mov esi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58771F8D: push edi
        __asm _emit 0x57
        // 0x58771F8E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58771F90: push edi
        __asm _emit 0x57
        // 0x58771F91: push edi
        __asm _emit 0x57
        // 0x58771F92: push edi
        __asm _emit 0x57
        // 0x58771F93: push edi
        __asm _emit 0x57
        // 0x58771F94: push esi
        __asm _emit 0x56
        // 0x58771F95: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58771F99: call dword ptr [0x5898c414]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771F9F: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58771FA3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771FA5: jne 0x58771fc1
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58771FA7: pop edi
        __asm _emit 0x5F
        // 0x58771FA8: pop esi
        __asm _emit 0x5E
        // 0x58771FA9: pop ebp
        __asm _emit 0x5D
        // 0x58771FAA: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771FAF: pop ebx
        __asm _emit 0x5B
        // 0x58771FB0: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58771FB4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58771FB6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xAC
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58771FBB: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x58771FBE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58771FC1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771FC3: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58771FC8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771FCA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771FCC: push esi
        __asm _emit 0x56
        // 0x58771FCD: push eax
        __asm _emit 0x50
        // 0x58771FCE: call dword ptr [0x5898c418]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771FD4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58771FD6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58771FD8: je 0x58771fa7
        __asm _emit 0x74
        __asm _emit 0xCD
        // 0x58771FDA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58771FDC: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58771FE0: push eax
        __asm _emit 0x50
        // 0x58771FE1: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58771FE5: push ecx
        __asm _emit 0x51
        // 0x58771FE6: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58771FE8: push esi
        __asm _emit 0x56
        // 0x58771FE9: mov dword ptr [esp + 0x24], 0x20
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771FF1: call dword ptr [0x5898c41c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771FF7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58771FF9: je 0x58771fa7
        __asm _emit 0x74
        __asm _emit 0xAC
        // 0x58771FFB: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58771FFF: push edx
        __asm _emit 0x52
        // 0x58772000: call 0x5897ce98
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772005: push eax
        __asm _emit 0x50
        // 0x58772006: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877200A: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5877200D: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF5
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58772012: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772016: push ecx
        __asm _emit 0x51
        // 0x58772017: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772019: push eax
        __asm _emit 0x50
        // 0x5877201A: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5877201C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xAC
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772021: mov ebp, dword ptr [0x5898c420]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x20
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772027: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5877202A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772030: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772032: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772034: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58772038: push edx
        __asm _emit 0x52
        // 0x58772039: push esi
        __asm _emit 0x56
        // 0x5877203A: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5877203C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58772040: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58772042: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772046: push eax
        __asm _emit 0x50
        // 0x58772047: push ecx
        __asm _emit 0x51
        // 0x58772048: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x5877204A: push edx
        __asm _emit 0x52
        // 0x5877204B: push esi
        __asm _emit 0x56
        // 0x5877204C: call dword ptr [0x5898c410]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772052: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772056: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58772058: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877205A: jne 0x58772030
        __asm _emit 0x75
        __asm _emit 0xD4
        // 0x5877205C: push esi
        __asm _emit 0x56
        // 0x5877205D: mov esi, dword ptr [0x5898c424]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772063: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58772065: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772069: push eax
        __asm _emit 0x50
        // 0x5877206A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5877206C: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58772070: pop edi
        __asm _emit 0x5F
        // 0x58772071: pop esi
        __asm _emit 0x5E
        // 0x58772072: pop ebp
        __asm _emit 0x5D
        // 0x58772073: pop ebx
        __asm _emit 0x5B
        // 0x58772074: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58772076: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58772078: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xAB
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877207D: add esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x34
        // 0x58772080: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
