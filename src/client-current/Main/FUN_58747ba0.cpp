// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 162 bytes in 2 exact ranges.
// Source symbol alias: FUN_58747ba0.

// Ghidra body range 0x58747BA0..0x58747BBD; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_58747ba0_segment_00() {
    __asm {
        // 0x58747BA0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747BA4: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58747BA7: push ebx
        __asm _emit 0x53
        // 0x58747BA8: push edi
        __asm _emit 0x57
        // 0x58747BA9: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58747BAB: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58747BAE: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58747BB1: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58747BB5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58747BB7: jne 0x58747bd4
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58747BB9: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58747BBB: jmp 0x58747bc0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58747BC0..0x58747C45; 133 mapped bytes.
extern "C" __declspec(naked) void FUN_58747ba0_segment_01() {
    __asm {
        // 0x58747BC0: cmp dword ptr [eax + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58747BC3: jae 0x58747bca
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58747BC5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58747BC8: jmp 0x58747bce
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58747BCA: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58747BCC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58747BCE: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58747BD2: je 0x58747bc0
        __asm _emit 0x74
        __asm _emit 0xEC
        // 0x58747BD4: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58747BD7: push esi
        __asm _emit 0x56
        // 0x58747BD8: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x58747BDA: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747BDE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747BE0: je 0x58747be6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58747BE2: cmp esi, esi
        __asm _emit 0x3B
        __asm _emit 0xF6
        // 0x58747BE4: je 0x58747bef
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58747BE6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747BEB: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747BEF: cmp ebx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747BF3: je 0x58747bfc
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58747BF5: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58747BF7: cmp ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58747BFA: jae 0x58747c22
        __asm _emit 0x73
        __asm _emit 0x26
        // 0x58747BFC: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x58747BFE: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747C02: push eax
        __asm _emit 0x50
        // 0x58747C03: push ebx
        __asm _emit 0x53
        // 0x58747C04: push esi
        __asm _emit 0x56
        // 0x58747C05: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747C09: push ecx
        __asm _emit 0x51
        // 0x58747C0A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58747C0C: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58747C10: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747C18: call 0x587479d0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747C1D: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58747C1F: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58747C22: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58747C24: jne 0x58747c41
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58747C26: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747C2B: cmp ebx, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58747C2E: pop esi
        __asm _emit 0x5E
        // 0x58747C2F: jne 0x58747c36
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58747C31: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x50
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747C36: pop edi
        __asm _emit 0x5F
        // 0x58747C37: lea eax, [ebx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58747C3A: pop ebx
        __asm _emit 0x5B
        // 0x58747C3B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58747C3E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58747C41: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58747C43: jmp 0x58747c2b
        __asm _emit 0xEB
        __asm _emit 0xE6
    }
}
