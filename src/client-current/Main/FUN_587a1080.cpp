// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 215 bytes in 2 exact ranges.
// Source symbol alias: FUN_587a1080.

// Ghidra body range 0x587A1080..0x587A1109; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_587a1080_segment_00() {
    __asm {
        // 0x587A1080: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A1083: push ebx
        __asm _emit 0x53
        // 0x587A1084: push esi
        __asm _emit 0x56
        // 0x587A1085: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A1087: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A108A: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x587A108C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A108E: push edi
        __asm _emit 0x57
        // 0x587A108F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1093: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A1095: je 0x587a109b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A1097: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A1099: je 0x587a10a4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A109B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xBB
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A10A0: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A10A4: cmp dword ptr [esp + 0x20], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A10A8: jne 0x587a1110
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x587A10AA: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A10AE: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x587A10B1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A10B3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A10B5: je 0x587a10bb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A10B7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A10B9: je 0x587a10c4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A10BB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xBB
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A10C0: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A10C4: cmp dword ptr [esp + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A10C8: jne 0x587a1110
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587A10CA: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A10CD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A10D0: push edx
        __asm _emit 0x52
        // 0x587A10D1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A10D3: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A10D8: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A10DB: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A10DE: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A10E1: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A10E8: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587A10EA: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A10ED: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A10F0: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A10F3: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A10F5: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587A10F7: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A10FB: pop edi
        __asm _emit 0x5F
        // 0x587A10FC: pop esi
        __asm _emit 0x5E
        // 0x587A10FD: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A1100: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587A1102: pop ebx
        __asm _emit 0x5B
        // 0x587A1103: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A1106: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587A1110..0x587A115E; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_587a1080_segment_01() {
    __asm {
        // 0x587A1110: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A1112: je 0x587a111a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587A1114: cmp edi, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587A1118: je 0x587a1123
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587A111A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xBB
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A111F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1123: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1127: cmp ebx, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A112B: je 0x587a114a
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587A112D: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1131: call 0x587a09e0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1136: push ebx
        __asm _emit 0x53
        // 0x587A1137: push edi
        __asm _emit 0x57
        // 0x587A1138: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A113C: push eax
        __asm _emit 0x50
        // 0x587A113D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A113F: call 0x587a0cc0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1144: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1148: jmp 0x587a1110
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x587A114A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A114C: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A1150: pop edi
        __asm _emit 0x5F
        // 0x587A1151: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x587A1153: pop esi
        __asm _emit 0x5E
        // 0x587A1154: mov dword ptr [eax + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587A1157: pop ebx
        __asm _emit 0x5B
        // 0x587A1158: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A115B: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
