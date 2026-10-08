// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 124 bytes in 2 exact ranges.
// Source symbol alias: FUN_587eabc0.

// Ghidra body range 0x587EABC0..0x587EABDD; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587eabc0_segment_00() {
    __asm {
        // 0x587EABC0: mov ecx, dword ptr [ecx + 0x20d54]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EABC6: push edi
        __asm _emit 0x57
        // 0x587EABC7: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587EABCA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EABCC: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587EABCE: je 0x587eac3b
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x587EABD0: push ebx
        __asm _emit 0x53
        // 0x587EABD1: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EABD5: push ebp
        __asm _emit 0x55
        // 0x587EABD6: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EABDA: push esi
        __asm _emit 0x56
        // 0x587EABDB: jmp 0x587eabe0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587EABE0..0x587EAC3F; 95 mapped bytes.
extern "C" __declspec(naked) void FUN_587eabc0_segment_01() {
    __asm {
        // 0x587EABE0: mov esi, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x587EABE3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587EABE5: je 0x587eac23
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x587EABE7: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EABED: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EABF0: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x587EABF3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EABF5: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587EABF7: jl 0x587eac23
        __asm _emit 0x7C
        __asm _emit 0x2A
        // 0x587EABF9: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x587EABFC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EABFE: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587EAC00: jge 0x587eac23
        __asm _emit 0x7D
        __asm _emit 0x21
        // 0x587EAC02: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587EAC05: mov eax, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x587EAC08: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587EAC0A: cmp dword ptr [esp + 0x18], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EAC0E: jl 0x587eac23
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x587EAC10: mov ecx, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x20
        // 0x587EAC13: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587EAC15: cmp dword ptr [esp + 0x18], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EAC19: jge 0x587eac23
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587EAC1B: cmp ebp, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC21: jg 0x587eac33
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x587EAC23: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587EAC26: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587EAC28: jne 0x587eabe0
        __asm _emit 0x75
        __asm _emit 0xB6
        // 0x587EAC2A: pop esi
        __asm _emit 0x5E
        // 0x587EAC2B: pop ebp
        __asm _emit 0x5D
        // 0x587EAC2C: pop ebx
        __asm _emit 0x5B
        // 0x587EAC2D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EAC2F: pop edi
        __asm _emit 0x5F
        // 0x587EAC30: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587EAC33: pop esi
        __asm _emit 0x5E
        // 0x587EAC34: pop ebp
        __asm _emit 0x5D
        // 0x587EAC35: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EAC3A: pop ebx
        __asm _emit 0x5B
        // 0x587EAC3B: pop edi
        __asm _emit 0x5F
        // 0x587EAC3C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
