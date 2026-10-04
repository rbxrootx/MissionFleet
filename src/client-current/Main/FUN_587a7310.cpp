// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A7310 .. +0xE6 bytes.
// Source symbol alias: FUN_587a7310.
extern "C" __declspec(naked) void FUN_587a7310() {
    __asm {
        // 0x587A7310: push ebx
        __asm _emit 0x53
        // 0x587A7311: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A7315: push ebp
        __asm _emit 0x55
        // 0x587A7316: push esi
        __asm _emit 0x56
        // 0x587A7317: mov ebp, 8
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A731C: push edi
        __asm _emit 0x57
        // 0x587A731D: lea edx, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x587A7320: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A7322: lea edi, [ebp - 7]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xF9
        // 0x587A7325: mov eax, dword ptr [edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0xFC
        // 0x587A7328: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587A732A: je 0x587a7355
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587A732C: mov ecx, dword ptr [eax + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7332: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A7334: jne 0x587a733e
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7336: mov dword ptr [eax + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A733C: jmp 0x587a7355
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587A733E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A7340: jne 0x587a734a
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7342: mov dword ptr [eax + 0x148], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7348: jmp 0x587a7355
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587A734A: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A734D: jne 0x587a7355
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587A734F: mov dword ptr [eax + 0x148], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7355: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587A7357: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587A7359: je 0x587a7384
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587A735B: mov ecx, dword ptr [eax + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7361: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A7363: jne 0x587a736d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7365: mov dword ptr [eax + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A736B: jmp 0x587a7384
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587A736D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A736F: jne 0x587a7379
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7371: mov dword ptr [eax + 0x148], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7377: jmp 0x587a7384
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587A7379: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A737C: jne 0x587a7384
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587A737E: mov dword ptr [eax + 0x148], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7384: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A7387: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587A7389: je 0x587a73b4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587A738B: mov ecx, dword ptr [eax + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7391: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A7393: jne 0x587a739d
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7395: mov dword ptr [eax + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A739B: jmp 0x587a73b4
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587A739D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A739F: jne 0x587a73a9
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A73A1: mov dword ptr [eax + 0x148], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73A7: jmp 0x587a73b4
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587A73A9: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A73AC: jne 0x587a73b4
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587A73AE: mov dword ptr [eax + 0x148], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73B4: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587A73B7: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587A73B9: je 0x587a73e4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587A73BB: mov ecx, dword ptr [eax + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73C1: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A73C3: jne 0x587a73cd
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A73C5: mov dword ptr [eax + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73CB: jmp 0x587a73e4
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587A73CD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A73CF: jne 0x587a73d9
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A73D1: mov dword ptr [eax + 0x148], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73D7: jmp 0x587a73e4
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587A73D9: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A73DC: jne 0x587a73e4
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587A73DE: mov dword ptr [eax + 0x148], esi
        __asm _emit 0x89
        __asm _emit 0xB0
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A73E4: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x587A73E7: sub ebp, edi
        __asm _emit 0x2B
        __asm _emit 0xEF
        // 0x587A73E9: jne 0x587a7325
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A73EF: pop edi
        __asm _emit 0x5F
        // 0x587A73F0: pop esi
        __asm _emit 0x5E
        // 0x587A73F1: pop ebp
        __asm _emit 0x5D
        // 0x587A73F2: pop ebx
        __asm _emit 0x5B
        // 0x587A73F3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
