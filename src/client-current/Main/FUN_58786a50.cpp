// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786A50 .. +0xEE bytes.
// Source symbol alias: FUN_58786a50.
extern "C" __declspec(naked) void FUN_58786a50() {
    __asm {
        // 0x58786A50: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58786A53: push ebx
        __asm _emit 0x53
        // 0x58786A54: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58786A58: push ebp
        __asm _emit 0x55
        // 0x58786A59: push esi
        __asm _emit 0x56
        // 0x58786A5A: push edi
        __asm _emit 0x57
        // 0x58786A5B: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58786A5D: mov esi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x58786A60: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58786A63: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58786A67: mov cl, 1
        __asm _emit 0xB1
        __asm _emit 0x01
        // 0x58786A69: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786A6D: jne 0x58786a8e
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58786A6F: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58786A71: cmp edx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58786A74: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58786A76: setb cl
        __asm _emit 0x0F
        __asm _emit 0x92
        __asm _emit 0xC1
        // 0x58786A79: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786A7D: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58786A7F: je 0x58786a85
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786A81: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58786A83: jmp 0x58786a88
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58786A85: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58786A88: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58786A8C: je 0x58786a71
        __asm _emit 0x74
        __asm _emit 0xE3
        // 0x58786A8E: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58786A90: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58786A92: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58786A96: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786A9A: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58786A9C: je 0x58786aef
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x58786A9E: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58786AA1: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x58786AA3: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58786AA5: je 0x58786aab
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786AA7: cmp edx, edx
        __asm _emit 0x3B
        __asm _emit 0xD2
        // 0x58786AA9: je 0x58786ab0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58786AAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x61
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786AB0: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786AB4: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x58786AB6: jne 0x58786ae2
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x58786AB8: push ebx
        __asm _emit 0x53
        // 0x58786AB9: push esi
        __asm _emit 0x56
        // 0x58786ABA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58786ABC: push ecx
        __asm _emit 0x51
        // 0x58786ABD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58786ABF: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786AC4: pop edi
        __asm _emit 0x5F
        // 0x58786AC5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58786AC7: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58786AC9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58786ACD: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58786AD0: pop esi
        __asm _emit 0x5E
        // 0x58786AD1: pop ebp
        __asm _emit 0x5D
        // 0x58786AD2: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58786AD5: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58786AD9: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58786ADB: pop ebx
        __asm _emit 0x5B
        // 0x58786ADC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786ADF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58786AE2: call 0x587a0950
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x9E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58786AE7: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58786AEB: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786AEF: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58786AF2: cmp eax, dword ptr [ebx]
        __asm _emit 0x3B
        __asm _emit 0x03
        // 0x58786AF4: jae 0x58786b27
        __asm _emit 0x73
        __asm _emit 0x31
        // 0x58786AF6: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786AFA: push ebx
        __asm _emit 0x53
        // 0x58786AFB: push esi
        __asm _emit 0x56
        // 0x58786AFC: push ecx
        __asm _emit 0x51
        // 0x58786AFD: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58786B01: push edx
        __asm _emit 0x52
        // 0x58786B02: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58786B04: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786B09: pop edi
        __asm _emit 0x5F
        // 0x58786B0A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58786B0C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58786B0E: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58786B12: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58786B15: pop esi
        __asm _emit 0x5E
        // 0x58786B16: pop ebp
        __asm _emit 0x5D
        // 0x58786B17: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58786B1A: mov byte ptr [eax + 8], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x58786B1E: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58786B20: pop ebx
        __asm _emit 0x5B
        // 0x58786B21: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786B24: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58786B27: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58786B2B: pop edi
        __asm _emit 0x5F
        // 0x58786B2C: pop esi
        __asm _emit 0x5E
        // 0x58786B2D: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58786B30: pop ebp
        __asm _emit 0x5D
        // 0x58786B31: mov byte ptr [eax + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58786B35: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58786B37: pop ebx
        __asm _emit 0x5B
        // 0x58786B38: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58786B3B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
