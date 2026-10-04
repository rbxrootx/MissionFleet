// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754D60 .. +0x113 bytes.
// Source symbol alias: FUN_58754d60.
extern "C" __declspec(naked) void FUN_58754d60() {
    __asm {
        // 0x58754D60: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58754D63: push esi
        __asm _emit 0x56
        // 0x58754D64: push edi
        __asm _emit 0x57
        // 0x58754D65: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58754D69: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58754D6C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58754D6E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58754D70: push eax
        __asm _emit 0x50
        // 0x58754D71: push ecx
        __asm _emit 0x51
        // 0x58754D72: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58754D74: call 0x58753cc0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754D79: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58754D7B: jne 0x58754d8e
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58754D7D: push edi
        __asm _emit 0x57
        // 0x58754D7E: lea ecx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x58754D81: call 0x58754ad0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754D86: pop edi
        __asm _emit 0x5F
        // 0x58754D87: pop esi
        __asm _emit 0x5E
        // 0x58754D88: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58754D8B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58754D8E: push ebx
        __asm _emit 0x53
        // 0x58754D8F: mov ebx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x58754D92: cmp ebx, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x2C
        // 0x58754D95: jbe 0x58754d9c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58754D97: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754D9C: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58754D9F: push ebp
        __asm _emit 0x55
        // 0x58754DA0: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x58754DA2: mov ebx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x2C
        // 0x58754DA5: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58754DA9: cmp dword ptr [esi + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x58754DAC: jbe 0x58754db3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58754DAE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754DB3: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58754DB6: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754DBA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754DC0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754DC2: je 0x58754dca
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58754DC4: cmp edi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754DC8: je 0x58754dcf
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58754DCA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754DCF: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58754DD1: je 0x58754e69
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754DD7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754DD9: jne 0x58754e59
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x58754DDB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754DE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58754DE2: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58754DE5: jb 0x58754dec
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58754DE7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754DEC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754DEE: jne 0x58754e5d
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x58754DF0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754DF5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58754DF7: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58754DFA: jb 0x58754e01
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58754DFC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754E01: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58754E04: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58754E08: lea ebx, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x58754E0B: cmp eax, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58754E0E: jne 0x58754e35
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x58754E10: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754E12: jne 0x58754e61
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x58754E14: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754E19: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58754E1B: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58754E1E: jb 0x58754e25
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58754E20: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754E25: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754E2A: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58754E2D: push esi
        __asm _emit 0x56
        // 0x58754E2E: push ebx
        __asm _emit 0x53
        // 0x58754E2F: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58754E35: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754E37: jne 0x58754e65
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58754E39: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754E3E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58754E40: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58754E43: jb 0x58754e4a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58754E45: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754E4A: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58754E4E: add ebp, 0x808
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754E54: jmp 0x58754dc0
        __asm _emit 0xE9
        __asm _emit 0x67
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754E59: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58754E5B: jmp 0x58754de2
        __asm _emit 0xEB
        __asm _emit 0x85
        // 0x58754E5D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58754E5F: jmp 0x58754df7
        __asm _emit 0xEB
        __asm _emit 0x96
        // 0x58754E61: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58754E63: jmp 0x58754e1b
        __asm _emit 0xEB
        __asm _emit 0xB6
        // 0x58754E65: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58754E67: jmp 0x58754e40
        __asm _emit 0xEB
        __asm _emit 0xD7
        // 0x58754E69: pop ebp
        __asm _emit 0x5D
        // 0x58754E6A: pop ebx
        __asm _emit 0x5B
        // 0x58754E6B: pop edi
        __asm _emit 0x5F
        // 0x58754E6C: pop esi
        __asm _emit 0x5E
        // 0x58754E6D: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58754E70: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
