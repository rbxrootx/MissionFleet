// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889EF90 .. +0x98 bytes.
// Source symbol alias: FUN_5889ef90.
extern "C" __declspec(naked) void FUN_5889ef90() {
    __asm {
        // 0x5889EF90: push ebx
        __asm _emit 0x53
        // 0x5889EF91: push ebp
        __asm _emit 0x55
        // 0x5889EF92: push esi
        __asm _emit 0x56
        // 0x5889EF93: lea esi, [ecx + 0x1cc]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EF99: push edi
        __asm _emit 0x57
        // 0x5889EF9A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5889EF9C: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5889EF9E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5889EFA0: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5889EFA3: cmp edx, 0x41
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x41
        // 0x5889EFA6: jb 0x5889efad
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5889EFA8: cmp edx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x5A
        // 0x5889EFAB: jbe 0x5889efec
        __asm _emit 0x76
        __asm _emit 0x3F
        // 0x5889EFAD: cmp edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x5889EFB0: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5889EFB2: cmp edx, 0x11
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x11
        // 0x5889EFB5: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5889EFB7: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5889EFBA: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5889EFBC: cmp edx, 0xdc
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFC2: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889EFC4: cmp edx, 0xba
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFCA: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5889EFCC: cmp edx, 0xde
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFD2: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5889EFD4: cmp edx, 0xbc
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFDA: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5889EFDC: cmp edx, 0xbe
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFE2: je 0x5889efec
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889EFE4: cmp edx, 0xbf
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EFEA: jne 0x5889f021
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x5889EFEC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889EFEE: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5889EFF0: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5889EFF2: je 0x5889eff8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889EFF4: cmp edx, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x17
        // 0x5889EFF6: je 0x5889f021
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5889EFF8: inc eax
        __asm _emit 0x40
        // 0x5889EFF9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5889EFFC: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x5889EFFF: jl 0x5889eff0
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x5889F001: inc ebx
        __asm _emit 0x43
        // 0x5889F002: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5889F005: cmp ebx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x1F
        // 0x5889F008: jl 0x5889efa0
        __asm _emit 0x7C
        __asm _emit 0x96
        // 0x5889F00A: lea edi, [ecx + 0x150]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F010: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F015: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5889F017: pop edi
        __asm _emit 0x5F
        // 0x5889F018: pop esi
        __asm _emit 0x5E
        // 0x5889F019: pop ebp
        __asm _emit 0x5D
        // 0x5889F01A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F01F: pop ebx
        __asm _emit 0x5B
        // 0x5889F020: ret
        __asm _emit 0xC3
        // 0x5889F021: pop edi
        __asm _emit 0x5F
        // 0x5889F022: pop esi
        __asm _emit 0x5E
        // 0x5889F023: pop ebp
        __asm _emit 0x5D
        // 0x5889F024: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889F026: pop ebx
        __asm _emit 0x5B
        // 0x5889F027: ret
        __asm _emit 0xC3
    }
}
