// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 209 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a8b70.

// Ghidra body range 0x587A8B70..0x587A8C41; 209 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8b70_segment_00() {
    __asm {
        // 0x587A8B70: push ecx
        __asm _emit 0x51
        // 0x587A8B71: push esi
        __asm _emit 0x56
        // 0x587A8B72: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A8B76: mov dword ptr [esp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A8B7A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8B7C: jne 0x587a8b95
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587A8B7E: push 0x67c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8B83: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8B88: push 0x58999ac8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8B8D: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x43
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8B92: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A8B95: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8B99: cmp eax, dword ptr [esi + 4]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A8B9C: jne 0x587a8ba5
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A8B9E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A8BA0: pop esi
        __asm _emit 0x5E
        // 0x587A8BA1: pop ecx
        __asm _emit 0x59
        // 0x587A8BA2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587A8BA5: mov esi, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8BAB: push ebx
        __asm _emit 0x53
        // 0x587A8BAC: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587A8BAF: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587A8BB2: jbe 0x587a8bb9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8BB4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8BB9: push ebp
        __asm _emit 0x55
        // 0x587A8BBA: push edi
        __asm _emit 0x57
        // 0x587A8BBB: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587A8BBD: mov ebp, ebx
        __asm _emit 0x8B
        __asm _emit 0xEB
        // 0x587A8BBF: nop
        __asm _emit 0x90
        // 0x587A8BC0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A8BC4: mov esi, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8BCA: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587A8BCD: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587A8BD0: jbe 0x587a8bd7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8BD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8BD7: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A8BD9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8BDB: je 0x587a8be1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A8BDD: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587A8BDF: je 0x587a8be6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A8BE1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8BE6: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x587A8BE8: je 0x587a8c37
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x587A8BEA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8BEC: jne 0x587a8c2f
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587A8BEE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8BF3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8BF5: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8BF8: jb 0x587a8bff
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8BFA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8BFF: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A8C03: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8C06: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A8C0A: push edx
        __asm _emit 0x52
        // 0x587A8C0B: push eax
        __asm _emit 0x50
        // 0x587A8C0C: call 0x587a8b70
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8C11: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8C13: jne 0x587a8c39
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x587A8C15: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A8C17: jne 0x587a8c33
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587A8C19: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8C20: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x587A8C23: jb 0x587a8c2a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8C25: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8C2A: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587A8C2D: jmp 0x587a8bc0
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x587A8C2F: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8C31: jmp 0x587a8bf5
        __asm _emit 0xEB
        __asm _emit 0xC2
        // 0x587A8C33: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587A8C35: jmp 0x587a8c20
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587A8C37: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A8C39: pop edi
        __asm _emit 0x5F
        // 0x587A8C3A: pop ebp
        __asm _emit 0x5D
        // 0x587A8C3B: pop ebx
        __asm _emit 0x5B
        // 0x587A8C3C: pop esi
        __asm _emit 0x5E
        // 0x587A8C3D: pop ecx
        __asm _emit 0x59
        // 0x587A8C3E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
