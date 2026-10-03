// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A9DA0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_588a9da0() {
    __asm {
        // 0x588A9DA0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A9DA2: push 0x58987ae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A9DA7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DAD: push eax
        __asm _emit 0x50
        // 0x588A9DAE: push ecx
        __asm _emit 0x51
        // 0x588A9DAF: push ebx
        __asm _emit 0x53
        // 0x588A9DB0: push ebp
        __asm _emit 0x55
        // 0x588A9DB1: push esi
        __asm _emit 0x56
        // 0x588A9DB2: push edi
        __asm _emit 0x57
        // 0x588A9DB3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588A9DB8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588A9DBA: push eax
        __asm _emit 0x50
        // 0x588A9DBB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A9DBF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DC5: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588A9DC7: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A9DCB: mov dword ptr [edi], 0x589a0750
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A9DD1: mov ecx, dword ptr [edi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DD7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A9DD9: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A9DDD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9DDF: je 0x588a9def
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9DE1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9DE3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9DE5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9DE7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9DE9: mov dword ptr [edi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DEF: lea esi, [edi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DF5: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9DFA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E00: mov ecx, dword ptr [esi - 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF8
        // 0x588A9E03: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9E05: je 0x588a9e12
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A9E07: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9E09: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9E0B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9E0D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9E0F: mov dword ptr [esi - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0xF8
        // 0x588A9E12: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588A9E14: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9E16: je 0x588a9e22
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588A9E18: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9E1A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9E1C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9E1E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9E20: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x588A9E22: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588A9E25: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588A9E28: jne 0x588a9e00
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x588A9E2A: mov ecx, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E30: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9E32: je 0x588a9e42
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9E34: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9E36: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9E38: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9E3A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9E3C: mov dword ptr [edi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E42: mov ecx, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E48: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9E4A: je 0x588a9e5a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9E4C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9E4E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9E50: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9E52: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9E54: mov dword ptr [edi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E5A: mov ecx, dword ptr [edi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E60: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588A9E62: je 0x588a9e72
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9E64: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A9E66: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588A9E68: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588A9E6A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A9E6C: mov dword ptr [edi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E72: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588A9E74: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A9E7C: call 0x587b5f50
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588A9E81: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A9E85: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9E8C: pop ecx
        __asm _emit 0x59
        // 0x588A9E8D: pop edi
        __asm _emit 0x5F
        // 0x588A9E8E: pop esi
        __asm _emit 0x5E
        // 0x588A9E8F: pop ebp
        __asm _emit 0x5D
        // 0x588A9E90: pop ebx
        __asm _emit 0x5B
        // 0x588A9E91: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588A9E94: ret
        __asm _emit 0xC3
    }
}
