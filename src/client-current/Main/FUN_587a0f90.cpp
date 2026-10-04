// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A0F90 .. +0xEE bytes.
// Source symbol alias: FUN_587a0f90.
extern "C" __declspec(naked) void FUN_587a0f90() {
    __asm {
        // 0x587A0F90: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587A0F93: push ebx
        __asm _emit 0x53
        // 0x587A0F94: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A0F98: push ebp
        __asm _emit 0x55
        // 0x587A0F99: push esi
        __asm _emit 0x56
        // 0x587A0F9A: push edi
        __asm _emit 0x57
        // 0x587A0F9B: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A0F9D: mov esi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x587A0FA0: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A0FA3: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0FA7: mov cl, 1
        __asm _emit 0xB1
        __asm _emit 0x01
        // 0x587A0FA9: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A0FAD: jne 0x587a0fce
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587A0FAF: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587A0FB1: cmp edx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587A0FB4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A0FB6: setl cl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC1
        // 0x587A0FB9: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A0FBD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587A0FBF: je 0x587a0fc5
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A0FC1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587A0FC3: jmp 0x587a0fc8
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A0FC5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587A0FC8: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A0FCC: je 0x587a0fb1
        __asm _emit 0x74
        __asm _emit 0xE3
        // 0x587A0FCE: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587A0FD0: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x587A0FD2: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A0FD6: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0FDA: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587A0FDC: je 0x587a102f
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x587A0FDE: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A0FE1: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x587A0FE3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587A0FE5: je 0x587a0feb
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A0FE7: cmp edx, edx
        __asm _emit 0x3B
        __asm _emit 0xD2
        // 0x587A0FE9: je 0x587a0ff0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A0FEB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A0FF0: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A0FF4: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587A0FF6: jne 0x587a1022
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587A0FF8: push ebx
        __asm _emit 0x53
        // 0x587A0FF9: push esi
        __asm _emit 0x56
        // 0x587A0FFA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A0FFC: push ecx
        __asm _emit 0x51
        // 0x587A0FFD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A0FFF: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x58
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A1004: pop edi
        __asm _emit 0x5F
        // 0x587A1005: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A1007: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A1009: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A100D: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A1010: pop esi
        __asm _emit 0x5E
        // 0x587A1011: pop ebp
        __asm _emit 0x5D
        // 0x587A1012: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A1015: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587A1019: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587A101B: pop ebx
        __asm _emit 0x5B
        // 0x587A101C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A101F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A1022: call 0x587a0950
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1027: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A102B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A102F: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587A1032: cmp eax, dword ptr [ebx]
        __asm _emit 0x3B
        __asm _emit 0x03
        // 0x587A1034: jge 0x587a1067
        __asm _emit 0x7D
        __asm _emit 0x31
        // 0x587A1036: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A103A: push ebx
        __asm _emit 0x53
        // 0x587A103B: push esi
        __asm _emit 0x56
        // 0x587A103C: push ecx
        __asm _emit 0x51
        // 0x587A103D: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1041: push edx
        __asm _emit 0x52
        // 0x587A1042: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A1044: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x58
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A1049: pop edi
        __asm _emit 0x5F
        // 0x587A104A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A104C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587A104E: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1052: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A1055: pop esi
        __asm _emit 0x5E
        // 0x587A1056: pop ebp
        __asm _emit 0x5D
        // 0x587A1057: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A105A: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587A105E: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587A1060: pop ebx
        __asm _emit 0x5B
        // 0x587A1061: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A1064: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A1067: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A106B: pop edi
        __asm _emit 0x5F
        // 0x587A106C: pop esi
        __asm _emit 0x5E
        // 0x587A106D: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587A1070: pop ebp
        __asm _emit 0x5D
        // 0x587A1071: mov byte ptr [eax + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A1075: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587A1077: pop ebx
        __asm _emit 0x5B
        // 0x587A1078: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A107B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
