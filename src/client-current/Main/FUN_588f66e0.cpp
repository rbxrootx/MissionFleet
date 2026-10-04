// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F66E0 .. +0x1A8 bytes.
// Source symbol alias: FUN_588f66e0.
extern "C" __declspec(naked) void FUN_588f66e0() {
    __asm {
        // 0x588F66E0: push ecx
        __asm _emit 0x51
        // 0x588F66E1: push esi
        __asm _emit 0x56
        // 0x588F66E2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F66E4: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588F66E7: push edi
        __asm _emit 0x57
        // 0x588F66E8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588F66EA: jne 0x588f66f0
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588F66EC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588F66EE: jmp 0x588f66fa
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588F66F0: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588F66F3: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F66F5: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F66F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F66FA: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F66FE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F6700: je 0x588f6882
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6706: push ebx
        __asm _emit 0x53
        // 0x588F6707: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x588F670A: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588F670C: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F670E: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F6711: mov edx, 0x3fffffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x3F
        // 0x588F6716: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F6718: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588F671A: jae 0x588f6721
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588F671C: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6721: lea edx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x588F6724: push ebp
        __asm _emit 0x55
        // 0x588F6725: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588F6727: jae 0x588f67e2
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F672D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F672F: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588F6731: mov ebx, 0x3fffffff
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x3F
        // 0x588F6736: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x588F6738: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588F673A: jae 0x588f674a
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x588F673C: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6744: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F6748: jmp 0x588f6750
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588F674A: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x588F674C: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F6750: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588F6752: jae 0x588f675a
        __asm _emit 0x73
        __asm _emit 0x06
        // 0x588F6754: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F6758: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F675A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F675C: push ecx
        __asm _emit 0x51
        // 0x588F675D: call 0x587ab430
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588F6762: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6766: sub ebx, dword ptr [esi + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588F6769: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588F676C: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588F676E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6772: push eax
        __asm _emit 0x50
        // 0x588F6773: sar ebx, 2
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x02
        // 0x588F6776: push edi
        __asm _emit 0x57
        // 0x588F6777: lea ecx, [ebp + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x9D
        __asm _emit 0x00
        // 0x588F677B: push ecx
        __asm _emit 0x51
        // 0x588F677C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F677E: call 0x588ea550
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6783: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F6787: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588F678A: push ebp
        __asm _emit 0x55
        // 0x588F678B: push edx
        __asm _emit 0x52
        // 0x588F678C: push eax
        __asm _emit 0x50
        // 0x588F678D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F678F: call 0x587ab490
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588F6794: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588F6797: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F679B: add ebx, edi
        __asm _emit 0x03
        __asm _emit 0xDF
        // 0x588F679D: lea ecx, [ebp + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x9D
        __asm _emit 0x00
        // 0x588F67A1: push ecx
        __asm _emit 0x51
        // 0x588F67A2: push edx
        __asm _emit 0x52
        // 0x588F67A3: push eax
        __asm _emit 0x50
        // 0x588F67A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F67A6: call 0x587ab490
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588F67AB: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588F67AE: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588F67B1: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F67B3: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588F67B6: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x588F67B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F67BA: je 0x588f67c5
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F67BC: push eax
        __asm _emit 0x50
        // 0x588F67BD: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F67C2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F67C5: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F67C9: lea ecx, [ebp + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xBD
        __asm _emit 0x00
        // 0x588F67CD: lea eax, [ebp + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x95
        __asm _emit 0x00
        // 0x588F67D1: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588F67D4: pop ebp
        __asm _emit 0x5D
        // 0x588F67D5: pop ebx
        __asm _emit 0x5B
        // 0x588F67D6: pop edi
        __asm _emit 0x5F
        // 0x588F67D7: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x588F67DA: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588F67DD: pop esi
        __asm _emit 0x5E
        // 0x588F67DE: pop ecx
        __asm _emit 0x59
        // 0x588F67DF: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588F67E2: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F67E6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F67EA: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588F67EC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588F67EE: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588F67F1: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588F67F3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F67F5: lea ebp, [edi*4]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F67FC: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6800: jae 0x588f684e
        __asm _emit 0x73
        __asm _emit 0x4C
        // 0x588F6802: lea ecx, [eax + ebp]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x588F6805: push ecx
        __asm _emit 0x51
        // 0x588F6806: push ebx
        __asm _emit 0x53
        // 0x588F6807: push eax
        __asm _emit 0x50
        // 0x588F6808: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F680A: call 0x587ab490
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588F680F: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588F6812: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F6814: sub ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F6818: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F681C: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588F681F: push edx
        __asm _emit 0x52
        // 0x588F6820: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x588F6822: push edi
        __asm _emit 0x57
        // 0x588F6823: push eax
        __asm _emit 0x50
        // 0x588F6824: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6826: call 0x588ea550
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F682B: add dword ptr [esi + 0x10], ebp
        __asm _emit 0x01
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588F682E: mov esi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x588F6831: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F6835: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6839: push edx
        __asm _emit 0x52
        // 0x588F683A: sub esi, ebp
        __asm _emit 0x2B
        __asm _emit 0xF5
        // 0x588F683C: push esi
        __asm _emit 0x56
        // 0x588F683D: push eax
        __asm _emit 0x50
        // 0x588F683E: call 0x58849340
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x2A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588F6843: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F6846: pop ebp
        __asm _emit 0x5D
        // 0x588F6847: pop ebx
        __asm _emit 0x5B
        // 0x588F6848: pop edi
        __asm _emit 0x5F
        // 0x588F6849: pop esi
        __asm _emit 0x5E
        // 0x588F684A: pop ecx
        __asm _emit 0x59
        // 0x588F684B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588F684E: push ebx
        __asm _emit 0x53
        // 0x588F684F: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x588F6851: push ebx
        __asm _emit 0x53
        // 0x588F6852: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x588F6854: push edi
        __asm _emit 0x57
        // 0x588F6855: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6857: call 0x587ab490
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x4C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588F685C: push ebx
        __asm _emit 0x53
        // 0x588F685D: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588F6860: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6864: push edi
        __asm _emit 0x57
        // 0x588F6865: push eax
        __asm _emit 0x50
        // 0x588F6866: call 0x587a50b0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588F686B: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F686F: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6873: push ecx
        __asm _emit 0x51
        // 0x588F6874: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x588F6876: push ebp
        __asm _emit 0x55
        // 0x588F6877: push eax
        __asm _emit 0x50
        // 0x588F6878: call 0x58849340
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x2A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588F687D: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588F6880: pop ebp
        __asm _emit 0x5D
        // 0x588F6881: pop ebx
        __asm _emit 0x5B
        // 0x588F6882: pop edi
        __asm _emit 0x5F
        // 0x588F6883: pop esi
        __asm _emit 0x5E
        // 0x588F6884: pop ecx
        __asm _emit 0x59
        // 0x588F6885: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
