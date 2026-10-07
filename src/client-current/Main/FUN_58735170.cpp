// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 122 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735170.

// Ghidra body range 0x58735170..0x587351EA; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_58735170_segment_00() {
    __asm {
        // 0x58735170: push ebx
        __asm _emit 0x53
        // 0x58735171: push ebp
        __asm _emit 0x55
        // 0x58735172: push esi
        __asm _emit 0x56
        // 0x58735173: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58735175: push edi
        __asm _emit 0x57
        // 0x58735176: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x58735179: cmp edi, dword ptr [ebp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x5873517C: jbe 0x58735183
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873517E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735183: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58735186: mov ebx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x1C
        // 0x58735189: cmp dword ptr [ebp + 0x18], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x18
        // 0x5873518C: jbe 0x58735193
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873518E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58735193: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58735196: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58735198: je 0x5873519e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5873519A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5873519C: je 0x587351a3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5873519E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587351A3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587351A5: je 0x587351e5
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587351A7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587351A9: jne 0x587351dd
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x587351AB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587351B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587351B2: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587351B5: jb 0x587351bc
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587351B7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587351BC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587351BE: call 0x58742570
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587351C3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587351C5: jne 0x587351e1
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587351C7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587351CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587351CE: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587351D1: jb 0x587351d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587351D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587351D8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587351DB: jmp 0x58735186
        __asm _emit 0xEB
        __asm _emit 0xA9
        // 0x587351DD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587351DF: jmp 0x587351b2
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x587351E1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587351E3: jmp 0x587351ce
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587351E5: pop edi
        __asm _emit 0x5F
        // 0x587351E6: pop esi
        __asm _emit 0x5E
        // 0x587351E7: pop ebp
        __asm _emit 0x5D
        // 0x587351E8: pop ebx
        __asm _emit 0x5B
        // 0x587351E9: ret
        __asm _emit 0xC3
    }
}
