// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 511 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743c80.

// Ghidra body range 0x58743C80..0x58743E7F; 511 mapped bytes.
extern "C" __declspec(naked) void FUN_58743c80_segment_00() {
    __asm {
        // 0x58743C80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58743C82: push 0x5897e078
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58743C87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743C8D: push eax
        __asm _emit 0x50
        // 0x58743C8E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x58743C91: push ebx
        __asm _emit 0x53
        // 0x58743C92: push ebp
        __asm _emit 0x55
        // 0x58743C93: push esi
        __asm _emit 0x56
        // 0x58743C94: push edi
        __asm _emit 0x57
        // 0x58743C95: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58743C9A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58743C9C: push eax
        __asm _emit 0x50
        // 0x58743C9D: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58743CA1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743CA7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743CA9: cmp dword ptr [edi + 0x1c], 0xaaaaaa9
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x1C
        __asm _emit 0xA9
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x0A
        // 0x58743CB0: jb 0x58743cfe
        __asm _emit 0x72
        __asm _emit 0x4C
        // 0x58743CB2: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x58743CB4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58743CB6: push 0x5898cecc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743CBB: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58743CBF: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743CC7: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58743CCB: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58743CD0: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x13
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743CD5: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743CD9: push eax
        __asm _emit 0x50
        // 0x58743CDA: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58743CDE: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58743CE2: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x16
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743CE7: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58743CEC: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58743CF0: push ecx
        __asm _emit 0x51
        // 0x58743CF1: mov dword ptr [esp + 0x38], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743CF9: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x8F
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743CFE: mov edx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58743D02: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743D05: mov esi, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58743D09: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58743D0B: push edx
        __asm _emit 0x52
        // 0x58743D0C: push eax
        __asm _emit 0x50
        // 0x58743D0D: push esi
        __asm _emit 0x56
        // 0x58743D0E: push eax
        __asm _emit 0x50
        // 0x58743D0F: call 0x58743a90
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743D14: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58743D16: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743D19: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743D1E: add dword ptr [edi + 0x1c], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x58743D21: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58743D23: jne 0x58743d35
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58743D25: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58743D28: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743D2B: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58743D2D: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58743D30: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x58743D33: jmp 0x58743d57
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58743D35: cmp byte ptr [esp + 0x6c], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x58743D3A: je 0x58743d49
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58743D3C: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x58743D3E: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743D41: cmp esi, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x58743D43: jne 0x58743d57
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58743D45: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58743D47: jmp 0x58743d57
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58743D49: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x58743D4C: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58743D4F: cmp esi, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58743D52: jne 0x58743d57
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58743D54: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58743D57: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58743D5A: cmp byte ptr [edx + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743D5E: lea eax, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58743D61: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58743D63: jne 0x58743e55
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743D69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743D70: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58743D72: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743D75: cmp ecx, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x0A
        // 0x58743D77: jne 0x58743dca
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58743D79: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58743D7C: cmp byte ptr [edx + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743D80: jne 0x58743d9b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58743D82: mov byte ptr [ecx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x58743D85: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x58743D88: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58743D8A: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58743D8D: mov byte ptr [ecx + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743D91: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58743D93: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58743D96: jmp 0x58743e45
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743D9B: cmp esi, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58743D9E: jne 0x58743daa
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58743DA0: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743DA2: push esi
        __asm _emit 0x56
        // 0x58743DA3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58743DA5: call 0x58743780
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743DAA: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743DAD: mov byte ptr [eax + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x58743DB0: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58743DB3: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743DB6: mov byte ptr [edx + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743DBA: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743DBD: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743DC0: push ecx
        __asm _emit 0x51
        // 0x58743DC1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58743DC3: call 0x587430e0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743DC8: jmp 0x58743e45
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x58743DCA: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x58743DCC: cmp byte ptr [edx + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743DD0: jne 0x58743de8
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58743DD2: mov byte ptr [ecx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x28
        // 0x58743DD5: mov byte ptr [edx + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x28
        // 0x58743DD8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58743DDA: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58743DDD: mov byte ptr [ecx + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743DE1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58743DE3: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58743DE6: jmp 0x58743e45
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x58743DE8: cmp esi, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x31
        // 0x58743DEA: jne 0x58743df6
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58743DEC: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743DEE: push esi
        __asm _emit 0x56
        // 0x58743DEF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58743DF1: call 0x587430e0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743DF6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743DF9: mov byte ptr [eax + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x58743DFC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58743DFF: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743E02: mov byte ptr [edx + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743E06: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743E09: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58743E0C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58743E0F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58743E11: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58743E14: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58743E16: cmp byte ptr [edx + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743E1A: jne 0x58743e1f
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58743E1C: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743E1F: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58743E22: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58743E25: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58743E28: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743E2B: jne 0x58743e32
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58743E2D: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x58743E30: jmp 0x58743e40
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58743E32: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58743E35: cmp eax, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x02
        // 0x58743E37: jne 0x58743e3d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58743E39: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x58743E3B: jmp 0x58743e40
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58743E3D: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x58743E40: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58743E42: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743E45: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58743E48: cmp byte ptr [ecx + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58743E4C: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58743E4F: je 0x58743d70
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743E55: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58743E58: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58743E5B: mov byte ptr [eax + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x28
        // 0x58743E5E: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58743E62: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58743E64: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x58743E67: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x58743E69: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58743E6D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58743E74: pop ecx
        __asm _emit 0x59
        // 0x58743E75: pop edi
        __asm _emit 0x5F
        // 0x58743E76: pop esi
        __asm _emit 0x5E
        // 0x58743E77: pop ebp
        __asm _emit 0x5D
        // 0x58743E78: pop ebx
        __asm _emit 0x5B
        // 0x58743E79: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x58743E7C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
