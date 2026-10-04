// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888CEE0 .. +0x15B bytes.
// Source symbol alias: FUN_5888cee0.
extern "C" __declspec(naked) void FUN_5888cee0() {
    __asm {
        // 0x5888CEE0: push edi
        __asm _emit 0x57
        // 0x5888CEE1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5888CEE3: mov eax, dword ptr [edi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CEE9: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5888CEEC: je 0x5888d039
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CEF2: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5888CEF5: je 0x5888d039
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CEFB: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF01: push ebp
        __asm _emit 0x55
        // 0x5888CF02: push esi
        __asm _emit 0x56
        // 0x5888CF03: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF09: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF0E: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5888CF10: cmp esi, 6
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x5888CF13: jge 0x5888cf2c
        __asm _emit 0x7D
        __asm _emit 0x17
        // 0x5888CF15: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF1B: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF21: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF26: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x5888CF28: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5888CF2A: jmp 0x5888cf31
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5888CF2C: mov ebp, 6
        __asm _emit 0xBD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF31: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5888CF33: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5888CF35: jle 0x5888d016
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF3B: push ebx
        __asm _emit 0x53
        // 0x5888CF3C: lea ebx, [edi + 0x4d0]
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF42: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF48: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF4D: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF53: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5888CF55: push eax
        __asm _emit 0x50
        // 0x5888CF56: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF5B: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5888CF5E: je 0x5888cffb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF64: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF6A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xB2
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF6F: mov ecx, dword ptr [edi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF75: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5888CF77: push eax
        __asm _emit 0x50
        // 0x5888CF78: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xB1
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888CF7D: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888CF83: add eax, 0x68e
        __asm _emit 0x05
        __asm _emit 0x8E
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF88: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF8E: jle 0x5888cfa8
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5888CF90: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888CF92: jl 0x5888cfa8
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5888CF94: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CF9B: je 0x5888cfa8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888CF9D: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CFA3: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x5888CFA6: jmp 0x5888cfaa
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888CFA8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888CFAA: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5888CFAC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888CFAF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888CFB1: je 0x5888cfdb
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5888CFB3: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5888CFB6: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888CFB9: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888CFBC: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5888CFBF: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5888CFC2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888CFC4: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888CFC7: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5888CFC9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888CFCC: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888CFCF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5888CFD2: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5888CFD5: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5888CFD8: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888CFDB: cmp dword ptr [edi + 0x15c], 0x120000
        __asm _emit 0x81
        __asm _emit 0xBF
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5888CFE5: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5888CFE7: jne 0x5888cff0
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5888CFE9: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5888CFEE: jmp 0x5888d004
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5888CFF0: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CFF5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888CFF9: jmp 0x5888d004
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5888CFFB: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x5888CFFD: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D004: inc esi
        __asm _emit 0x46
        // 0x5888D005: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5888D008: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5888D00A: jl 0x5888cf42
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x32
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888D010: cmp esi, 6
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x06
        // 0x5888D013: pop ebx
        __asm _emit 0x5B
        // 0x5888D014: jge 0x5888d037
        __asm _emit 0x7D
        __asm _emit 0x21
        // 0x5888D016: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D01B: lea ecx, [edi + esi*4 + 0x4d0]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D022: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x5888D024: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888D026: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D02B: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5888D02F: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5888D032: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5888D035: jne 0x5888d024
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x5888D037: pop esi
        __asm _emit 0x5E
        // 0x5888D038: pop ebp
        __asm _emit 0x5D
        // 0x5888D039: pop edi
        __asm _emit 0x5F
        // 0x5888D03A: ret
        __asm _emit 0xC3
    }
}
