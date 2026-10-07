// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 203 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889a990.

// Ghidra body range 0x5889A990..0x5889AA5B; 203 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a990_segment_00() {
    __asm {
        // 0x5889A990: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889A993: push ebx
        __asm _emit 0x53
        // 0x5889A994: push ebp
        __asm _emit 0x55
        // 0x5889A995: push esi
        __asm _emit 0x56
        // 0x5889A996: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889A998: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889A99B: push edi
        __asm _emit 0x57
        // 0x5889A99C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5889A99F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5889A9A1: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5889A9A3: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A9A8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A9AA: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A9AD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889A9AF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889A9B2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889A9B4: jne 0x5889a9ba
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889A9B6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5889A9B8: jmp 0x5889a9ed
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5889A9BA: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x5889A9BC: jbe 0x5889a9c3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889A9BE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889A9C3: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889A9C7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889A9C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889A9CB: je 0x5889a9d1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889A9CD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5889A9CF: je 0x5889a9d6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889A9D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889A9D6: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889A9DA: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5889A9DC: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889A9E1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889A9E3: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889A9E6: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5889A9E8: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5889A9EB: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5889A9ED: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5889A9F1: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5889A9F5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5889A9F9: push ecx
        __asm _emit 0x51
        // 0x5889A9FA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889A9FC: push edx
        __asm _emit 0x52
        // 0x5889A9FD: push eax
        __asm _emit 0x50
        // 0x5889A9FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889AA00: call 0x5889a370
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AA05: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5889AA08: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x5889AA0B: jbe 0x5889aa12
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889AA0D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AA12: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5889AA14: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5889AA16: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889AA1A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5889AA1C: jne 0x5889aa38
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5889AA1E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AA23: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889AA25: lea ecx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x7F
        // 0x5889AA28: lea edi, [ebx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xCB
        // 0x5889AA2B: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5889AA2E: ja 0x5889aa43
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x5889AA30: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5889AA32: je 0x5889aa3c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889AA34: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5889AA36: jmp 0x5889aa3e
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5889AA38: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889AA3A: jmp 0x5889aa25
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x5889AA3C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5889AA3E: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5889AA41: jae 0x5889aa48
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5889AA43: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x22
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AA48: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889AA4C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5889AA4F: pop edi
        __asm _emit 0x5F
        // 0x5889AA50: pop esi
        __asm _emit 0x5E
        // 0x5889AA51: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x5889AA53: pop ebp
        __asm _emit 0x5D
        // 0x5889AA54: pop ebx
        __asm _emit 0x5B
        // 0x5889AA55: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889AA58: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
