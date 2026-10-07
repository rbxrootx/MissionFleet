// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 213 bytes in 2 exact ranges.
// Source symbol alias: FUN_5876ee90.

// Ghidra body range 0x5876EE90..0x5876EF4D; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ee90_segment_00() {
    __asm {
        // 0x5876EE90: push ebx
        __asm _emit 0x53
        // 0x5876EE91: push esi
        __asm _emit 0x56
        // 0x5876EE92: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876EE94: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876EE97: push edi
        __asm _emit 0x57
        // 0x5876EE98: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876EE9A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EE9C: je 0x5876eeb6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5876EE9E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EEA0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876EEA3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EEA5: mov ebx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x54
        // 0x5876EEA8: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5876EEAA: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EEAF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5876EEB1: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EEB6: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876EEB9: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EEBB: je 0x5876eed5
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5876EEBD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EEBF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876EEC2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EEC4: mov ebx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x58
        // 0x5876EEC7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5876EEC9: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EECE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5876EED0: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876EED5: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876EED8: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876EEDD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EEDF: je 0x5876eeeb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EEE1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EEE3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EEE5: push ebx
        __asm _emit 0x53
        // 0x5876EEE6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EEE8: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5876EEEB: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5876EEEE: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EEF0: je 0x5876eefc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EEF2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EEF4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EEF6: push ebx
        __asm _emit 0x53
        // 0x5876EEF7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EEF9: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5876EEFC: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876EEFF: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EF01: je 0x5876ef0d
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EF03: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EF05: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EF07: push ebx
        __asm _emit 0x53
        // 0x5876EF08: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EF0A: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5876EF0D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5876EF10: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EF12: je 0x5876ef1e
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EF14: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EF16: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EF18: push ebx
        __asm _emit 0x53
        // 0x5876EF19: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EF1B: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5876EF1E: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5876EF21: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EF23: je 0x5876ef2f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EF25: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EF27: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EF29: push ebx
        __asm _emit 0x53
        // 0x5876EF2A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EF2C: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5876EF2F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5876EF32: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EF34: je 0x5876ef40
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EF36: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EF38: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EF3A: push ebx
        __asm _emit 0x53
        // 0x5876EF3B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EF3D: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5876EF40: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5876EF43: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5876EF45: je 0x5876ef53
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5876EF47: push eax
        __asm _emit 0x50
        // 0x5876EF48: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xDC
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5876EF53..0x5876EF6B; 24 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ee90_segment_01() {
    __asm {
        // 0x5876EF53: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5876EF56: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5876EF58: je 0x5876ef64
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5876EF5A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876EF5C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5876EF5E: push ebx
        __asm _emit 0x53
        // 0x5876EF5F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876EF61: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5876EF64: pop edi
        __asm _emit 0x5F
        // 0x5876EF65: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x5876EF68: pop esi
        __asm _emit 0x5E
        // 0x5876EF69: pop ebx
        __asm _emit 0x5B
        // 0x5876EF6A: ret
        __asm _emit 0xC3
    }
}
