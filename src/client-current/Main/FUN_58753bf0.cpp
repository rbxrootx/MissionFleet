// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753BF0 .. +0xC5 bytes.
// Source symbol alias: FUN_58753bf0.
extern "C" __declspec(naked) void FUN_58753bf0() {
    __asm {
        // 0x58753BF0: push ebx
        __asm _emit 0x53
        // 0x58753BF1: push ebp
        __asm _emit 0x55
        // 0x58753BF2: push esi
        __asm _emit 0x56
        // 0x58753BF3: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58753BF5: push edi
        __asm _emit 0x57
        // 0x58753BF6: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58753BF9: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58753BFC: jbe 0x58753c03
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753BFE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C03: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58753C06: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x58753C09: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x58753C0C: jbe 0x58753c13
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58753C0E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C13: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58753C16: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753C18: je 0x58753c1e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58753C1A: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58753C1C: je 0x58753c23
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58753C1E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C23: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58753C25: je 0x58753cac
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58753C2B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753C2D: jne 0x58753c80
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58753C2F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753C36: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753C39: jb 0x58753c40
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753C3B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C40: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58753C44: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x58753C46: jne 0x58753c66
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753C48: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753C4A: jne 0x58753c84
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58753C4C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C51: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753C53: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753C56: jb 0x58753c5d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753C58: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C5D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58753C61: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58753C64: je 0x58753c8c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58753C66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753C68: jne 0x58753c88
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58753C6A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C6F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753C71: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753C74: jb 0x58753c7b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753C76: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C7B: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x58753C7E: jmp 0x58753c06
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58753C80: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753C82: jmp 0x58753c36
        __asm _emit 0xEB
        __asm _emit 0xB2
        // 0x58753C84: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753C86: jmp 0x58753c53
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x58753C88: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753C8A: jmp 0x58753c71
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58753C8C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753C8E: jne 0x58753ca8
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x58753C90: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C95: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753C98: jb 0x58753c9f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753C9A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x8F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753C9F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58753CA1: pop edi
        __asm _emit 0x5F
        // 0x58753CA2: pop esi
        __asm _emit 0x5E
        // 0x58753CA3: pop ebp
        __asm _emit 0x5D
        // 0x58753CA4: pop ebx
        __asm _emit 0x5B
        // 0x58753CA5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753CA8: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58753CAA: jmp 0x58753c95
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x58753CAC: pop edi
        __asm _emit 0x5F
        // 0x58753CAD: pop esi
        __asm _emit 0x5E
        // 0x58753CAE: pop ebp
        __asm _emit 0x5D
        // 0x58753CAF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753CB1: pop ebx
        __asm _emit 0x5B
        // 0x58753CB2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
