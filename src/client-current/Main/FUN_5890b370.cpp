// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890B370 .. +0x143 bytes.
// Source symbol alias: FUN_5890b370.
extern "C" __declspec(naked) void FUN_5890b370() {
    __asm {
        // 0x5890B370: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890B372: push 0x5898aa83
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890B377: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B37D: push eax
        __asm _emit 0x50
        // 0x5890B37E: push ecx
        __asm _emit 0x51
        // 0x5890B37F: push ebx
        __asm _emit 0x53
        // 0x5890B380: push ebp
        __asm _emit 0x55
        // 0x5890B381: push esi
        __asm _emit 0x56
        // 0x5890B382: push edi
        __asm _emit 0x57
        // 0x5890B383: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890B388: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890B38A: push eax
        __asm _emit 0x50
        // 0x5890B38B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890B38F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B395: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890B397: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890B39B: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5890B39F: mov edi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5890B3A3: mov ebp, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5890B3A7: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5890B3AB: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5890B3AF: push eax
        __asm _emit 0x50
        // 0x5890B3B0: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5890B3B4: push edi
        __asm _emit 0x57
        // 0x5890B3B5: push ebp
        __asm _emit 0x55
        // 0x5890B3B6: push ecx
        __asm _emit 0x51
        // 0x5890B3B7: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5890B3BB: push edx
        __asm _emit 0x52
        // 0x5890B3BC: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5890B3C0: push eax
        __asm _emit 0x50
        // 0x5890B3C1: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5890B3C5: push ecx
        __asm _emit 0x51
        // 0x5890B3C6: push edx
        __asm _emit 0x52
        // 0x5890B3C7: push eax
        __asm _emit 0x50
        // 0x5890B3C8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890B3CA: call 0x58731700
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x5890B3CF: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890B3D3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5890B3D5: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890B3D9: mov dword ptr [esi], 0x589a2afc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xFC
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890B3DF: mov dword ptr [esi + 0x70], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x70
        // 0x5890B3E2: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5890B3E5: mov dword ptr [esi + 0x8c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B3EF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5890B3F1: jne 0x5890b40a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5890B3F3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B3F8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B3FD: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B403: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890B406: mov byte ptr [eax], bl
        __asm _emit 0x88
        __asm _emit 0x18
        // 0x5890B408: jmp 0x5890b410
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5890B40A: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B410: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5890B412: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B418: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B41E: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x5890B421: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B427: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B42D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890B432: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5890B434: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890B437: mov dword ptr [esp + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5890B43B: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5890B440: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5890B442: je 0x5890b46a
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5890B444: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890B448: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890B44C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5890B44E: push ebx
        __asm _emit 0x53
        // 0x5890B44F: push ebx
        __asm _emit 0x53
        // 0x5890B450: push ecx
        __asm _emit 0x51
        // 0x5890B451: push edx
        __asm _emit 0x52
        // 0x5890B452: push esi
        __asm _emit 0x56
        // 0x5890B453: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890B455: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890B45A: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890B460: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5890B463: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x5890B466: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890B468: jmp 0x5890b46c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890B46A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5890B46C: push 0xffffff38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890B471: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890B475: mov dword ptr [esi + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B47B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890B480: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B486: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B48B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5890B48F: call dword ptr [0x5898c19c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890B495: mov word ptr [0x58a28528], ax
        __asm _emit 0x66
        __asm _emit 0xA3
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890B49B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890B49D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890B4A1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890B4A8: pop ecx
        __asm _emit 0x59
        // 0x5890B4A9: pop edi
        __asm _emit 0x5F
        // 0x5890B4AA: pop esi
        __asm _emit 0x5E
        // 0x5890B4AB: pop ebp
        __asm _emit 0x5D
        // 0x5890B4AC: pop ebx
        __asm _emit 0x5B
        // 0x5890B4AD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890B4B0: ret 0x28
        __asm _emit 0xC2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
