// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 345 bytes in 2 exact ranges.
// Source symbol alias: FUN_588fad60.

// Ghidra body range 0x588FAD60..0x588FAEA5; 325 mapped bytes.
extern "C" __declspec(naked) void FUN_588fad60_segment_00() {
    __asm {
        // 0x588FAD60: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FAD64: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FAD67: push ebx
        __asm _emit 0x53
        // 0x588FAD68: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588FAD6A: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588FAD6D: mov ecx, 0xfffffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x588FAD72: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588FAD74: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588FAD76: jae 0x588fad7d
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588FAD78: call 0x588fac50
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAD7D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FAD7F: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588FAD81: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588FAD84: jae 0x588fad8b
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588FAD86: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAD8B: push ebp
        __asm _emit 0x55
        // 0x588FAD8C: push esi
        __asm _emit 0x56
        // 0x588FAD8D: push edi
        __asm _emit 0x57
        // 0x588FAD8E: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588FAD90: jae 0x588fada3
        __asm _emit 0x73
        __asm _emit 0x11
        // 0x588FAD92: mov esi, 0xfffffff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x0F
        // 0x588FAD97: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x588FAD99: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588FAD9B: ja 0x588fada3
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x588FAD9D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588FAD9F: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FADA3: mov esi, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x18
        // 0x588FADA6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588FADA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FADAA: push eax
        __asm _emit 0x50
        // 0x588FADAB: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FADAF: call 0x587ab430
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588FADB4: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x588FADB7: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FADBB: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x588FADBD: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x588FADBF: lea edi, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x06
        // 0x588FADC2: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588FADC5: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FADC7: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FADC9: lea edx, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x0E
        // 0x588FADCC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FADCE: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588FADD0: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FADD3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FADD6: lea ecx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FADDD: lea ebp, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x39
        // 0x588FADE0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FADE2: jbe 0x588fadf0
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x588FADE4: push ecx
        __asm _emit 0x51
        // 0x588FADE5: push edx
        __asm _emit 0x52
        // 0x588FADE6: push ecx
        __asm _emit 0x51
        // 0x588FADE7: push edi
        __asm _emit 0x57
        // 0x588FADE8: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x1E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FADED: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FADF0: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FADF4: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FADF8: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588FADFA: ja 0x588fae3e
        __asm _emit 0x77
        __asm _emit 0x42
        // 0x588FADFC: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x588FADFF: sar esi, 2
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x588FAE02: lea ecx, [esi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAE09: lea edi, [ecx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x29
        // 0x588FAE0C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FAE0E: jbe 0x588fae20
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x588FAE10: push ecx
        __asm _emit 0x51
        // 0x588FAE11: push eax
        __asm _emit 0x50
        // 0x588FAE12: push ecx
        __asm _emit 0x51
        // 0x588FAE13: push ebp
        __asm _emit 0x55
        // 0x588FAE14: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x1E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAE19: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FAE1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FAE20: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FAE24: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588FAE26: je 0x588fae30
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588FAE28: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FAE2C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAE2E: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x588FAE30: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FAE34: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588FAE36: jbe 0x588fae98
        __asm _emit 0x76
        __asm _emit 0x60
        // 0x588FAE38: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588FAE3A: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x588FAE3C: jmp 0x588fae94
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x588FAE3E: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x588FAE41: lea edi, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAE48: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588FAE4A: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FAE4D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAE4F: jbe 0x588fae61
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x588FAE51: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FAE53: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588FAE55: push eax
        __asm _emit 0x50
        // 0x588FAE56: push ecx
        __asm _emit 0x51
        // 0x588FAE57: push eax
        __asm _emit 0x50
        // 0x588FAE58: push ebp
        __asm _emit 0x55
        // 0x588FAE59: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x1D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAE5E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FAE61: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x588FAE64: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FAE68: lea ecx, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x588FAE6B: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x588FAE6D: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x588FAE6F: sar esi, 2
        __asm _emit 0xC1
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x588FAE72: lea eax, [esi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAE79: lea edi, [eax + ebp]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x28
        // 0x588FAE7C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FAE7E: jbe 0x588fae8c
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x588FAE80: push eax
        __asm _emit 0x50
        // 0x588FAE81: push ecx
        __asm _emit 0x51
        // 0x588FAE82: push eax
        __asm _emit 0x50
        // 0x588FAE83: push ebp
        __asm _emit 0x55
        // 0x588FAE84: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x1D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAE89: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FAE8C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FAE90: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FAE92: jbe 0x588fae98
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x588FAE94: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAE96: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xF3
        __asm _emit 0xAB
        // 0x588FAE98: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x588FAE9B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAE9D: je 0x588faea8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588FAE9F: push eax
        __asm _emit 0x50
        // 0x588FAEA0: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x1D
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Ghidra body range 0x588FAEA8..0x588FAEBC; 20 mapped bytes.
extern "C" __declspec(naked) void FUN_588fad60_segment_01() {
    __asm {
        // 0x588FAEA8: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FAEAC: add dword ptr [ebx + 0x14], edx
        __asm _emit 0x01
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x588FAEAF: pop edi
        __asm _emit 0x5F
        // 0x588FAEB0: pop esi
        __asm _emit 0x5E
        // 0x588FAEB1: mov dword ptr [ebx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x588FAEB4: pop ebp
        __asm _emit 0x5D
        // 0x588FAEB5: pop ebx
        __asm _emit 0x5B
        // 0x588FAEB6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FAEB9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
