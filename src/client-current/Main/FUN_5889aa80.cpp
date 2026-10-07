// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 158 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889aa80.

// Ghidra body range 0x5889AA80..0x5889AB1E; 158 mapped bytes.
extern "C" __declspec(naked) void FUN_5889aa80_segment_00() {
    __asm {
        // 0x5889AA80: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5889AA83: push ebx
        __asm _emit 0x53
        // 0x5889AA84: push esi
        __asm _emit 0x56
        // 0x5889AA85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889AA87: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5889AA8A: push edi
        __asm _emit 0x57
        // 0x5889AA8B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5889AA8D: jne 0x5889aa93
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5889AA8F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889AA91: jmp 0x5889aaa9
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x5889AA93: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5889AA96: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5889AA98: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889AA9D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5889AA9F: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889AAA2: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5889AAA4: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5889AAA7: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5889AAA9: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5889AAAC: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5889AAAE: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5889AAB0: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x5889AAB5: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5889AAB7: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5889AABA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5889AABC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5889AABF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5889AAC1: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5889AAC3: jae 0x5889aaf7
        __asm _emit 0x73
        __asm _emit 0x32
        // 0x5889AAC5: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889AAC9: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5889AACE: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5889AAD2: push ecx
        __asm _emit 0x51
        // 0x5889AAD3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889AAD7: push edx
        __asm _emit 0x52
        // 0x5889AAD8: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5889AADB: push eax
        __asm _emit 0x50
        // 0x5889AADC: push ecx
        __asm _emit 0x51
        // 0x5889AADD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889AADF: push edi
        __asm _emit 0x57
        // 0x5889AAE0: call 0x58899ce0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AAE5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889AAE8: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x5889AAEB: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5889AAEE: pop edi
        __asm _emit 0x5F
        // 0x5889AAEF: pop esi
        __asm _emit 0x5E
        // 0x5889AAF0: pop ebx
        __asm _emit 0x5B
        // 0x5889AAF1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889AAF4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889AAF7: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x5889AAF9: jbe 0x5889ab00
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5889AAFB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x21
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889AB00: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889AB04: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889AB06: push edx
        __asm _emit 0x52
        // 0x5889AB07: push edi
        __asm _emit 0x57
        // 0x5889AB08: push eax
        __asm _emit 0x50
        // 0x5889AB09: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5889AB0D: push eax
        __asm _emit 0x50
        // 0x5889AB0E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889AB10: call 0x5889a990
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889AB15: pop edi
        __asm _emit 0x5F
        // 0x5889AB16: pop esi
        __asm _emit 0x5E
        // 0x5889AB17: pop ebx
        __asm _emit 0x5B
        // 0x5889AB18: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5889AB1B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
