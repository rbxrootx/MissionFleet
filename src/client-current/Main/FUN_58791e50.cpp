// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 115 bytes in 1 exact ranges.
// Source symbol alias: FUN_58791e50.

// Ghidra body range 0x58791E50..0x58791EC3; 115 mapped bytes.
extern "C" __declspec(naked) void FUN_58791e50_segment_00() {
    __asm {
        // 0x58791E50: push ecx
        __asm _emit 0x51
        // 0x58791E51: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58791E56: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58791E58: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58791E5B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58791E5D: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58791E61: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58791E63: je 0x58791eb5
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58791E65: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58791E68: push ebx
        __asm _emit 0x53
        // 0x58791E69: mov ebx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x58791E6C: push ebp
        __asm _emit 0x55
        // 0x58791E6D: mov ebp, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x58791E70: push esi
        __asm _emit 0x56
        // 0x58791E71: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58791E74: push edi
        __asm _emit 0x57
        // 0x58791E75: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x58791E78: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58791E7B: mov ebp, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x58791E7E: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58791E81: mov ebp, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x58791E84: mov dword ptr [eax + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x58791E87: mov ebp, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x58791E8A: mov dword ptr [eax + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58791E8D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58791E90: mov dword ptr [ecx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58791E93: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x58791E96: mov dword ptr [ecx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x58791E99: mov dword ptr [ecx + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x10
        // 0x58791E9C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58791E9F: mov dword ptr [eax + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x14
        // 0x58791EA2: mov esi, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x18
        // 0x58791EA5: mov dword ptr [ecx + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x58791EA8: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58791EAB: pop edi
        __asm _emit 0x5F
        // 0x58791EAC: mov dword ptr [eax + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x58791EAF: pop esi
        __asm _emit 0x5E
        // 0x58791EB0: pop ebp
        __asm _emit 0x5D
        // 0x58791EB1: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58791EB4: pop ebx
        __asm _emit 0x5B
        // 0x58791EB5: mov ecx, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x58791EB8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58791EBA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xAD
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58791EBF: pop ecx
        __asm _emit 0x59
        // 0x58791EC0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
