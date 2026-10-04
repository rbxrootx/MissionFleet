// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D3E50 .. +0x4A6 bytes.
// Source symbol alias: FUN_588d3e50.
extern "C" __declspec(naked) void FUN_588d3e50() {
    __asm {
        // 0x588D3E50: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D3E52: push 0x5898a26b
        __asm _emit 0x68
        __asm _emit 0x6B
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D3E57: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3E5D: push eax
        __asm _emit 0x50
        // 0x588D3E5E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588D3E61: push ebx
        __asm _emit 0x53
        // 0x588D3E62: push ebp
        __asm _emit 0x55
        // 0x588D3E63: push esi
        __asm _emit 0x56
        // 0x588D3E64: push edi
        __asm _emit 0x57
        // 0x588D3E65: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D3E6A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D3E6C: push eax
        __asm _emit 0x50
        // 0x588D3E6D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D3E71: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3E77: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D3E79: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3E7E: mov ecx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3E84: add ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3E8A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3E8C: add ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3E90: mov dword ptr [esi + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588D3E93: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3E97: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588D3E99: je 0x588d3eab
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588D3E9B: cmp dword ptr [ecx + 0x606c], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EA1: je 0x588d3eab
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588D3EA3: mov dword ptr [esi + 0x224], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EA9: jmp 0x588d3eb5
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588D3EAB: mov dword ptr [esi + 0x224], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EB5: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588D3EB7: je 0x588d3ec7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D3EB9: cmp dword ptr [ecx + 0x6070], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EBF: je 0x588d3ec7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D3EC1: mov dword ptr [esi + 0x224], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EC7: mov edi, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D3ECB: mov ebx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3ED1: mov ebp, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3ED7: mov dword ptr [esi + 0x268], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EDD: mov al, byte ptr [edi + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EE3: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588D3EE5: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x588D3EE9: mov word ptr [esi + 0x1d8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EF0: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D3EF4: mov dword ptr [esi + 0x1dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3EFA: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588D3EFE: mov dword ptr [esi + 0x23c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F04: mov dword ptr [esi + 0x240], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F0A: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D3F0E: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3F12: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588D3F14: je 0x588d3f4e
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588D3F16: push eax
        __asm _emit 0x50
        // 0x588D3F17: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3F1B: push edx
        __asm _emit 0x52
        // 0x588D3F1C: call 0x588da4d0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F21: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3F23: jne 0x588d3fa1
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x588D3F25: cmp word ptr [esi + 0x1b8], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x588D3F2D: jne 0x588d3f43
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588D3F2F: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F35: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D3F39: push eax
        __asm _emit 0x50
        // 0x588D3F3A: call 0x588d6670
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F3F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3F41: jne 0x588d3fa1
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x588D3F43: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3F48: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588D3F4C: jmp 0x588d3fb8
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x588D3F4E: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3F54: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D3F56: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D3F59: imul edx, edx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x75
        // 0x588D3F5C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3F61: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D3F63: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3F66: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D3F68: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D3F6B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3F6D: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3F71: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588D3F73: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588D3F77: cdq
        __asm _emit 0x99
        // 0x588D3F78: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588D3F7A: push eax
        __asm _emit 0x50
        // 0x588D3F7B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3F80: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3F82: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3F85: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D3F87: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D3F8A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D3F8C: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588D3F8E: cdq
        __asm _emit 0x99
        // 0x588D3F8F: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D3F91: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3F97: push eax
        __asm _emit 0x50
        // 0x588D3F98: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x1E
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588D3F9D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3F9F: je 0x588d3faf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588D3FA1: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588D3FA6: mov dword ptr [esi + 0x28], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3FAD: jmp 0x588d3fbf
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588D3FAF: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3FB4: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588D3FB8: mov dword ptr [esi + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3FBF: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3FC3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3FC5: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3FCB: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3FD0: movzx ebx, word ptr [esi + 0x1d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3FD7: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x588D3FDA: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x588D3FDF: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588D3FE1: movzx eax, word ptr [edi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3FE8: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588D3FEB: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x588D3FEE: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588D3FF0: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588D3FF2: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588D3FF4: add ecx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x5A
        // 0x588D3FF7: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D3FFA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3FFF: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588D4001: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588D4004: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D400A: mov dword ptr [esi + 0x1c0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4010: cmp bx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x05
        // 0x588D4014: jne 0x588d4023
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588D4016: movzx ecx, word ptr [edi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D401D: mov dword ptr [esi + 0x1c0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4023: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4028: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x588D402C: jne 0x588d4050
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x588D402E: cmp word ptr [edi + 0x9c], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4035: ja 0x588d4050
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x588D4037: mov dword ptr [esi + 0x244], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4041: movzx edx, word ptr [edi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x97
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4048: mov dword ptr [esi + 0x248], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D404E: jmp 0x588d4064
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588D4050: mov dword ptr [esi + 0x244], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D405A: mov dword ptr [esi + 0x248], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D4064: movzx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D406B: mov dword ptr [esi + 0x1c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4071: movsx ecx, byte ptr [edi + 0x9a]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x8F
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4078: imul ecx, dword ptr [0x58a244c4]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D407F: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x588D4082: mov dword ptr [esi + 0x1cc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4088: mov dword ptr [esi + 0xb0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4092: movzx eax, word ptr [edi + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4099: mov dword ptr [esi + 0x1c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D409F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D40A1: jne 0x588d40a8
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588D40A3: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40A8: mov dword ptr [esi + 0x1c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40AE: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x588D40B1: cdq
        __asm _emit 0x99
        // 0x588D40B2: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D40B8: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40BE: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x05
        // 0x588D40C1: cdq
        __asm _emit 0x99
        // 0x588D40C2: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D40C4: movsx edx, byte ptr [edi + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x97
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40CB: mov edi, 3
        __asm _emit 0xBF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D40D2: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40D7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D40D9: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x588D40DC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D40E1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D40E3: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40E9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D40EC: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D40EE: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D40F1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D40F3: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40F8: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588D40FA: cmp eax, 0x5dc
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D40FF: mov dword ptr [esi + 0x1d4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4105: jle 0x588d410f
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x588D4107: mov dword ptr [esi + 0x204], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D410D: jmp 0x588d4142
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x588D410F: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4114: jl 0x588d411e
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x588D4116: mov dword ptr [esi + 0x204], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D411C: jmp 0x588d4142
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x588D411E: cmp eax, 0x1f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4123: jle 0x588d4138
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D4125: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D412A: jge 0x588d4138
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x588D412C: mov dword ptr [esi + 0x204], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4136: jmp 0x588d4142
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588D4138: mov dword ptr [esi + 0x204], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4142: mov eax, dword ptr [esi + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4148: lea ecx, [eax + 0xc4]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D414E: mov dword ptr [esi + 0x214], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4154: mov ecx, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D415A: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4160: mov dword ptr [esi + 0x208], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4166: mov dword ptr [esi + 0x20c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D416C: mov dword ptr [esi + 0x210], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4176: lea edx, [eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D4179: jne 0x588d417e
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588D417B: lea edx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588D417E: mov dword ptr [esi + 0x21c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4184: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D4186: je 0x588d418d
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588D4188: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0C
        // 0x588D418B: jmp 0x588d4190
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588D418D: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x588D4190: mov dword ptr [esi + 0x218], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4196: cmp dword ptr [esi + 0x74], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x74
        // 0x588D4199: jne 0x588d41b1
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588D419B: mov dword ptr [esi + 0x214], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41A1: mov dword ptr [esi + 0x21c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41A7: mov dword ptr [esi + 0x218], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41B1: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588D41B5: mov dword ptr [esi + 0x1b4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41BB: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x588D41BE: jne 0x588d42e0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41C4: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D41C9: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41CF: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588D41D2: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41D8: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41DE: jne 0x588d4226
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x588D41E0: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41E5: mov dword ptr [esi + 0x254], 0x14
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41EF: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xD3
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588D41F4: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D41FA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D41FC: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588D41FF: push edx
        __asm _emit 0x52
        // 0x588D4200: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D4202: push eax
        __asm _emit 0x50
        // 0x588D4203: mov dword ptr [esi + 0x250], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4209: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x8A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D420E: mov eax, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4214: push ebp
        __asm _emit 0x55
        // 0x588D4215: push eax
        __asm _emit 0x50
        // 0x588D4216: push eax
        __asm _emit 0x50
        // 0x588D4217: mov eax, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D421D: push eax
        __asm _emit 0x50
        // 0x588D421E: call 0x5876c7e0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D4223: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x588D4226: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588D4228: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x8A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D422D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D4230: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D4234: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D4236: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D423A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D423C: je 0x588d4279
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588D423E: mov edx, dword ptr [0x58a24670]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D4244: cmp dword ptr [edx + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D424A: jle 0x588d425f
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588D424C: cmp dword ptr [edx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4252: je 0x588d425f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D4254: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D425A: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x80
        // 0x588D425D: jmp 0x588d4261
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D425F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D4261: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588D4264: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4269: push ecx
        __asm _emit 0x51
        // 0x588D426A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588D426D: push ecx
        __asm _emit 0x51
        // 0x588D426E: push edx
        __asm _emit 0x52
        // 0x588D426F: push esi
        __asm _emit 0x56
        // 0x588D4270: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D4272: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D4277: jmp 0x588d427b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D4279: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D427B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4280: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D4282: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D428A: mov dword ptr [esi + 0x258], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D4290: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xEA
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D4295: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D429B: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42A0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D42A4: mov eax, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42AA: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588D42AF: mov eax, dword ptr [0x58a24670]
        __asm _emit 0xA1
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D42B4: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42BA: jle 0x588d42cc
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x588D42BC: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42C2: je 0x588d42cc
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588D42C4: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42CA: jmp 0x588d42ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D42CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D42CE: mov dword ptr [esi + 0x1f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42D4: mov dword ptr [esi + 0x220], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42DA: mov dword ptr [esi + 0x264], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42E0: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D42E4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D42EB: pop ecx
        __asm _emit 0x59
        // 0x588D42EC: pop edi
        __asm _emit 0x5F
        // 0x588D42ED: pop esi
        __asm _emit 0x5E
        // 0x588D42EE: pop ebp
        __asm _emit 0x5D
        // 0x588D42EF: pop ebx
        __asm _emit 0x5B
        // 0x588D42F0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588D42F3: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
