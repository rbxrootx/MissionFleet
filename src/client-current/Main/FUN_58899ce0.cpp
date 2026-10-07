// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 123 bytes in 2 exact ranges.
// Source symbol alias: FUN_58899ce0.

// Ghidra body range 0x58899CE0..0x58899D49; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_58899ce0_segment_00() {
    __asm {
        // 0x58899CE0: push ebp
        __asm _emit 0x55
        // 0x58899CE1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58899CE3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58899CE5: push 0x589873d1
        __asm _emit 0x68
        __asm _emit 0xD1
        __asm _emit 0x73
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899CEA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899CF0: push eax
        __asm _emit 0x50
        // 0x58899CF1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58899CF4: push ebx
        __asm _emit 0x53
        // 0x58899CF5: push esi
        __asm _emit 0x56
        // 0x58899CF6: push edi
        __asm _emit 0x57
        // 0x58899CF7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58899CFC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58899CFE: push eax
        __asm _emit 0x50
        // 0x58899CFF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58899D02: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899D08: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58899D0B: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58899D0E: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58899D11: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58899D13: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58899D16: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899D19: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899D20: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58899D22: jbe 0x58899d6a
        __asm _emit 0x76
        __asm _emit 0x46
        // 0x58899D24: mov dword ptr [ebp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58899D27: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58899D2A: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x58899D2E: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58899D30: je 0x58899d3d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58899D32: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58899D35: push eax
        __asm _emit 0x50
        // 0x58899D36: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899D38: call 0x58899700
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899D3D: dec edi
        __asm _emit 0x4F
        // 0x58899D3E: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x58899D41: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899D44: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58899D47: jmp 0x58899d20
        __asm _emit 0xEB
        __asm _emit 0xD7
    }
}

// Ghidra body range 0x58899D6A..0x58899D7C; 18 mapped bytes.
extern "C" __declspec(naked) void FUN_58899ce0_segment_01() {
    __asm {
        // 0x58899D6A: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58899D6D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899D74: pop ecx
        __asm _emit 0x59
        // 0x58899D75: pop edi
        __asm _emit 0x5F
        // 0x58899D76: pop esi
        __asm _emit 0x5E
        // 0x58899D77: pop ebx
        __asm _emit 0x5B
        // 0x58899D78: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58899D7A: pop ebp
        __asm _emit 0x5D
        // 0x58899D7B: ret
        __asm _emit 0xC3
    }
}
