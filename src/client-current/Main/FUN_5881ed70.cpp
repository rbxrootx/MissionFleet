// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 550 bytes in 2 exact ranges.
// Source symbol alias: FUN_5881ed70.

// Ghidra body range 0x5881ED70..0x5881EF7A; 522 mapped bytes.
extern "C" __declspec(naked) void FUN_5881ed70_segment_00() {
    __asm {
        // 0x5881ED70: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5881ED76: push ebx
        __asm _emit 0x53
        // 0x5881ED77: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x5881ED7A: push esi
        __asm _emit 0x56
        // 0x5881ED7B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881ED7D: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5881ED80: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5881ED83: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5881ED86: push edi
        __asm _emit 0x57
        // 0x5881ED87: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5881ED8A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x5881ED8C: cdq
        __asm _emit 0x99
        // 0x5881ED8D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5881ED8F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5881ED91: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x5881ED94: jge 0x5881eda4
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x5881ED96: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5881ED98: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x5881ED9A: cdq
        __asm _emit 0x99
        // 0x5881ED9B: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5881ED9D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5881ED9F: cmp eax, 0x28
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x28
        // 0x5881EDA2: jl 0x5881edaf
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x5881EDA4: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5881EDA9: je 0x5881ef96
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDAF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5881EDB3: movzx ecx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x5E
        // 0x5881EDB7: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x5881EDBA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5881EDBC: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5881EDBF: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5881EDC1: mov ecx, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDC7: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5881EDC9: lea edx, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xD1
        // 0x5881EDCC: imul edx, edx, 0xe0
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDD2: test dword ptr [edx + 0x589cfcec], 0x40000000
        __asm _emit 0xF7
        __asm _emit 0x82
        __asm _emit 0xEC
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5881EDDC: je 0x5881ef96
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDE2: cmp dword ptr [esi + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDE9: push ebp
        __asm _emit 0x55
        // 0x5881EDEA: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDEF: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5881EDF2: mov dword ptr [esi + 0xd20], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EDF8: jne 0x5881ee00
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5881EDFA: mov dword ptr [esi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE00: mov eax, dword ptr [eax + 0x1f0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE06: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x5881EE09: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE0F: lea edi, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE15: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5881EE18: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881EE1A: je 0x5881ee44
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881EE1C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5881EE1F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881EE22: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5881EE25: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881EE28: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881EE2B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881EE2D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881EE30: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881EE32: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881EE35: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881EE38: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881EE3B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881EE3E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881EE41: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881EE44: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881EE47: mov edx, dword ptr [ecx + 0x1ec]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE4D: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5881EE50: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE56: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5881EE59: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881EE5B: je 0x5881ee85
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881EE5D: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5881EE60: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881EE63: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5881EE66: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881EE69: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881EE6C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881EE6E: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881EE71: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881EE73: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881EE76: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881EE79: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881EE7C: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881EE7F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881EE82: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881EE85: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881EE88: mov edx, dword ptr [ecx + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE8E: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5881EE91: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE97: lea ebx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EE9D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5881EEA0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881EEA2: je 0x5881eecc
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881EEA4: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5881EEA7: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881EEAA: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5881EEAD: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881EEB0: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881EEB3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881EEB5: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881EEB8: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881EEBA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881EEBD: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881EEC0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881EEC3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881EEC6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881EEC9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881EECC: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881EECF: mov edx, dword ptr [ecx + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EED5: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5881EED8: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EEDE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5881EEE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5881EEE3: je 0x5881ef0d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5881EEE5: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5881EEE8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5881EEEB: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5881EEEE: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5881EEF1: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5881EEF4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5881EEF6: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5881EEF9: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5881EEFB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5881EEFE: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5881EF01: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5881EF04: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5881EF07: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5881EF0A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5881EF0D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5881EF10: mov edx, dword ptr [ecx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF16: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5881EF19: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF1F: push eax
        __asm _emit 0x50
        // 0x5881EF20: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x2D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881EF25: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5881EF27: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881EF2C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881EF31: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5881EF33: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881EF38: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881EF3D: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF43: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF48: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881EF4D: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF53: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF58: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x3D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5881EF5D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5881EF5F: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF64: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881EF66: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5881EF6A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5881EF6D: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5881EF6F: jne 0x5881ef64
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5881EF71: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5881EF73: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881EF78: jmp 0x5881ef80
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5881EF80..0x5881EF9C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_5881ed70_segment_01() {
    __asm {
        // 0x5881EF80: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5881EF82: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5881EF86: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5881EF89: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5881EF8B: jne 0x5881ef80
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5881EF8D: push edx
        __asm _emit 0x52
        // 0x5881EF8E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881EF90: call 0x5881e430
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881EF95: pop ebp
        __asm _emit 0x5D
        // 0x5881EF96: pop edi
        __asm _emit 0x5F
        // 0x5881EF97: pop esi
        __asm _emit 0x5E
        // 0x5881EF98: pop ebx
        __asm _emit 0x5B
        // 0x5881EF99: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
