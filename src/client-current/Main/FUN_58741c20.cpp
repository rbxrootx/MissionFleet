// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58741C20 .. +0x94A bytes.
// Source symbol alias: FUN_58741c20.
extern "C" __declspec(naked) void FUN_58741c20() {
    __asm {
        // 0x58741C20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58741C22: push 0x5897dfdd
        __asm _emit 0x68
        __asm _emit 0xDD
        __asm _emit 0xDF
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58741C27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C2D: push eax
        __asm _emit 0x50
        // 0x58741C2E: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58741C31: push ebx
        __asm _emit 0x53
        // 0x58741C32: push ebp
        __asm _emit 0x55
        // 0x58741C33: push esi
        __asm _emit 0x56
        // 0x58741C34: push edi
        __asm _emit 0x57
        // 0x58741C35: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58741C3A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58741C3C: push eax
        __asm _emit 0x50
        // 0x58741C3D: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58741C41: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C47: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58741C49: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58741C4D: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58741C51: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58741C55: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58741C59: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741C5D: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58741C61: push eax
        __asm _emit 0x50
        // 0x58741C62: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58741C66: push ecx
        __asm _emit 0x51
        // 0x58741C67: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58741C6B: push edx
        __asm _emit 0x52
        // 0x58741C6C: push eax
        __asm _emit 0x50
        // 0x58741C6D: push edi
        __asm _emit 0x57
        // 0x58741C6E: push ecx
        __asm _emit 0x51
        // 0x58741C6F: push ebp
        __asm _emit 0x55
        // 0x58741C70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58741C72: call 0x587c3c60
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x1F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58741C77: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741C7B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58741C7D: imul edx, edx, 0x5dc
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C83: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741C85: imul ecx, ecx, 0xbb8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C8B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58741C8D: mov dword ptr [esi + 0x4b4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C93: mov dword ptr [esi + 0x4ac], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741C99: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58741C9D: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58741C9F: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741CA3: mov dword ptr [esi], 0x5898ce4c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x4C
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58741CA9: mov dword ptr [esi + 0x4b8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CAF: mov dword ptr [esi + 0x4b0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CB5: mov dword ptr [esi + 0x84], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CBF: mov dword ptr [esi + 0x88], 5
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CC9: mov dword ptr [esi + 0x458], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CCF: mov dword ptr [esi + 0x45c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CD5: mov dword ptr [esi + 0x464], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CDB: mov dword ptr [esi + 0x470], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CE1: mov dword ptr [esi + 0x47c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CE7: mov dword ptr [esi + 0x480], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CED: mov dword ptr [esi + 0x484], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CF3: mov dword ptr [esi + 0x490], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CF9: mov dword ptr [esi + 0x494], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741CFF: mov dword ptr [esi + 0x4a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741D05: mov dword ptr [esi + 0x4a4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741D0B: mov dword ptr [esi + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x58741D0E: mov dword ptr [esi + 0x33c], 0x55730
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58741D18: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xAF
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741D1D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58741D1F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741D22: mov dword ptr [esp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58741D26: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58741D2B: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58741D2D: je 0x58741d53
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58741D2F: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741D33: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741D37: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741D39: push ebx
        __asm _emit 0x53
        // 0x58741D3A: push ebx
        __asm _emit 0x53
        // 0x58741D3B: push eax
        __asm _emit 0x50
        // 0x58741D3C: push ecx
        __asm _emit 0x51
        // 0x58741D3D: push esi
        __asm _emit 0x56
        // 0x58741D3E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741D40: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x14
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741D45: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58741D4B: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58741D4E: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58741D51: jmp 0x58741d55
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741D53: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58741D55: push edi
        __asm _emit 0x57
        // 0x58741D56: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58741D58: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741D5C: mov dword ptr [esi + 0x500], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741D62: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741D67: mov edi, dword ptr [esi + 0x500]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741D6D: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58741D70: mov edx, 0x2706
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741D75: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58741D79: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58741D7B: je 0x58741d83
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58741D7D: push edi
        __asm _emit 0x57
        // 0x58741D7E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741D83: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58741D86: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58741D88: je 0x58741d90
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58741D8A: push edi
        __asm _emit 0x57
        // 0x58741D8B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741D90: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58741D92: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xAE
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741D97: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58741D99: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741D9C: mov dword ptr [esp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58741DA0: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741DA4: mov byte ptr [esp + 0x28], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x02
        // 0x58741DA9: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58741DAB: je 0x58741dcd
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58741DAD: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741DB1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741DB3: push ebx
        __asm _emit 0x53
        // 0x58741DB4: push ebx
        __asm _emit 0x53
        // 0x58741DB5: push ebp
        __asm _emit 0x55
        // 0x58741DB6: push eax
        __asm _emit 0x50
        // 0x58741DB7: push esi
        __asm _emit 0x56
        // 0x58741DB8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741DBA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x13
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741DBF: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58741DC5: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58741DC8: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58741DCB: jmp 0x58741dcf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741DCD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58741DCF: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741DD4: mov dword ptr [esi + 0x4fc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741DDA: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58741DDE: mov ecx, dword ptr [esi + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741DE4: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58741DE9: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741DED: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x0F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741DF2: mov eax, dword ptr [esi + 0x500]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741DF8: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741DFD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58741E01: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58741E03: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xAE
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741E08: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58741E0A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741E0D: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741E11: mov byte ptr [esp + 0x28], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x03
        // 0x58741E16: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58741E18: je 0x58741e3a
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58741E1A: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741E1E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741E20: push ebx
        __asm _emit 0x53
        // 0x58741E21: push ebx
        __asm _emit 0x53
        // 0x58741E22: push ebp
        __asm _emit 0x55
        // 0x58741E23: push eax
        __asm _emit 0x50
        // 0x58741E24: push esi
        __asm _emit 0x56
        // 0x58741E25: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741E27: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741E2C: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58741E32: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58741E35: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58741E38: jmp 0x58741e3c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741E3A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58741E3C: mov dword ptr [esi + 0x504], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E42: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E47: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58741E4B: mov eax, dword ptr [esi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E51: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E56: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58741E5A: mov ecx, dword ptr [esi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E60: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E65: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741E69: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x0E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741E6E: mov eax, dword ptr [esi + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E74: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741E79: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58741E7D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58741E7F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xAD
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741E84: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741E87: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741E8B: mov byte ptr [esp + 0x28], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        // 0x58741E90: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58741E92: je 0x58741ed1
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x58741E94: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58741E9A: cmp dword ptr [ecx + 0x164], 0x2b6
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xB6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EA4: jle 0x58741ebc
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58741EA6: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EAC: je 0x58741ebc
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58741EAE: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EB4: mov ecx, dword ptr [edx + 0xad8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xD8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EBA: jmp 0x58741ebe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741EBC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58741EBE: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741EC2: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741EC4: push ebp
        __asm _emit 0x55
        // 0x58741EC5: push edx
        __asm _emit 0x52
        // 0x58741EC6: push ecx
        __asm _emit 0x51
        // 0x58741EC7: push esi
        __asm _emit 0x56
        // 0x58741EC8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58741ECA: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58741ECF: jmp 0x58741ed3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741ED1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58741ED3: mov dword ptr [esi + 0x510], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741ED9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EDE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58741EE2: mov ecx, dword ptr [esi + 0x510]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EE8: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EED: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741EF1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x0E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741EF6: mov eax, dword ptr [esi + 0x510]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741EFC: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F01: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58741F05: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58741F07: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xAD
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741F0C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58741F0E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741F11: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741F15: mov byte ptr [esp + 0x28], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x05
        // 0x58741F1A: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58741F1C: je 0x58741f40
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58741F1E: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741F22: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741F24: push ebx
        __asm _emit 0x53
        // 0x58741F25: push ebx
        __asm _emit 0x53
        // 0x58741F26: push ebp
        __asm _emit 0x55
        // 0x58741F27: push eax
        __asm _emit 0x50
        // 0x58741F28: push esi
        __asm _emit 0x56
        // 0x58741F29: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741F2B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741F30: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58741F36: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58741F39: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58741F3C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58741F3E: jmp 0x58741f42
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741F40: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58741F42: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F47: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741F4B: mov dword ptr [esi + 0x508], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F51: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741F56: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F5C: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F61: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58741F65: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F6B: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741F70: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58741F74: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58741F76: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xAC
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58741F7B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58741F7E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58741F82: mov byte ptr [esp + 0x28], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x06
        // 0x58741F87: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58741F89: je 0x58741fc5
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58741F8B: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58741F91: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x58741F98: jle 0x58741fb0
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58741F9A: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FA0: je 0x58741fb0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58741FA2: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FA8: add ecx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FAE: jmp 0x58741fb2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741FB0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58741FB2: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58741FB6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58741FB8: push ebp
        __asm _emit 0x55
        // 0x58741FB9: push edx
        __asm _emit 0x52
        // 0x58741FBA: push ecx
        __asm _emit 0x51
        // 0x58741FBB: push esi
        __asm _emit 0x56
        // 0x58741FBC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58741FBE: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x2A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58741FC3: jmp 0x58741fc7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58741FC5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58741FC7: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FCC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58741FCE: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58741FD2: mov dword ptr [esi + 0x50c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FD8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58741FDD: mov eax, dword ptr [esi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FE3: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FE8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58741FEC: mov eax, dword ptr [esi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FF2: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58741FF7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58741FFB: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742000: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xAC
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742005: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58742008: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874200C: mov byte ptr [esp + 0x28], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x07
        // 0x58742011: mov edi, 0x26
        __asm _emit 0xBF
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742016: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58742018: je 0x5874205b
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5874201A: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58742020: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742026: jle 0x5874203e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58742028: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874202E: je 0x5874203e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58742030: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742036: add ecx, 0x980
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874203C: jmp 0x58742040
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874203E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58742040: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58742043: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x58742046: push edx
        __asm _emit 0x52
        // 0x58742047: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5874204A: sub edx, 2
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x5874204D: push edx
        __asm _emit 0x52
        // 0x5874204E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58742050: push ecx
        __asm _emit 0x51
        // 0x58742051: push esi
        __asm _emit 0x56
        // 0x58742052: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742054: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x50
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58742059: jmp 0x5874205d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874205B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874205D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742062: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742064: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742068: mov dword ptr [esi + 0x514], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874206E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x0C
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58742073: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742078: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xAB
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874207D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58742080: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58742084: mov byte ptr [esp + 0x28], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x08
        // 0x58742089: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5874208B: je 0x587420ce
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5874208D: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58742093: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742099: jle 0x587420b1
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874209B: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587420A1: je 0x587420b1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587420A3: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587420A9: add edx, 0x980
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587420AF: jmp 0x587420b3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587420B1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587420B3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587420B6: sub ecx, 9
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x09
        // 0x587420B9: push ecx
        __asm _emit 0x51
        // 0x587420BA: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587420BD: add ecx, 0x2e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x2E
        // 0x587420C0: push ecx
        __asm _emit 0x51
        // 0x587420C1: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587420C3: push edx
        __asm _emit 0x52
        // 0x587420C4: push esi
        __asm _emit 0x56
        // 0x587420C5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587420C7: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587420CC: jmp 0x587420d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587420CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587420D0: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587420D5: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587420D9: mov dword ptr [esi + 0x518], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587420DF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xAB
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587420E4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587420E7: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587420EB: mov byte ptr [esp + 0x28], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x09
        // 0x587420F0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587420F2: je 0x58742135
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x587420F4: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587420FA: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742100: jle 0x58742118
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58742102: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742108: je 0x58742118
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874210A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742110: add edx, 0x980
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742116: jmp 0x5874211a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742118: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5874211A: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874211D: sub ecx, 9
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x09
        // 0x58742120: push ecx
        __asm _emit 0x51
        // 0x58742121: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58742124: add ecx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x55
        // 0x58742127: push ecx
        __asm _emit 0x51
        // 0x58742128: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5874212A: push edx
        __asm _emit 0x52
        // 0x5874212B: push esi
        __asm _emit 0x56
        // 0x5874212C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874212E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x4F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58742133: jmp 0x58742137
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742135: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742137: mov dword ptr [esi + 0x51c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874213D: mov eax, dword ptr [esi + 0x518]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742143: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742148: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874214C: mov eax, dword ptr [esi + 0x51c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742152: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58742154: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58742158: mov ecx, dword ptr [esi + 0x518]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874215E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742163: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742167: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x0B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5874216C: mov ecx, dword ptr [esi + 0x51c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742172: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742177: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x0B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5874217C: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742181: lea edx, [esi + 0x354]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742187: push ebx
        __asm _emit 0x53
        // 0x58742188: push edx
        __asm _emit 0x52
        // 0x58742189: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874218E: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742193: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58742196: mov dword ptr [esi + 0x220], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874219C: mov dword ptr [esi + 0x224], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421A2: mov dword ptr [esi + 0x4d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421A8: mov dword ptr [esi + 0x4cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421AE: mov dword ptr [esi + 0x4bc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421B4: mov dword ptr [esi + 0x468], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421BA: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421C0: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421C6: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421CC: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421D2: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421D8: cmp dword ptr [0x589c9048], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587421DE: je 0x58742303
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587421E4: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587421E6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xAA
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587421EB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587421EE: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587421F2: mov byte ptr [esp + 0x28], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0A
        // 0x587421F7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587421F9: je 0x5874222f
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587421FB: mov ecx, dword ptr [0x58a246e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58742201: cmp dword ptr [ecx + 0x170], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742207: jle 0x58742223
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58742209: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874220F: je 0x58742223
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58742211: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742217: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58742219: push edx
        __asm _emit 0x52
        // 0x5874221A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874221C: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58742221: jmp 0x58742231
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58742223: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58742225: push edx
        __asm _emit 0x52
        // 0x58742226: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742228: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5874222D: jmp 0x58742231
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874222F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742231: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58742233: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742237: mov dword ptr [esi + 0x520], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874223D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xAA
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742242: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58742245: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58742249: mov byte ptr [esp + 0x28], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0B
        // 0x5874224E: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58742250: je 0x58742288
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58742252: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58742258: cmp dword ptr [ecx + 0x170], 0xf
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x5874225F: jle 0x5874227c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x58742261: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742267: je 0x5874227c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58742269: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874226F: mov ecx, dword ptr [edx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x3C
        // 0x58742272: push ecx
        __asm _emit 0x51
        // 0x58742273: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742275: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5874227A: jmp 0x5874228a
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5874227C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874227E: push ecx
        __asm _emit 0x51
        // 0x5874227F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742281: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58742286: jmp 0x5874228a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742288: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874228A: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5874228C: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58742290: mov dword ptr [esi + 0x524], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742296: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xA9
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874229B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874229E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587422A2: mov byte ptr [esp + 0x28], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0C
        // 0x587422A7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587422A9: je 0x587422f5
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587422AB: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xDC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587422B1: cmp dword ptr [ecx + 0x170], 0x12
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        // 0x587422B8: jle 0x587422df
        __asm _emit 0x7E
        __asm _emit 0x25
        // 0x587422BA: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587422C0: je 0x587422df
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587422C2: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587422C8: mov ecx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x48
        // 0x587422CB: push ecx
        __asm _emit 0x51
        // 0x587422CC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587422CE: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587422D3: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587422D7: mov dword ptr [esi + 0x528], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587422DD: jmp 0x58742315
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x587422DF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587422E1: push ecx
        __asm _emit 0x51
        // 0x587422E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587422E4: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x587422E9: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587422ED: mov dword ptr [esi + 0x528], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587422F3: jmp 0x58742315
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x587422F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587422F7: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587422FB: mov dword ptr [esi + 0x528], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742301: jmp 0x58742315
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58742303: mov dword ptr [esi + 0x520], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742309: mov dword ptr [esi + 0x524], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874230F: mov dword ptr [esi + 0x528], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742315: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58742317: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58742319: mov word ptr [esi + 0x52c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742320: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xA9
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742325: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58742328: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874232C: mov byte ptr [esp + 0x28], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0D
        // 0x58742331: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58742333: je 0x58742375
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58742335: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874233B: cmp dword ptr [ecx + 0x164], 0x4b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4B
        // 0x58742342: jle 0x5874235a
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58742344: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874234A: je 0x5874235a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5874234C: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742352: mov ecx, dword ptr [ecx + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742358: jmp 0x5874235c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874235A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874235C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5874235E: lea edx, [ebp - 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xE3
        // 0x58742361: push edx
        __asm _emit 0x52
        // 0x58742362: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58742366: add edx, -0x16
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xEA
        // 0x58742369: push edx
        __asm _emit 0x52
        // 0x5874236A: push ecx
        __asm _emit 0x51
        // 0x5874236B: push esi
        __asm _emit 0x56
        // 0x5874236C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874236E: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xF8
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58742373: jmp 0x58742377
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742375: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58742377: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x58742379: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874237D: mov dword ptr [esi + 0x530], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742383: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xA8
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58742388: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874238B: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5874238F: mov byte ptr [esp + 0x28], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0E
        // 0x58742394: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58742396: je 0x587423df
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58742398: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874239E: cmp dword ptr [ecx + 0x164], 0x49
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x49
        // 0x587423A5: jle 0x587423bd
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587423A7: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587423AD: je 0x587423bd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587423AF: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587423B5: mov ecx, dword ptr [ecx + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587423BB: jmp 0x587423bf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587423BD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587423BF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587423C1: lea edx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x05
        // 0x587423C4: push edx
        __asm _emit 0x52
        // 0x587423C5: mov edx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587423C9: add edx, 0x1b
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1B
        // 0x587423CC: push edx
        __asm _emit 0x52
        // 0x587423CD: push ecx
        __asm _emit 0x51
        // 0x587423CE: push esi
        __asm _emit 0x56
        // 0x587423CF: push ebx
        __asm _emit 0x53
        // 0x587423D0: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587423D5: push ebx
        __asm _emit 0x53
        // 0x587423D6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587423D8: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xC4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587423DD: jmp 0x587423e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587423DF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587423E1: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x587423E3: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587423E7: mov dword ptr [esi + 0x534], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587423ED: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xA8
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587423F2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587423F5: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587423F9: mov byte ptr [esp + 0x28], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x0F
        // 0x587423FE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58742400: je 0x58742449
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58742402: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58742408: cmp dword ptr [ecx + 0x164], 0x4a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x4A
        // 0x5874240F: jle 0x58742427
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58742411: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742417: je 0x58742427
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58742419: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874241F: mov ecx, dword ptr [ecx + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742425: jmp 0x58742429
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742427: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58742429: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5874242D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5874242F: add ebp, 5
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x05
        // 0x58742432: push ebp
        __asm _emit 0x55
        // 0x58742433: add edx, 0x1b
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1B
        // 0x58742436: push edx
        __asm _emit 0x52
        // 0x58742437: push ecx
        __asm _emit 0x51
        // 0x58742438: push esi
        __asm _emit 0x56
        // 0x58742439: push ebx
        __asm _emit 0x53
        // 0x5874243A: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874243F: push ebx
        __asm _emit 0x53
        // 0x58742440: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58742442: call 0x5877e800
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58742447: jmp 0x5874244b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58742449: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874244B: mov ecx, dword ptr [esi + 0x530]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742451: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742456: mov byte ptr [esp + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874245A: mov dword ptr [esi + 0x538], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742460: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58742465: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58742469: mov ecx, 0xa
        __asm _emit 0xB9
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874246E: mov dword ptr [esi + 0x334], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742474: mov dword ptr [esi + 0x4c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874247A: mov dword ptr [esi + 0x228], 0x10
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742484: mov dword ptr [esi + 0x454], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874248A: mov dword ptr [esi + 0x4ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742490: mov dword ptr [esi + 0x4f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742496: mov dword ptr [esi + 0x4d4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874249C: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5874249F: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424A6: mov dword ptr [esi + 0x80], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424AC: mov dword ptr [esi + 0x338], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424B2: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424B8: mov dword ptr [esi + 0x4f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424BE: mov dword ptr [esi + 0x8c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424C8: mov dword ptr [esi + 0x90], 0xc8
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
        // 0x587424D2: mov dword ptr [esi + 0x53c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424D8: mov dword ptr [esi + 0x540], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424DE: mov dword ptr [esi + 0x544], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424E4: mov dword ptr [esi + 0x548], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424EA: mov dword ptr [esi + 0x550], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587424F0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587424F6: cmp dword ptr [ecx + 0x218b0], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587424FC: jg 0x58742510
        __asm _emit 0x7F
        __asm _emit 0x12
        // 0x587424FE: cmp dword ptr [ecx + 0x218c4], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58742504: jne 0x58742510
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58742506: cmp word ptr [ecx + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x5874250E: jne 0x5874252b
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58742510: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58742516: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874251A: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874251E: push eax
        __asm _emit 0x50
        // 0x5874251F: add ecx, 0x70
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x70
        // 0x58742522: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58742526: call 0x58901de0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874252B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874252D: mov dword ptr [esi + 0x554], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742533: mov word ptr [esi + 0x22c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874253A: mov byte ptr [esi + 0x9c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742540: mov dword ptr [esi + 0x478], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742546: mov dword ptr [esi + 0x4e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874254C: mov dword ptr [esi + 0x4e4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58742552: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58742554: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58742558: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874255F: pop ecx
        __asm _emit 0x59
        // 0x58742560: pop edi
        __asm _emit 0x5F
        // 0x58742561: pop esi
        __asm _emit 0x5E
        // 0x58742562: pop ebp
        __asm _emit 0x5D
        // 0x58742563: pop ebx
        __asm _emit 0x5B
        // 0x58742564: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58742567: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
