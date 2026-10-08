// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 223 bytes in 1 exact ranges.
// Source symbol alias: FUN_58734b60.

// Ghidra body range 0x58734B60..0x58734C3F; 223 mapped bytes.
extern "C" __declspec(naked) void FUN_58734b60_segment_00() {
    __asm {
        // 0x58734B60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58734B62: push 0x5897e8ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58734B67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B6D: push eax
        __asm _emit 0x50
        // 0x58734B6E: push esi
        __asm _emit 0x56
        // 0x58734B6F: push edi
        __asm _emit 0x57
        // 0x58734B70: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58734B75: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58734B77: push eax
        __asm _emit 0x50
        // 0x58734B78: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58734B7C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B82: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58734B84: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58734B88: add esi, 0x22
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x22
        // 0x58734B8B: cmp dword ptr [edi + 0x60], 1
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58734B8F: jne 0x58734b96
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58734B91: mov esi, 0x27
        __asm _emit 0xBE
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B96: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58734B98: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734B9D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58734BA0: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58734BA4: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734BAC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58734BAE: je 0x58734bf4
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58734BB0: mov edx, dword ptr [0x58a246f4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734BB6: cmp dword ptr [edx + 0x160], esi
        __asm _emit 0x39
        __asm _emit 0xB2
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734BBC: jle 0x58734bd6
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58734BBE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58734BC0: jl 0x58734bd6
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58734BC2: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734BC9: je 0x58734bd6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58734BCB: shl esi, 6
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x06
        // 0x58734BCE: add esi, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0xB2
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734BD4: jmp 0x58734bd8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58734BD6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58734BD8: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58734BDB: add ecx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58734BDF: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x58734BE2: push 0x1388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734BE7: push ecx
        __asm _emit 0x51
        // 0x58734BE8: push edx
        __asm _emit 0x52
        // 0x58734BE9: push esi
        __asm _emit 0x56
        // 0x58734BEA: push edi
        __asm _emit 0x57
        // 0x58734BEB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58734BED: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734BF2: jmp 0x58734bf6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58734BF4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58734BF6: mov dword ptr [edi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x58734BF9: push eax
        __asm _emit 0x50
        // 0x58734BFA: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734BFF: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58734C05: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734C0D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xE3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734C12: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x58734C15: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734C1A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xE1
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734C1F: mov edi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x64
        // 0x58734C22: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734C27: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58734C2B: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58734C2F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734C36: pop ecx
        __asm _emit 0x59
        // 0x58734C37: pop edi
        __asm _emit 0x5F
        // 0x58734C38: pop esi
        __asm _emit 0x5E
        // 0x58734C39: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58734C3C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
