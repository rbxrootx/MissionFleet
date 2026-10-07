// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 3 exact ranges.
// Source symbol alias: FUN_58791fe0.

// Ghidra body range 0x58791FE0..0x58792075; 149 mapped bytes.
extern "C" __declspec(naked) void FUN_58791fe0_segment_00() {
    __asm {
        // 0x58791FE0: push ebp
        __asm _emit 0x55
        // 0x58791FE1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58791FE3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58791FE5: push 0x589803b9
        __asm _emit 0x68
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58791FEA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58791FF0: push eax
        __asm _emit 0x50
        // 0x58791FF1: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x58791FF4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58791FF9: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58791FFB: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58791FFE: push ebx
        __asm _emit 0x53
        // 0x58791FFF: push esi
        __asm _emit 0x56
        // 0x58792000: push edi
        __asm _emit 0x57
        // 0x58792001: push eax
        __asm _emit 0x50
        // 0x58792002: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58792005: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879200B: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5879200E: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58792011: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58792014: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58792016: mov dword ptr [ebp - 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x58792019: mov dword ptr [ebp - 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xC8
        // 0x5879201C: mov dword ptr [ebp - 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792023: mov dword ptr [ebp - 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xE4
        // 0x58792026: mov byte ptr [ebp - 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xD4
        // 0x58792029: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x5879202C: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x58792030: cmp edi, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58792033: je 0x5879209a
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58792035: mov dword ptr [ebp - 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x58792038: mov dword ptr [ebp - 0x40], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x5879203B: mov byte ptr [ebp - 4], 2
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        // 0x5879203F: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58792041: je 0x5879205e
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58792043: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58792045: push ebx
        __asm _emit 0x53
        // 0x58792046: lea eax, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x58792049: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792050: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58792053: push eax
        __asm _emit 0x50
        // 0x58792054: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792056: mov byte ptr [esi + 4], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58792059: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x2E
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5879205E: push edi
        __asm _emit 0x57
        // 0x5879205F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58792061: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x58792065: call 0x58791e50
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879206A: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x1C
        // 0x5879206D: mov dword ptr [ebp - 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x58792070: add edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x1C
        // 0x58792073: jmp 0x58792030
        __asm _emit 0xEB
        __asm _emit 0xBB
    }
}

// Ghidra body range 0x5879209A..0x587920A9; 15 mapped bytes.
extern "C" __declspec(naked) void FUN_58791fe0_segment_01() {
    __asm {
        // 0x5879209A: cmp dword ptr [ebp - 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x5879209E: jb 0x587920ac
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x587920A0: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x587920A3: push ecx
        __asm _emit 0x51
        // 0x587920A4: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xAB
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587920AC..0x587920CA; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_58791fe0_segment_02() {
    __asm {
        // 0x587920AC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587920AE: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x587920B1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587920B8: pop ecx
        __asm _emit 0x59
        // 0x587920B9: pop edi
        __asm _emit 0x5F
        // 0x587920BA: pop esi
        __asm _emit 0x5E
        // 0x587920BB: pop ebx
        __asm _emit 0x5B
        // 0x587920BC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587920BF: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x587920C1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xAB
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x587920C6: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587920C8: pop ebp
        __asm _emit 0x5D
        // 0x587920C9: ret
        __asm _emit 0xC3
    }
}
