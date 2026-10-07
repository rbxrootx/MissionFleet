// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 152 bytes in 1 exact ranges.
// Source symbol alias: FUN_58738c60.

// Ghidra body range 0x58738C60..0x58738CF8; 152 mapped bytes.
extern "C" __declspec(naked) void FUN_58738c60_segment_00() {
    __asm {
        // 0x58738C60: push ebx
        __asm _emit 0x53
        // 0x58738C61: push ebp
        __asm _emit 0x55
        // 0x58738C62: push esi
        __asm _emit 0x56
        // 0x58738C63: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58738C65: push edi
        __asm _emit 0x57
        // 0x58738C66: mov edi, dword ptr [ebp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x7C
        // 0x58738C69: cmp edi, dword ptr [ebp + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xBD
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C6F: jbe 0x58738c76
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58738C71: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738C76: mov esi, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x58738C79: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C80: mov ebx, dword ptr [ebp + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C86: cmp dword ptr [ebp + 0x7c], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x7C
        // 0x58738C89: jbe 0x58738c90
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58738C8B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738C90: mov eax, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x70
        // 0x58738C93: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58738C95: je 0x58738c9b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58738C97: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58738C99: je 0x58738ca0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58738C9B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738CA0: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58738CA2: je 0x58738cef
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58738CA4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58738CA6: jne 0x58738cdb
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58738CA8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738CAD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738CAF: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58738CB2: jb 0x58738cb9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58738CB4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738CB9: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738CBD: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58738CBF: je 0x58738ce3
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58738CC1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58738CC3: jne 0x58738cdf
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58738CC5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738CCA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738CCC: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58738CCF: jb 0x58738cd6
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58738CD1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x3F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58738CD6: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58738CD9: jmp 0x58738c80
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x58738CDB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58738CDD: jmp 0x58738caf
        __asm _emit 0xEB
        __asm _emit 0xD0
        // 0x58738CDF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58738CE1: jmp 0x58738ccc
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58738CE3: pop edi
        __asm _emit 0x5F
        // 0x58738CE4: pop esi
        __asm _emit 0x5E
        // 0x58738CE5: pop ebp
        __asm _emit 0x5D
        // 0x58738CE6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738CEB: pop ebx
        __asm _emit 0x5B
        // 0x58738CEC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58738CEF: pop edi
        __asm _emit 0x5F
        // 0x58738CF0: pop esi
        __asm _emit 0x5E
        // 0x58738CF1: pop ebp
        __asm _emit 0x5D
        // 0x58738CF2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738CF4: pop ebx
        __asm _emit 0x5B
        // 0x58738CF5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
