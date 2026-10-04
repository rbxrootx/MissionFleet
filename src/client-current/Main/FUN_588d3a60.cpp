// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D3A60 .. +0x3CF bytes.
// Source symbol alias: FUN_588d3a60.
extern "C" __declspec(naked) void FUN_588d3a60() {
    __asm {
        // 0x588D3A60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D3A62: push 0x589892ce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D3A67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A6D: push eax
        __asm _emit 0x50
        // 0x588D3A6E: push ecx
        __asm _emit 0x51
        // 0x588D3A6F: push ebx
        __asm _emit 0x53
        // 0x588D3A70: push ebp
        __asm _emit 0x55
        // 0x588D3A71: push esi
        __asm _emit 0x56
        // 0x588D3A72: push edi
        __asm _emit 0x57
        // 0x588D3A73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D3A78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D3A7A: push eax
        __asm _emit 0x50
        // 0x588D3A7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3A7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3A85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D3A87: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D3A8B: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588D3A8F: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588D3A93: mov ecx, dword ptr [esp + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x588D3A97: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588D3A9B: mov ebp, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588D3A9F: push eax
        __asm _emit 0x50
        // 0x588D3AA0: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588D3AA4: push edi
        __asm _emit 0x57
        // 0x588D3AA5: push ecx
        __asm _emit 0x51
        // 0x588D3AA6: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588D3AAA: push edx
        __asm _emit 0x52
        // 0x588D3AAB: push ebp
        __asm _emit 0x55
        // 0x588D3AAC: push eax
        __asm _emit 0x50
        // 0x588D3AAD: push ecx
        __asm _emit 0x51
        // 0x588D3AAE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D3AB0: call 0x587c3c60
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x01
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588D3AB5: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3AB9: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3ABD: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D3AC1: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588D3AC4: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588D3AC8: mov dword ptr [esi + 0x1e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3ACE: mov dword ptr [esi + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588D3AD1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D3AD5: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3ADB: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3AE1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588D3AE3: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588D3AE6: mov dword ptr [esi + 0x1ec], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3AEC: mov dword ptr [esi], 0x589a0f7c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x7C
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D3AF2: mov dword ptr [esi + 0x230], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3AF8: mov dword ptr [esi + 0x234], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3B02: mov dword ptr [esi + 0x238], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B08: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x588D3B0B: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588D3B0E: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588D3B11: mov dword ptr [esi + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588D3B14: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588D3B17: mov dword ptr [esi + 0x1f0], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B21: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3B27: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D3B2A: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588D3B2D: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3B32: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3B34: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3B37: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D3B39: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D3B3C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D3B3E: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x588D3B41: mov dword ptr [esi + 0x88], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B47: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3B4D: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x588D3B50: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x588D3B53: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3B58: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3B5A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3B5D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D3B5F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D3B62: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3B64: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x588D3B67: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B6D: mov dword ptr [esi + 0x90], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B77: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3B7D: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D3B80: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3B85: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3B87: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3B8A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D3B8C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D3B8F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D3B91: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x588D3B94: mov dword ptr [esi + 0xa4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3B9A: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3BA0: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x588D3BA3: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3BA8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3BAA: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3BAD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D3BAF: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D3BB3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D3BB6: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D3BBA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3BBC: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x588D3BBF: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BC5: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588D3BC9: mov dword ptr [esi + 0xa0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BCF: mov dword ptr [esi + 0xac], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BD9: mov dword ptr [esi + 0x204], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BDF: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BE5: mov dword ptr [esi + 0x1e0], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D3BEF: mov dword ptr [esi + 0x1e4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3BF9: mov dword ptr [esi + 0x23c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3BFF: mov dword ptr [esi + 0x240], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C05: mov dword ptr [esi + 0x200], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C0B: mov dword ptr [esi + 0x1f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C11: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588D3C13: mov dword ptr [esi + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C19: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D3C1C: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588D3C1E: mov dword ptr [esi + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C24: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D3C27: mov eax, 0xb
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C2C: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588D3C2E: mov word ptr [esi + 0x1b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C35: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C3A: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C3F: mov dword ptr [esi + 0x9c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C45: mov dword ptr [esi + 0x1d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C4B: mov dword ptr [esi + 0x1b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C51: mov dword ptr [esi + 0x1dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C57: mov dword ptr [esi + 0x1bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C5D: mov dword ptr [esi + 0x1c0], 0xaa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C67: mov dword ptr [esi + 0x1c4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C6D: mov dword ptr [esi + 0x1c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C73: mov dword ptr [esi + 0x1cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C79: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D3C7E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588D3C81: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588D3C84: mov dword ptr [esi + 0x1d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C8A: mov dword ptr [esi + 0x228], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C90: mov dword ptr [esi + 0x22c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C96: mov dword ptr [esi + 0x250], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3C9C: mov dword ptr [esi + 0x258], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CA2: mov dword ptr [esi + 0x254], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CA8: mov dword ptr [esi + 0x25c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CAE: mov dword ptr [esi + 0x260], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CB4: cmp dword ptr [esp + 0x2c], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3CB8: jne 0x588d3d41
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CBE: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3CC3: cmp dword ptr [eax + 0x160], 0x22
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x588D3CCA: jle 0x588d3ce1
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588D3CCC: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CD2: je 0x588d3ce1
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588D3CD4: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CDA: add eax, 0x880
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CDF: jmp 0x588d3ce3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3CE1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3CE3: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588D3CE5: mov dword ptr [esi + 0x1f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3CEB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x8F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3CF0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D3CF3: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588D3CF7: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588D3CFC: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588D3CFE: je 0x588d3dbb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D04: mov ecx, dword ptr [0x58a24670]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3D0A: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D10: jle 0x588d3d24
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588D3D12: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D18: je 0x588d3d24
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D3D1A: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D20: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x588D3D22: jmp 0x588d3d26
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3D24: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D3D26: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588D3D29: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D2E: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x588D3D31: push edx
        __asm _emit 0x52
        // 0x588D3D32: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588D3D35: push edx
        __asm _emit 0x52
        // 0x588D3D36: push ecx
        __asm _emit 0x51
        // 0x588D3D37: push esi
        __asm _emit 0x56
        // 0x588D3D38: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D3D3A: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xDF
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588D3D3F: jmp 0x588d3dbd
        __asm _emit 0xEB
        __asm _emit 0x7C
        // 0x588D3D41: mov eax, dword ptr [0x58a2466c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3D46: cmp dword ptr [eax + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D4C: jle 0x588d3d5e
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588D3D4E: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D54: je 0x588d3d5e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588D3D56: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D5C: jmp 0x588d3d60
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3D5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3D60: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588D3D62: mov dword ptr [esi + 0x1f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D68: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x8E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3D6D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D3D70: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588D3D74: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588D3D79: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588D3D7B: je 0x588d3dbb
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588D3D7D: mov ecx, dword ptr [0x58a2466c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3D83: cmp dword ptr [ecx + 0x164], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D89: jle 0x588d3d9e
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D3D8B: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D91: je 0x588d3d9e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D3D93: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3D99: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588D3D9C: jmp 0x588d3da0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3D9E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3DA0: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588D3DA3: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DA8: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x588D3DAB: push ecx
        __asm _emit 0x51
        // 0x588D3DAC: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588D3DAF: push ecx
        __asm _emit 0x51
        // 0x588D3DB0: push edx
        __asm _emit 0x52
        // 0x588D3DB1: push esi
        __asm _emit 0x56
        // 0x588D3DB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D3DB4: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xDE
        __asm _emit 0xE5
        __asm _emit 0xFF
        // 0x588D3DB9: jmp 0x588d3dbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D3DBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3DBD: mov dword ptr [esi + 0x1f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DC3: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3DC9: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D3DCC: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D3DD0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588D3DD2: je 0x588d3de5
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D3DD4: movzx eax, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DDB: cmp dword ptr [esi + 0xa0], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DE1: jne 0x588d3de5
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588D3DE3: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x588D3DE5: mov eax, dword ptr [esi + 0x1f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DEB: mov dword ptr [esi + 0x220], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3DF1: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x588D3DF4: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588D3DF7: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588D3DFA: mov ecx, dword ptr [esi + 0x1f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3E00: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3E05: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x588D3E08: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xEF
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D3E0D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D3E11: mov dword ptr [esi + 0x24c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3E17: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D3E19: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3E1D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3E24: pop ecx
        __asm _emit 0x59
        // 0x588D3E25: pop edi
        __asm _emit 0x5F
        // 0x588D3E26: pop esi
        __asm _emit 0x5E
        // 0x588D3E27: pop ebp
        __asm _emit 0x5D
        // 0x588D3E28: pop ebx
        __asm _emit 0x5B
        // 0x588D3E29: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D3E2C: ret 0x38
        __asm _emit 0xC2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
