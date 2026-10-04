// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888BA30 .. +0x401 bytes.
// Source symbol alias: FUN_5888ba30.
extern "C" __declspec(naked) void FUN_5888ba30() {
    __asm {
        // 0x5888BA30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5888BA32: push 0x58986ef4
        __asm _emit 0x68
        __asm _emit 0xF4
        __asm _emit 0x6E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888BA37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BA3D: push eax
        __asm _emit 0x50
        // 0x5888BA3E: push ecx
        __asm _emit 0x51
        // 0x5888BA3F: push ebx
        __asm _emit 0x53
        // 0x5888BA40: push ebp
        __asm _emit 0x55
        // 0x5888BA41: push esi
        __asm _emit 0x56
        // 0x5888BA42: push edi
        __asm _emit 0x57
        // 0x5888BA43: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888BA48: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888BA4A: push eax
        __asm _emit 0x50
        // 0x5888BA4B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888BA4F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BA55: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888BA57: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888BA5B: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BA5F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5888BA63: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BA67: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888BA6B: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888BA6F: push eax
        __asm _emit 0x50
        // 0x5888BA70: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888BA74: push ecx
        __asm _emit 0x51
        // 0x5888BA75: push edx
        __asm _emit 0x52
        // 0x5888BA76: push edi
        __asm _emit 0x57
        // 0x5888BA77: push ebx
        __asm _emit 0x53
        // 0x5888BA78: push eax
        __asm _emit 0x50
        // 0x5888BA79: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888BA7B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BA80: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888BA86: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5888BA8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888BA8D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5888BA90: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5888BA93: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BA9A: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5888BA9D: mov ebp, 0x192
        __asm _emit 0xBD
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BAA2: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5888BAA6: mov dword ptr [esi], 0x5899fc38
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888BAAC: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BAB0: mov ebx, 0x648
        __asm _emit 0xBB
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BAB5: mov dword ptr [esp + 0x38], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BABD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5888BAC0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5888BAC2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BAC7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5888BAC9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888BACC: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BAD0: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5888BAD5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5888BAD7: je 0x5888bb51
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x5888BAD9: mov eax, dword ptr [0x58a24768]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BADE: cmp dword ptr [eax + 0x164], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BAE4: jle 0x5888bafe
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5888BAE6: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5888BAE8: jl 0x5888bafe
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5888BAEA: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BAF1: je 0x5888bafe
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888BAF3: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BAF9: mov ebp, dword ptr [ebx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x0B
        // 0x5888BAFC: jmp 0x5888bb00
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BAFE: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5888BB00: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888BB04: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5888BB08: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5888BB0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888BB0C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888BB0E: push edx
        __asm _emit 0x52
        // 0x5888BB0F: push eax
        __asm _emit 0x50
        // 0x5888BB10: push esi
        __asm _emit 0x56
        // 0x5888BB11: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5888BB13: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BB18: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888BB1E: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5888BB21: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5888BB23: je 0x5888bb4b
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5888BB25: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5888BB28: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5888BB2B: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x5888BB2E: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5888BB31: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5888BB34: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5888BB36: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5888BB39: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888BB3C: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5888BB3F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5888BB42: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5888BB45: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5888BB48: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x5888BB4B: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BB4F: jmp 0x5888bb53
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BB51: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5888BB53: mov dword ptr [esi + ebx - 0x5e8], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x1E
        __asm _emit 0x18
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BB5A: inc ebp
        __asm _emit 0x45
        // 0x5888BB5B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5888BB5E: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x5888BB63: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888BB68: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BB6C: jne 0x5888bac0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BB72: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5888BB75: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BB7A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BB7F: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5888BB82: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BB87: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BB8C: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5888BB8F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BB94: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BB99: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5888BB9C: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BBA1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BBA6: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5888BBA9: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BBAE: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BBB3: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5888BBB6: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BBBB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888BBC0: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5888BBC4: lea edi, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5888BBC7: add ebp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x2C
        // 0x5888BBCA: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BBCF: nop
        __asm _emit 0x90
        // 0x5888BBD0: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BBD5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BBDA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888BBDD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BBE1: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5888BBE6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888BBE8: je 0x5888bc1d
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5888BBEA: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5888BBEF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888BBF1: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888BBF6: lea ecx, [ebp + 0x2e]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2E
        // 0x5888BBF9: push ecx
        __asm _emit 0x51
        // 0x5888BBFA: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BBFE: lea edx, [ecx + 0xf6]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC04: push edx
        __asm _emit 0x52
        // 0x5888BC05: push ebp
        __asm _emit 0x55
        // 0x5888BC06: add ecx, 0x38
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x38
        // 0x5888BC09: push ecx
        __asm _emit 0x51
        // 0x5888BC0A: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BC10: push ecx
        __asm _emit 0x51
        // 0x5888BC11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888BC13: push esi
        __asm _emit 0x56
        // 0x5888BC14: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888BC16: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x54
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888BC1B: jmp 0x5888bc1f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BC1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888BC1F: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x5888BC21: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC26: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BC2A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5888BC2C: mov ecx, 0x17
        __asm _emit 0xB9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC31: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC38: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5888BC3A: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5888BC3C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888BC41: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xD1
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5888BC46: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC4B: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x58
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888BC50: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC55: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888BC57: push eax
        __asm _emit 0x50
        // 0x5888BC58: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5888BC5B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BC60: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888BC63: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888BC66: add ebp, 0x32
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x32
        // 0x5888BC69: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5888BC6C: jne 0x5888bbd0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BC72: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BC77: cmp dword ptr [eax + 0x170], 0xb
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0B
        // 0x5888BC7E: jle 0x5888bc93
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5888BC80: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC86: je 0x5888bc93
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5888BC88: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC8E: mov eax, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x2C
        // 0x5888BC91: jmp 0x5888bc95
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BC93: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888BC95: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BC9A: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCA0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x0F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BCA5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888BCA8: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BCAC: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5888BCB1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888BCB3: je 0x5888bd19
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5888BCB5: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BCBB: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5888BCC2: jle 0x5888bcdb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5888BCC4: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCCB: je 0x5888bcdb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888BCCD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCD3: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCD9: jmp 0x5888bcdd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BCDB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888BCDD: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCE2: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5888BCE6: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x5888BCE9: push edx
        __asm _emit 0x52
        // 0x5888BCEA: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BCEE: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCF4: push edx
        __asm _emit 0x52
        // 0x5888BCF5: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BCF9: add edx, 0x9b
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BCFF: push edx
        __asm _emit 0x52
        // 0x5888BD00: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BD06: push ecx
        __asm _emit 0x51
        // 0x5888BD07: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BD0D: push esi
        __asm _emit 0x56
        // 0x5888BD0E: push ecx
        __asm _emit 0x51
        // 0x5888BD0F: push edx
        __asm _emit 0x52
        // 0x5888BD10: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888BD12: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888BD17: jmp 0x5888bd1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BD19: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888BD1B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD20: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5888BD25: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD2B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x0F
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BD30: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888BD33: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5888BD37: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5888BD3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888BD3E: je 0x5888bda4
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5888BD40: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BD46: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x5888BD4D: jle 0x5888bd66
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5888BD4F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD56: je 0x5888bd66
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888BD58: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD5E: add ecx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD64: jmp 0x5888bd68
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BD66: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5888BD68: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD6D: add dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5888BD71: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x5888BD74: push edx
        __asm _emit 0x52
        // 0x5888BD75: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BD79: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD7F: push edx
        __asm _emit 0x52
        // 0x5888BD80: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5888BD84: add edx, 0xcd
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BD8A: push edx
        __asm _emit 0x52
        // 0x5888BD8B: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BD91: push ecx
        __asm _emit 0x51
        // 0x5888BD92: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888BD98: push esi
        __asm _emit 0x56
        // 0x5888BD99: push ecx
        __asm _emit 0x51
        // 0x5888BD9A: push edx
        __asm _emit 0x52
        // 0x5888BD9B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888BD9D: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x1F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888BDA2: jmp 0x5888bda6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888BDA4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888BDA6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888BDA8: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5888BDAD: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BDB3: call 0x5888b990
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888BDB8: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BDBD: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888BDC1: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5888BDC6: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5888BDC9: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BDCE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888BDD2: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5888BDD5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888BDD7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BDDB: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5888BDDE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888BDE2: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5888BDE5: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BDE9: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5888BDEC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888BDF0: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5888BDF3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BDF7: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5888BDFA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888BDFE: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5888BE01: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BE05: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BE0B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5888BE0F: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BE15: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888BE19: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5888BE1B: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888BE1F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BE26: pop ecx
        __asm _emit 0x59
        // 0x5888BE27: pop edi
        __asm _emit 0x5F
        // 0x5888BE28: pop esi
        __asm _emit 0x5E
        // 0x5888BE29: pop ebp
        __asm _emit 0x5D
        // 0x5888BE2A: pop ebx
        __asm _emit 0x5B
        // 0x5888BE2B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888BE2E: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
