// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 191 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878d4d0.

// Ghidra body range 0x5878D4D0..0x5878D58F; 191 mapped bytes.
extern "C" __declspec(naked) void FUN_5878d4d0_segment_00() {
    __asm {
        // 0x5878D4D0: push ecx
        __asm _emit 0x51
        // 0x5878D4D1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878D4D5: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878D4D9: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x5878D4DC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5878D4DE: jne 0x5878d4e9
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5878D4E0: cmp eax, dword ptr [ecx + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5878D4E3: jbe 0x5878d56f
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D4E9: push ebx
        __asm _emit 0x53
        // 0x5878D4EA: push ebp
        __asm _emit 0x55
        // 0x5878D4EB: push esi
        __asm _emit 0x56
        // 0x5878D4EC: push edi
        __asm _emit 0x57
        // 0x5878D4ED: mov edi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x14
        // 0x5878D4F0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5878D4F2: jae 0x5878d568
        __asm _emit 0x73
        __asm _emit 0x74
        // 0x5878D4F4: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5878D4F6: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x5878D4F8: ja 0x5878d568
        __asm _emit 0x77
        __asm _emit 0x6E
        // 0x5878D4FA: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D4FF: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x5878D501: add edi, esi
        __asm _emit 0x03
        __asm _emit 0xFE
        // 0x5878D503: cmp dword ptr [ecx + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x5878D507: jb 0x5878d514
        __asm _emit 0x72
        __asm _emit 0x0B
        // 0x5878D509: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5878D50C: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878D510: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5878D512: jmp 0x5878d51b
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x5878D514: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5878D517: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878D51B: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878D51F: lea ebx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5878D522: movsx eax, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5878D526: push edi
        __asm _emit 0x57
        // 0x5878D527: push eax
        __asm _emit 0x50
        // 0x5878D528: push ebx
        __asm _emit 0x53
        // 0x5878D529: call 0x5897ced4
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xF9
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D52E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878D530: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878D533: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878D535: je 0x5878d568
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5878D537: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878D53B: push ecx
        __asm _emit 0x51
        // 0x5878D53C: push ebp
        __asm _emit 0x55
        // 0x5878D53D: push esi
        __asm _emit 0x56
        // 0x5878D53E: call 0x58748020
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xAA
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5878D543: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878D546: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878D548: je 0x5878d573
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5878D54A: movsx edx, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x5878D54E: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x5878D550: lea edi, [edi + ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x1F
        __asm _emit 0xFF
        // 0x5878D554: push edi
        __asm _emit 0x57
        // 0x5878D555: push edx
        __asm _emit 0x52
        // 0x5878D556: lea ebx, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x01
        // 0x5878D559: push ebx
        __asm _emit 0x53
        // 0x5878D55A: call 0x5897ced4
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xF9
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x5878D55F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878D561: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5878D564: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878D566: jne 0x5878d537
        __asm _emit 0x75
        __asm _emit 0xCF
        // 0x5878D568: pop edi
        __asm _emit 0x5F
        // 0x5878D569: pop esi
        __asm _emit 0x5E
        // 0x5878D56A: pop ebp
        __asm _emit 0x5D
        // 0x5878D56B: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5878D56E: pop ebx
        __asm _emit 0x5B
        // 0x5878D56F: pop ecx
        __asm _emit 0x59
        // 0x5878D570: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5878D573: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878D577: cmp dword ptr [eax + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x5878D57B: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878D57F: jb 0x5878d583
        __asm _emit 0x72
        __asm _emit 0x02
        // 0x5878D581: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5878D583: pop edi
        __asm _emit 0x5F
        // 0x5878D584: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878D586: pop esi
        __asm _emit 0x5E
        // 0x5878D587: pop ebp
        __asm _emit 0x5D
        // 0x5878D588: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5878D58A: pop ebx
        __asm _emit 0x5B
        // 0x5878D58B: pop ecx
        __asm _emit 0x59
        // 0x5878D58C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
