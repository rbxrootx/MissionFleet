// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1091 bytes in 1 exact ranges.
// Source symbol alias: FUN_58784b10.

// Ghidra body range 0x58784B10..0x58784F53; 1091 mapped bytes.
extern "C" __declspec(naked) void FUN_58784b10_segment_00() {
    __asm {
        // 0x58784B10: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58784B12: push 0x589809ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58784B17: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B1D: push eax
        __asm _emit 0x50
        // 0x58784B1E: push ecx
        __asm _emit 0x51
        // 0x58784B1F: push ebx
        __asm _emit 0x53
        // 0x58784B20: push ebp
        __asm _emit 0x55
        // 0x58784B21: push esi
        __asm _emit 0x56
        // 0x58784B22: push edi
        __asm _emit 0x57
        // 0x58784B23: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58784B28: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58784B2A: push eax
        __asm _emit 0x50
        // 0x58784B2B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58784B2F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B35: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58784B37: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784B3B: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58784B3E: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B46: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58784B48: jl 0x58784c9b
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B4E: cmp esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0A
        // 0x58784B51: jle 0x58784c9b
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B57: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784B5D: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784B63: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784B69: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58784B6B: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784B71: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784B76: mov ebx, 0x1e
        __asm _emit 0xBB
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B7B: lea esi, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xB6
        // 0x58784B7E: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784B80: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x58784B83: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784B85: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58784B87: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x58784B89: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58784B8B: ja 0x58784c9b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B91: mov eax, 0x9c4
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784B96: cmp dword ptr [ebp + 4], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58784B99: jbe 0x58784ba4
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58784B9B: mov dword ptr [ebp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x58784B9E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784BA4: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58784BA7: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784BAC: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58784BAE: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x58784BB0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784BB2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784BB5: lea ebx, [edx + eax + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x1E
        // 0x58784BB9: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784BBF: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784BC5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58784BC7: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784BCD: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784BD3: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58784BD6: add esi, dword ptr [ebp + 4]
        __asm _emit 0x03
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58784BD9: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58784BDE: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x58784BE1: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58784BE3: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x58784BE6: imul edx, edx, 0x2710
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784BEC: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58784BEE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58784BF0: jge 0x58784c83
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784BF6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784BFB: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58784BFD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58784C00: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784C02: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784C05: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784C07: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784C09: jge 0x58784c10
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58784C0B: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x58784C0E: jmp 0x58784c7b
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x58784C10: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784C15: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58784C17: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58784C1A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784C1C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784C1F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784C21: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784C23: jge 0x58784c2d
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58784C25: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C27: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C29: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C2B: jmp 0x58784c7b
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x58784C2D: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784C32: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58784C34: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58784C37: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784C39: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784C3C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784C3E: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784C40: jge 0x58784c48
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58784C42: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C44: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C46: jmp 0x58784c7b
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x58784C48: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784C4D: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x58784C4F: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58784C52: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784C54: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784C57: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784C59: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58784C5B: jge 0x58784c61
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58784C5D: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58784C5F: jmp 0x58784c7b
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x58784C61: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58784C63: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58784C66: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58784C68: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x58784C6D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58784C6F: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58784C72: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58784C74: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58784C77: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58784C79: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58784C7B: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784C83: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58784C85: jle 0x58784ecd
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784C8B: mov eax, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58784C8E: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58784C90: jae 0x58784cc5
        __asm _emit 0x73
        __asm _emit 0x33
        // 0x58784C92: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784C99: jmp 0x58784cca
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x58784C9B: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58784C9E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58784CA0: imul ecx, ecx, 0x34
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x34
        // 0x58784CA3: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58784CA8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58784CAA: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58784CAD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58784CAF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58784CB2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58784CB4: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x58784CB6: sub esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x0A
        // 0x58784CB9: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58784CBC: jge 0x58784c83
        __asm _emit 0x7D
        __asm _emit 0xC5
        // 0x58784CBE: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784CC3: jmp 0x58784c8b
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x58784CC5: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58784CC7: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x58784CCA: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784CCF: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784CD4: cmp dword ptr [ebp + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x0C
        // 0x58784CD7: jne 0x58784d90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784CDD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x7F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58784CE2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58784CE5: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58784CEA: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58784CEC: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784CF0: je 0x58784d3d
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x58784CF2: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58784CF4: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58784CF8: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58784CFA: je 0x58784e13
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D00: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784D06: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784D0B: cmp dword ptr [eax + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x58784D12: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784D18: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784D1C: jle 0x58784d32
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58784D1E: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D24: je 0x58784d32
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58784D26: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D2C: add ebx, 0xc40
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D32: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58784D35: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58784D37: push eax
        __asm _emit 0x50
        // 0x58784D38: jmp 0x58784dee
        __asm _emit 0xE9
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D3D: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D45: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58784D47: je 0x58784ec5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D4D: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784D53: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784D59: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784D5D: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784D62: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D6C: jle 0x58784e9a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D72: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D79: je 0x58784e9a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D7F: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D85: add ebx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D8B: jmp 0x58784e9c
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784D90: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x7E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58784D95: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58784D98: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58784D9D: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58784D9F: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58784DA3: je 0x58784e56
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784DA9: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58784DAD: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58784DAF: je 0x58784e13
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x58784DB1: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784DB7: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784DBD: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784DC1: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784DC6: cmp dword ptr [eax + 0x160], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x58784DCD: jle 0x58784de6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58784DCF: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784DD6: je 0x58784de6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58784DD8: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784DDE: add ebx, 0xc80
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784DE4: jmp 0x58784de8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58784DE6: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58784DE8: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58784DEB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58784DED: push ecx
        __asm _emit 0x51
        // 0x58784DEE: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x7E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58784DF3: cdq
        __asm _emit 0x99
        // 0x58784DF4: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784DF9: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58784DFB: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58784DFE: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58784E02: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784E04: push eax
        __asm _emit 0x50
        // 0x58784E05: push ecx
        __asm _emit 0x51
        // 0x58784E06: push ebx
        __asm _emit 0x53
        // 0x58784E07: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58784E09: push esi
        __asm _emit 0x56
        // 0x58784E0A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58784E0C: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x5F
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58784E11: jmp 0x58784e15
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58784E13: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784E15: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784E1B: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x58784E22: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784E2A: jle 0x58784e4c
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58784E2C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E33: je 0x58784e4c
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58784E35: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E3B: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E41: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E47: jmp 0x58784ecd
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E4C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58784E4E: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E54: jmp 0x58784ecd
        __asm _emit 0xEB
        __asm _emit 0x77
        // 0x58784E56: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E5E: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58784E60: je 0x58784ec5
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x58784E62: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784E68: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58784E6E: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58784E72: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784E77: cmp dword ptr [eax + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E81: jle 0x58784e9a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58784E83: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E8A: je 0x58784e9a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58784E8C: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E92: add ebx, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784E98: jmp 0x58784e9c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58784E9A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58784E9C: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x58784E9F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58784EA1: push ecx
        __asm _emit 0x51
        // 0x58784EA2: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x7D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58784EA7: cdq
        __asm _emit 0x99
        // 0x58784EA8: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784EAD: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58784EAF: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58784EB2: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58784EB6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58784EB8: push eax
        __asm _emit 0x50
        // 0x58784EB9: push ecx
        __asm _emit 0x51
        // 0x58784EBA: push ebx
        __asm _emit 0x53
        // 0x58784EBB: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x58784EBD: push esi
        __asm _emit 0x56
        // 0x58784EBE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58784EC0: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x5E
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58784EC5: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784ECD: lea ebp, [edi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x5C
        // 0x58784ED0: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58784ED2: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784ED7: mov edx, dword ptr [edi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x58784EDA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58784EDC: push edx
        __asm _emit 0x52
        // 0x58784EDD: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x98
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58784EE2: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58784EE5: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58784EE8: jne 0x58784ed7
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58784EEA: mov eax, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x68
        // 0x58784EED: mov ecx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x58784EF0: imul ecx, ecx, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x32
        // 0x58784EF3: add ecx, 0x29a
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x9A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784EF9: cmp dword ptr [edi + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x58784EFC: jae 0x58784f12
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x58784EFE: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58784F01: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784F06: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58784F0A: mov eax, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x60
        // 0x58784F0D: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58784F12: cmp dword ptr [edi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58784F16: jne 0x58784f3b
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x58784F18: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784F1D: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58784F21: mov ecx, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x68
        // 0x58784F24: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58784F26: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58784F2C: push eax
        __asm _emit 0x50
        // 0x58784F2D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58784F2F: call 0x587bb160
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58784F34: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784F39: jmp 0x58784f3d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58784F3B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58784F3D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58784F41: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58784F48: pop ecx
        __asm _emit 0x59
        // 0x58784F49: pop edi
        __asm _emit 0x5F
        // 0x58784F4A: pop esi
        __asm _emit 0x5E
        // 0x58784F4B: pop ebp
        __asm _emit 0x5D
        // 0x58784F4C: pop ebx
        __asm _emit 0x5B
        // 0x58784F4D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58784F50: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
