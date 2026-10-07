// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 292 bytes in 1 exact ranges.
// Source symbol alias: FUN_5897a4c0.

// Ghidra body range 0x5897A4C0..0x5897A5E4; 292 mapped bytes.
extern "C" __declspec(naked) void FUN_5897a4c0_segment_00() {
    __asm {
        // 0x5897A4C0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x5897A4C3: push ebx
        __asm _emit 0x53
        // 0x5897A4C4: push ebp
        __asm _emit 0x55
        // 0x5897A4C5: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897A4C9: push edi
        __asm _emit 0x57
        // 0x5897A4CA: mov ebx, dword ptr [ebp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A4D0: mov eax, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x3C
        // 0x5897A4D3: imul eax, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC3
        // 0x5897A4D6: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5897A4D9: mov edi, dword ptr [ebp + 0x144]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A4DF: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5897A4E2: shl edx, 2
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x02
        // 0x5897A4E5: push edx
        __asm _emit 0x52
        // 0x5897A4E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897A4E8: push ebp
        __asm _emit 0x55
        // 0x5897A4E9: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x5897A4EB: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x5897A4EE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5897A4F1: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5897A4F5: mov eax, dword ptr [ebp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x44
        // 0x5897A4F8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897A4FA: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A502: jle 0x5897a5dd
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A508: push esi
        __asm _emit 0x56
        // 0x5897A509: lea esi, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x5B
        // 0x5897A50C: shl esi, 2
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x02
        // 0x5897A50F: lea ecx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5897A512: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x5897A515: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897A519: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897A51D: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897A521: jmp 0x5897a52b
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5897A523: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897A527: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5897A52B: lea eax, [ebx + ebx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x5B
        // 0x5897A52E: mov edi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x5897A531: push eax
        __asm _emit 0x50
        // 0x5897A532: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x5897A535: imul eax, dword ptr [ebp + 0xd8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897A53C: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x5897A53F: cdq
        __asm _emit 0x99
        // 0x5897A540: idiv dword ptr [ecx]
        __asm _emit 0xF7
        __asm _emit 0x39
        // 0x5897A542: push eax
        __asm _emit 0x50
        // 0x5897A543: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897A545: push ebp
        __asm _emit 0x55
        // 0x5897A546: call dword ptr [edi + 8]
        __asm _emit 0xFF
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5897A549: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5897A54D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897A550: lea edi, [ecx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x99
        // 0x5897A553: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5897A555: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5897A557: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5897A559: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x5897A55C: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897A560: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5897A562: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5897A564: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x5897A567: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5897A569: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x5897A56B: jle 0x5897a59e
        __asm _emit 0x7E
        __asm _emit 0x31
        // 0x5897A56D: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897A571: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5897A573: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5897A576: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x5897A578: lea edx, [eax + ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xD8
        // 0x5897A57B: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5897A57D: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A581: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x5897A583: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5897A586: mov dword ptr [esi + eax], edi
        __asm _emit 0x89
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x5897A589: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5897A58B: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5897A58D: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A591: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5897A594: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5897A597: dec edi
        __asm _emit 0x4F
        // 0x5897A598: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897A59C: jne 0x5897a581
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x5897A59E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897A5A2: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5897A5A6: lea edx, [ebx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x9B
        // 0x5897A5A9: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5897A5AB: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897A5AF: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5897A5B2: lea edx, [eax + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x5897A5B5: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897A5B9: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5897A5BD: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897A5C1: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5897A5C5: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x5897A5C8: inc eax
        __asm _emit 0x40
        // 0x5897A5C9: add edx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x54
        // 0x5897A5CC: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5897A5CE: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897A5D2: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897A5D6: jl 0x5897a523
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897A5DC: pop esi
        __asm _emit 0x5E
        // 0x5897A5DD: pop edi
        __asm _emit 0x5F
        // 0x5897A5DE: pop ebp
        __asm _emit 0x5D
        // 0x5897A5DF: pop ebx
        __asm _emit 0x5B
        // 0x5897A5E0: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5897A5E3: ret
        __asm _emit 0xC3
    }
}
