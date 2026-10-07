// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 196 bytes in 1 exact ranges.
// Source symbol alias: FUN_58977840.

// Ghidra body range 0x58977840..0x58977904; 196 mapped bytes.
extern "C" __declspec(naked) void FUN_58977840_segment_00() {
    __asm {
        // 0x58977840: push ebx
        __asm _emit 0x53
        // 0x58977841: push edi
        __asm _emit 0x57
        // 0x58977842: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58977846: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x58977848: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897784A: push edi
        __asm _emit 0x57
        // 0x5897784B: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5897784E: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58977850: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58977852: mov al, byte ptr [esp + 0x1c]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58977856: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58977859: mov dword ptr [edi + 0x148], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897785F: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58977861: mov dword ptr [ebx], 0x58977910
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x10
        __asm _emit 0x79
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58977867: je 0x589778d4
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x58977869: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x5897786C: mov eax, dword ptr [edi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x44
        // 0x5897786F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58977871: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58977879: jle 0x58977901
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897787F: push ebp
        __asm _emit 0x55
        // 0x58977880: push esi
        __asm _emit 0x56
        // 0x58977881: lea esi, [eax + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x58977884: add ebx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x40
        // 0x58977887: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58977889: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5897788C: mov ebp, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x04
        // 0x5897788F: push eax
        __asm _emit 0x50
        // 0x58977890: push eax
        __asm _emit 0x50
        // 0x58977891: push ecx
        __asm _emit 0x51
        // 0x58977892: call 0x58976c20
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58977897: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xFC
        // 0x5897789A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5897789D: push eax
        __asm _emit 0x50
        // 0x5897789E: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x589778A1: push edx
        __asm _emit 0x52
        // 0x589778A2: push eax
        __asm _emit 0x50
        // 0x589778A3: call 0x58976c20
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589778A8: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589778AB: push eax
        __asm _emit 0x50
        // 0x589778AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589778AE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589778B0: push edi
        __asm _emit 0x57
        // 0x589778B1: call dword ptr [ebp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x589778B4: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x589778B6: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x589778BA: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x589778BD: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x589778C0: inc eax
        __asm _emit 0x40
        // 0x589778C1: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x589778C4: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x54
        // 0x589778C7: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x589778C9: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x589778CD: jl 0x58977887
        __asm _emit 0x7C
        __asm _emit 0xB8
        // 0x589778CF: pop esi
        __asm _emit 0x5E
        // 0x589778D0: pop ebp
        __asm _emit 0x5D
        // 0x589778D1: pop edi
        __asm _emit 0x5F
        // 0x589778D2: pop ebx
        __asm _emit 0x5B
        // 0x589778D3: ret
        __asm _emit 0xC3
        // 0x589778D4: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x589778D7: push 0x500
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589778DC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589778DE: push edi
        __asm _emit 0x57
        // 0x589778DF: call dword ptr [ecx + 4]
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x589778E2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x589778E5: lea ecx, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x18
        // 0x589778E8: mov edx, 0xa
        __asm _emit 0xBA
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589778ED: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x589778EF: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x589778F2: add eax, 0x80
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589778F7: dec edx
        __asm _emit 0x4A
        // 0x589778F8: jne 0x589778ed
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x589778FA: mov dword ptr [ebx + 0x40], 0
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58977901: pop edi
        __asm _emit 0x5F
        // 0x58977902: pop ebx
        __asm _emit 0x5B
        // 0x58977903: ret
        __asm _emit 0xC3
    }
}
