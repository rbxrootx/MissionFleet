// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 140 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877e440.

// Ghidra body range 0x5877E440..0x5877E4CC; 140 mapped bytes.
extern "C" __declspec(naked) void FUN_5877e440_segment_00() {
    __asm {
        // 0x5877E440: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877E444: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877E448: push esi
        __asm _emit 0x56
        // 0x5877E449: push eax
        __asm _emit 0x50
        // 0x5877E44A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877E44E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877E450: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877E454: push ecx
        __asm _emit 0x51
        // 0x5877E455: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877E459: push edx
        __asm _emit 0x52
        // 0x5877E45A: push eax
        __asm _emit 0x50
        // 0x5877E45B: push ecx
        __asm _emit 0x51
        // 0x5877E45C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877E45E: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x65
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877E463: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5877E466: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5877E468: mov dword ptr [esi], 0x589969ac
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xAC
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877E46E: mov dword ptr [esi + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5877E471: mov dword ptr [esi + 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5877E474: mov dword ptr [esi + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5877E477: mov dword ptr [esi + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5877E47A: mov dword ptr [esi + 0x64], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877E481: mov dword ptr [esi + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E488: mov dword ptr [esi + 0x6c], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E48F: mov dword ptr [esi + 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5877E492: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5877E494: je 0x5877e4bb
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5877E496: movzx ecx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877E49A: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x5877E49F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877E4A1: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5877E4A4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5877E4A6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877E4A9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877E4AB: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5877E4AE: mov dword ptr [esi + 0x78], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E4B5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877E4B7: pop esi
        __asm _emit 0x5E
        // 0x5877E4B8: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5877E4BB: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E4C0: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5877E4C3: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5877E4C6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877E4C8: pop esi
        __asm _emit 0x5E
        // 0x5877E4C9: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
