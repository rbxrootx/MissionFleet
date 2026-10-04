// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E7E00 .. +0x119 bytes.
// Source symbol alias: FUN_587e7e00.
extern "C" __declspec(naked) void FUN_587e7e00() {
    __asm {
        // 0x587E7E00: push ebx
        __asm _emit 0x53
        // 0x587E7E01: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587E7E03: push esi
        __asm _emit 0x56
        // 0x587E7E04: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E7E06: mov dword ptr [0x58a24900], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7E0C: cmp byte ptr [esi + 0x20d64], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7E12: jne 0x587e7e61
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x587E7E14: mov dword ptr [esi + 0x10a18], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7E1A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7E1F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587E7E22: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E7E24: je 0x587e7e61
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x587E7E26: jmp 0x587e7e30
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587E7E28: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E2F: nop
        __asm _emit 0x90
        // 0x587E7E30: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7E36: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587E7E39: mov bl, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x98
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E3F: cmp bl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x99
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E45: je 0x587e7e5a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587E7E47: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E4D: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x587E7E4F: je 0x587e7e5a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E7E51: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x60
        // 0x587E7E54: add dword ptr [esi + 0x10a18], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7E5A: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x587E7E5D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587E7E5F: jne 0x587e7e30
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x587E7E61: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E67: mov dword ptr [esi + 0x128], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E6D: mov dword ptr [esi + 0x12c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E73: mov dword ptr [esi + 0x130], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E79: mov dword ptr [esi + 0x134], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E7F: mov dword ptr [esi + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E85: mov dword ptr [esi + 0x13c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E8B: mov dword ptr [esi + 0x140], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E91: mov dword ptr [esi + 0x144], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E97: mov dword ptr [esi + 0x148], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7E9D: mov dword ptr [esi + 0x14c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EA3: mov dword ptr [esi + 0x150], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EA9: mov dword ptr [esi + 0x154], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EAF: mov dword ptr [esi + 0x158], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EB5: mov dword ptr [esi + 0x15c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EBB: mov dword ptr [esi + 0x160], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EC1: mov dword ptr [esi + 0x164], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7EC7: mov dword ptr [esi + 0x168], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7ECD: mov dword ptr [esi + 0x16c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7ED3: mov dword ptr [esi + 0x170], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7ED9: cmp dword ptr [esi + 0x218e4], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7EDF: jne 0x587e7f16
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x587E7EE1: push edi
        __asm _emit 0x57
        // 0x587E7EE2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E7EE4: cmp dword ptr [esi + 0x104d0], edx
        __asm _emit 0x39
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7EEA: jle 0x587e7f0b
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x587E7EEC: lea ebx, [esi + 0x218f0]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7EF2: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x587E7EF5: jge 0x587e7f0b
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x587E7EF7: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x587E7EF9: push edi
        __asm _emit 0x57
        // 0x587E7EFA: call 0x588b3720
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xB8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E7EFF: inc edi
        __asm _emit 0x47
        // 0x587E7F00: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587E7F03: cmp edi, dword ptr [esi + 0x104d0]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7F09: jl 0x587e7ef2
        __asm _emit 0x7C
        __asm _emit 0xE7
        // 0x587E7F0B: mov dword ptr [esi + 0x218e4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7F15: pop edi
        __asm _emit 0x5F
        // 0x587E7F16: pop esi
        __asm _emit 0x5E
        // 0x587E7F17: pop ebx
        __asm _emit 0x5B
        // 0x587E7F18: ret
        __asm _emit 0xC3
    }
}
