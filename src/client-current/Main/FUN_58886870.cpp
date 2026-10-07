// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 158 bytes in 1 exact ranges.
// Source symbol alias: FUN_58886870.

// Ghidra body range 0x58886870..0x5888690E; 158 mapped bytes.
extern "C" __declspec(naked) void FUN_58886870_segment_00() {
    __asm {
        // 0x58886870: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58886873: push ebx
        __asm _emit 0x53
        // 0x58886874: push esi
        __asm _emit 0x56
        // 0x58886875: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58886877: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5888687A: push edi
        __asm _emit 0x57
        // 0x5888687B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5888687D: jne 0x58886883
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5888687F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58886881: jmp 0x58886899
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58886883: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58886886: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58886888: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x5888688D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5888688F: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58886892: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58886894: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58886897: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58886899: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5888689C: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5888689E: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x588868A0: mov eax, 0x78787879
        __asm _emit 0xB8
        __asm _emit 0x79
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x78
        // 0x588868A5: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588868A7: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588868AA: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588868AC: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588868AF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588868B1: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588868B3: jae 0x588868e7
        __asm _emit 0x73
        __asm _emit 0x32
        // 0x588868B5: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588868B9: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588868BE: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588868C2: push ecx
        __asm _emit 0x51
        // 0x588868C3: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588868C7: push edx
        __asm _emit 0x52
        // 0x588868C8: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588868CB: push eax
        __asm _emit 0x50
        // 0x588868CC: push ecx
        __asm _emit 0x51
        // 0x588868CD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588868CF: push edi
        __asm _emit 0x57
        // 0x588868D0: call 0x5887cb30
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x62
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588868D5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588868D8: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x22
        // 0x588868DB: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588868DE: pop edi
        __asm _emit 0x5F
        // 0x588868DF: pop esi
        __asm _emit 0x5E
        // 0x588868E0: pop ebx
        __asm _emit 0x5B
        // 0x588868E1: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588868E4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588868E7: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588868E9: jbe 0x588868f0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588868EB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x63
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588868F0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588868F4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588868F6: push edx
        __asm _emit 0x52
        // 0x588868F7: push edi
        __asm _emit 0x57
        // 0x588868F8: push eax
        __asm _emit 0x50
        // 0x588868F9: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588868FD: push eax
        __asm _emit 0x50
        // 0x588868FE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58886900: call 0x58883eb0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58886905: pop edi
        __asm _emit 0x5F
        // 0x58886906: pop esi
        __asm _emit 0x5E
        // 0x58886907: pop ebx
        __asm _emit 0x5B
        // 0x58886908: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5888690B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
