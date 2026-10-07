// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 73 bytes in 3 exact ranges.
// Source symbol alias: FUN_58899c80.

// Ghidra body range 0x58899C80..0x58899CB5; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_58899c80_segment_00() {
    __asm {
        // 0x58899C80: push ebx
        __asm _emit 0x53
        // 0x58899C81: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58899C85: push esi
        __asm _emit 0x56
        // 0x58899C86: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58899C8A: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58899C8C: je 0x58899cd5
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58899C8E: push ebp
        __asm _emit 0x55
        // 0x58899C8F: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58899C93: push edi
        __asm _emit 0x57
        // 0x58899C94: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58899C96: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58899C99: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58899C9B: je 0x58899cb8
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58899C9D: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58899CA0: push ebp
        __asm _emit 0x55
        // 0x58899CA1: lea ecx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58899CA4: push ecx
        __asm _emit 0x51
        // 0x58899CA5: push edx
        __asm _emit 0x52
        // 0x58899CA6: push eax
        __asm _emit 0x50
        // 0x58899CA7: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899CAC: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58899CAF: push eax
        __asm _emit 0x50
        // 0x58899CB0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x2F
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899CB8..0x58899CC9; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_58899c80_segment_01() {
    __asm {
        // 0x58899CB8: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58899CBA: push ecx
        __asm _emit 0x51
        // 0x58899CBB: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58899CBE: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58899CC1: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58899CC4: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x2F
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899CD5..0x58899CD8; 3 mapped bytes.
extern "C" __declspec(naked) void FUN_58899c80_segment_02() {
    __asm {
        // 0x58899CD5: pop esi
        __asm _emit 0x5E
        // 0x58899CD6: pop ebx
        __asm _emit 0x5B
        // 0x58899CD7: ret
        __asm _emit 0xC3
    }
}
