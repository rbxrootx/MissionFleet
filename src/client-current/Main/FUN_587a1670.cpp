// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1670 .. +0x134 bytes.
// Source symbol alias: FUN_587a1670.
extern "C" __declspec(naked) void FUN_587a1670() {
    __asm {
        // 0x587A1670: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A1672: push 0x5898085e
        __asm _emit 0x68
        __asm _emit 0x5E
        __asm _emit 0x08
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1677: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A167D: push eax
        __asm _emit 0x50
        // 0x587A167E: push ecx
        __asm _emit 0x51
        // 0x587A167F: push ebx
        __asm _emit 0x53
        // 0x587A1680: push esi
        __asm _emit 0x56
        // 0x587A1681: push edi
        __asm _emit 0x57
        // 0x587A1682: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A1687: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A1689: push eax
        __asm _emit 0x50
        // 0x587A168A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A168E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1694: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A1696: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A169A: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587A169E: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A16A2: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A16A6: push eax
        __asm _emit 0x50
        // 0x587A16A7: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A16AB: push ecx
        __asm _emit 0x51
        // 0x587A16AC: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A16B0: push edx
        __asm _emit 0x52
        // 0x587A16B1: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A16B5: push eax
        __asm _emit 0x50
        // 0x587A16B6: push ecx
        __asm _emit 0x51
        // 0x587A16B7: push edx
        __asm _emit 0x52
        // 0x587A16B8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A16BA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x1A
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x587A16BF: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587A16C3: push eax
        __asm _emit 0x50
        // 0x587A16C4: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587A16C8: lea edi, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x587A16CB: push ecx
        __asm _emit 0x51
        // 0x587A16CC: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A16CE: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A16D6: mov dword ptr [esi], 0x5899853c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A16DC: call 0x587a0c30
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A16E1: lea edx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587A16E5: push edx
        __asm _emit 0x52
        // 0x587A16E6: lea eax, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587A16EA: lea ebx, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x587A16ED: push eax
        __asm _emit 0x50
        // 0x587A16EE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A16F0: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587A16F5: call 0x587a0c30
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A16FA: mov byte ptr [esp + 0x1c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        // 0x587A16FF: call dword ptr [0x5898c120]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A1705: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A170B: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587A170E: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A1711: push edx
        __asm _emit 0x52
        // 0x587A1712: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A1714: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x4F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A1719: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A171C: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A171F: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587A1722: mov dword ptr [edi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1729: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587A172B: mov edi, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x587A172E: mov dword ptr [edi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x587A1731: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587A1734: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A1737: push ecx
        __asm _emit 0x51
        // 0x587A1738: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A173A: call 0x58786680
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x4F
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587A173F: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587A1742: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A1745: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587A1748: mov dword ptr [ebx + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A174F: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587A1751: mov ebx, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x18
        // 0x587A1754: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A1756: mov dword ptr [ebx + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5B
        __asm _emit 0x08
        // 0x587A1759: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A175F: mov ecx, 0x28
        __asm _emit 0xB9
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1764: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x587A1766: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A1768: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A176A: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587A176D: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1773: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1778: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587A177A: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587A177D: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587A177F: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587A1781: push ecx
        __asm _emit 0x51
        // 0x587A1782: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587A1787: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587A178A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A178D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A178F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A1793: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A179A: pop ecx
        __asm _emit 0x59
        // 0x587A179B: pop edi
        __asm _emit 0x5F
        // 0x587A179C: pop esi
        __asm _emit 0x5E
        // 0x587A179D: pop ebx
        __asm _emit 0x5B
        // 0x587A179E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A17A1: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
