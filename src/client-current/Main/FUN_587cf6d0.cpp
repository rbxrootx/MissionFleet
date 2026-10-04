// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CF6D0 .. +0xC0 bytes.
// Source symbol alias: FUN_587cf6d0.
extern "C" __declspec(naked) void FUN_587cf6d0() {
    __asm {
        // 0x587CF6D0: push ebx
        __asm _emit 0x53
        // 0x587CF6D1: push ebp
        __asm _emit 0x55
        // 0x587CF6D2: push esi
        __asm _emit 0x56
        // 0x587CF6D3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CF6D5: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6DB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CF6DF: cdq
        __asm _emit 0x99
        // 0x587CF6E0: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587CF6E2: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CF6E6: push edi
        __asm _emit 0x57
        // 0x587CF6E7: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CF6EB: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587CF6EF: push edi
        __asm _emit 0x57
        // 0x587CF6F0: push ecx
        __asm _emit 0x51
        // 0x587CF6F1: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CF6F9: mov dword ptr [esi + 0xbc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6FF: cdq
        __asm _emit 0x99
        // 0x587CF700: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CF702: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CF704: lea eax, [eax + ebx + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x18
        __asm _emit 0x1E
        // 0x587CF708: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF70E: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF714: cdq
        __asm _emit 0x99
        // 0x587CF715: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587CF717: cdq
        __asm _emit 0x99
        // 0x587CF718: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587CF71A: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587CF71C: lea edx, [eax + ebp - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0xF6
        // 0x587CF720: lea eax, [esi + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF726: push eax
        __asm _emit 0x50
        // 0x587CF727: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF72D: call 0x587cecc0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CF732: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CF734: imul ecx, ecx, 0xb4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF73A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587CF73F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587CF741: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF747: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF74D: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587CF750: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587CF752: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587CF755: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587CF757: cdq
        __asm _emit 0x99
        // 0x587CF758: idiv dword ptr [esi + 0xa0]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF75E: pop edi
        __asm _emit 0x5F
        // 0x587CF75F: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF765: mov dword ptr [esi + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF76B: mov dword ptr [esi + 0xc0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF771: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587CF774: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF77A: imul eax, eax, 0xfffffc18
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CF780: cdq
        __asm _emit 0x99
        // 0x587CF781: idiv dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF787: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587CF78A: pop esi
        __asm _emit 0x5E
        // 0x587CF78B: pop ebp
        __asm _emit 0x5D
        // 0x587CF78C: pop ebx
        __asm _emit 0x5B
        // 0x587CF78D: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
