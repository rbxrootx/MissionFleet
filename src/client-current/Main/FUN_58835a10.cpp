// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58835A10 .. +0x116 bytes.
// Source symbol alias: FUN_58835a10.
extern "C" __declspec(naked) void FUN_58835a10() {
    __asm {
        // 0x58835A10: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58835A13: push ebx
        __asm _emit 0x53
        // 0x58835A14: push ebp
        __asm _emit 0x55
        // 0x58835A15: push esi
        __asm _emit 0x56
        // 0x58835A16: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58835A18: push edi
        __asm _emit 0x57
        // 0x58835A19: mov edi, dword ptr [ebp + 0x19c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A1F: cmp edi, dword ptr [ebp + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A25: jbe 0x58835a2c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835A27: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835A2C: mov esi, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A32: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835A36: jmp 0x58835a40
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58835A38: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A3F: nop
        __asm _emit 0x90
        // 0x58835A40: mov ebx, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A46: cmp dword ptr [ebp + 0x19c], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A4C: jbe 0x58835a53
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835A4E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835A53: mov eax, dword ptr [ebp + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A59: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835A5B: je 0x58835a61
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58835A5D: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58835A5F: je 0x58835a66
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58835A61: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835A66: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58835A68: je 0x58835b16
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835A6E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835A70: jne 0x58835ab3
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58835A72: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835A77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835A79: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58835A7C: jb 0x58835a83
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835A7E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835A83: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58835A87: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x58835A8A: push eax
        __asm _emit 0x50
        // 0x58835A8B: add ecx, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2D
        // 0x58835A8E: push ecx
        __asm _emit 0x51
        // 0x58835A8F: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58835A95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58835A97: je 0x58835abb
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58835A99: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58835A9B: jne 0x58835ab7
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58835A9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835AA2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835AA4: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58835AA7: jb 0x58835aae
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58835AA9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835AAE: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x58835AB1: jmp 0x58835a40
        __asm _emit 0xEB
        __asm _emit 0x8D
        // 0x58835AB3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58835AB5: jmp 0x58835a79
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x58835AB7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58835AB9: jmp 0x58835aa4
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58835ABB: mov ebx, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835AC1: lea eax, [edi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x58835AC4: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835AC8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58835ACA: je 0x58835ae9
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58835ACC: lea edx, [eax - 0x54]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xAC
        // 0x58835ACF: nop
        __asm _emit 0x90
        // 0x58835AD0: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58835AD2: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58835AD4: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x54
        // 0x58835AD7: mov ecx, 0x15
        __asm _emit 0xB9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835ADC: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x58835ADF: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58835AE1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58835AE3: jne 0x58835ad0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58835AE5: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835AE9: add dword ptr [ebp + 0x1a0], -0x54
        __asm _emit 0x83
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAC
        // 0x58835AF0: mov eax, dword ptr [ebp + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835AF6: cmp dword ptr [ebp + 0x19c], edi
        __asm _emit 0x39
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835AFC: ja 0x58835b02
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58835AFE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58835B00: jbe 0x58835b07
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58835B02: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58835B07: pop edi
        __asm _emit 0x5F
        // 0x58835B08: pop esi
        __asm _emit 0x5E
        // 0x58835B09: pop ebp
        __asm _emit 0x5D
        // 0x58835B0A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58835B0F: pop ebx
        __asm _emit 0x5B
        // 0x58835B10: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58835B13: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58835B16: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58835B1A: pop edi
        __asm _emit 0x5F
        // 0x58835B1B: pop esi
        __asm _emit 0x5E
        // 0x58835B1C: pop ebp
        __asm _emit 0x5D
        // 0x58835B1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58835B1F: pop ebx
        __asm _emit 0x5B
        // 0x58835B20: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58835B23: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
