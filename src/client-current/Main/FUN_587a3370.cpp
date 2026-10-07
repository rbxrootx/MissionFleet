// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 319 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a3370.

// Ghidra body range 0x587A3370..0x587A34AF; 319 mapped bytes.
extern "C" __declspec(naked) void FUN_587a3370_segment_00() {
    __asm {
        // 0x587A3370: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3375: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A3378: push ebp
        __asm _emit 0x55
        // 0x587A3379: mov ebp, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x587A337C: push esi
        __asm _emit 0x56
        // 0x587A337D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A337F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A3381: je 0x587a34a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3387: push ebx
        __asm _emit 0x53
        // 0x587A3388: push edi
        __asm _emit 0x57
        // 0x587A3389: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3390: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A3392: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587A3397: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A339C: jne 0x587a349c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33A2: cmp word ptr [ebp + 0x164], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x587A33AA: je 0x587a349c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33B0: cmp dword ptr [esi + 0x3ec], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33B6: je 0x587a349c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33BC: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33C2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A33C4: je 0x587a349c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33CA: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587A33CD: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587A33D0: push eax
        __asm _emit 0x50
        // 0x587A33D1: lea ebx, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587A33D4: push ecx
        __asm _emit 0x51
        // 0x587A33D5: push edx
        __asm _emit 0x52
        // 0x587A33D6: push ebp
        __asm _emit 0x55
        // 0x587A33D7: call 0x5876c8d0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x94
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A33DC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A33DF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A33E3: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A33E6: je 0x587a349c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A33EC: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A33F0: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x98
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A33F5: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x98
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A33FA: movzx ecx, word ptr [esi + 0x122]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3401: push eax
        __asm _emit 0x50
        // 0x587A3402: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3406: mov eax, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A340C: push eax
        __asm _emit 0x50
        // 0x587A340D: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3413: push ecx
        __asm _emit 0x51
        // 0x587A3414: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x8B
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A3419: movzx edx, word ptr [ebp + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3420: mov ecx, dword ptr [esi + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3426: mov dword ptr [esi + 0x144], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A342C: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A3430: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3435: mov edi, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A343B: add edi, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3441: mov eax, dword ptr [esi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3447: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A344A: push eax
        __asm _emit 0x50
        // 0x587A344B: push ebx
        __asm _emit 0x53
        // 0x587A344C: call 0x588d6670
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587A3451: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A3455: movzx edx, word ptr [esi + 0x124]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A345C: push eax
        __asm _emit 0x50
        // 0x587A345D: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A3461: push ecx
        __asm _emit 0x51
        // 0x587A3462: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3468: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A346A: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A346F: push edx
        __asm _emit 0x52
        // 0x587A3470: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3476: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A3478: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587A347A: push eax
        __asm _emit 0x50
        // 0x587A347B: mov eax, dword ptr [esi + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3481: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587A3483: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587A3485: push ecx
        __asm _emit 0x51
        // 0x587A3486: mov ecx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x04
        // 0x587A3489: push edx
        __asm _emit 0x52
        // 0x587A348A: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x587A348C: push ebp
        __asm _emit 0x55
        // 0x587A348D: push eax
        __asm _emit 0x50
        // 0x587A348E: push ecx
        __asm _emit 0x51
        // 0x587A348F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3495: push edx
        __asm _emit 0x52
        // 0x587A3496: push edi
        __asm _emit 0x57
        // 0x587A3497: call 0x587efd60
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A349C: mov ebp, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x78
        // 0x587A349F: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A34A1: jne 0x587a3390
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A34A7: pop edi
        __asm _emit 0x5F
        // 0x587A34A8: pop ebx
        __asm _emit 0x5B
        // 0x587A34A9: pop esi
        __asm _emit 0x5E
        // 0x587A34AA: pop ebp
        __asm _emit 0x5D
        // 0x587A34AB: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A34AE: ret
        __asm _emit 0xC3
    }
}
