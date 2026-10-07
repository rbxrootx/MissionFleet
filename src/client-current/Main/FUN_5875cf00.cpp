// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1184 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875cf00.

// Ghidra body range 0x5875CF00..0x5875D3A0; 1184 mapped bytes.
extern "C" __declspec(naked) void FUN_5875cf00_segment_00() {
    __asm {
        // 0x5875CF00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875CF02: push 0x5897ec02
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0xEC
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875CF07: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF0D: push eax
        __asm _emit 0x50
        // 0x5875CF0E: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5875CF11: push ebx
        __asm _emit 0x53
        // 0x5875CF12: push ebp
        __asm _emit 0x55
        // 0x5875CF13: push esi
        __asm _emit 0x56
        // 0x5875CF14: push edi
        __asm _emit 0x57
        // 0x5875CF15: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875CF1A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875CF1C: push eax
        __asm _emit 0x50
        // 0x5875CF1D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875CF21: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF27: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875CF29: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875CF2B: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5875CF2E: mov dword ptr [esi + 0x68], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF35: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875CF3A: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5875CF3D: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF44: mov dword ptr [esi + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5875CF47: cmp dword ptr [esi + 0x64], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5875CF4A: jne 0x5875d307
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF50: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF55: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xFC
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875CF5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875CF5D: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875CF61: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875CF65: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875CF67: je 0x5875cfa5
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5875CF69: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875CF6F: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5875CF72: cmp dword ptr [edi + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF79: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x5875CF7C: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5875CF7F: jle 0x5875cf8b
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5875CF81: mov edi, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF87: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875CF89: jne 0x5875cf8d
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5875CF8B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875CF8D: add ebx, 0x50
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x50
        // 0x5875CF90: push ebx
        __asm _emit 0x53
        // 0x5875CF91: add ebp, 0x99
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CF97: push ebp
        __asm _emit 0x55
        // 0x5875CF98: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5875CF9A: push edi
        __asm _emit 0x57
        // 0x5875CF9B: push edx
        __asm _emit 0x52
        // 0x5875CF9C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875CF9E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xA1
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875CFA3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875CFA5: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5875CFA8: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5875CFAB: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x5875CFAE: mov edx, 0x26ac
        __asm _emit 0xBA
        __asm _emit 0xAC
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CFB3: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875CFB7: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5875CFBB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875CFBD: je 0x5875cfc5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875CFBF: push edi
        __asm _emit 0x57
        // 0x5875CFC0: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875CFC5: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5875CFC8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875CFCA: je 0x5875cfd2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875CFCC: push edi
        __asm _emit 0x57
        // 0x5875CFCD: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875CFD2: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CFD7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xFC
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875CFDC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875CFDF: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875CFE3: mov dword ptr [esp + 0x2c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CFEB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875CFED: je 0x5875d02d
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5875CFEF: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875CFF5: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5875CFF8: cmp dword ptr [edi + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CFFF: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5875D002: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x5875D005: jle 0x5875d011
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5875D007: mov edi, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D00D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875D00F: jne 0x5875d013
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5875D011: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875D013: add ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x50
        // 0x5875D016: push ecx
        __asm _emit 0x51
        // 0x5875D017: add ebx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D01D: push ebx
        __asm _emit 0x53
        // 0x5875D01E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5875D020: push edi
        __asm _emit 0x57
        // 0x5875D021: push edx
        __asm _emit 0x52
        // 0x5875D022: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875D024: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xA0
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D029: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875D02B: jmp 0x5875d02f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D02D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875D02F: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5875D032: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5875D035: mov eax, 0x26ac
        __asm _emit 0xB8
        __asm _emit 0xAC
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D03A: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875D03E: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5875D042: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875D044: je 0x5875d04c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875D046: push edi
        __asm _emit 0x57
        // 0x5875D047: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D04C: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5875D04F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875D051: je 0x5875d059
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5875D053: push edi
        __asm _emit 0x57
        // 0x5875D054: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x5E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D059: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875D05B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFB
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875D060: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875D063: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D067: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D06F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875D071: je 0x5875d0b4
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5875D073: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875D079: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5875D07C: cmp dword ptr [edi + 0x164], 2
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5875D083: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5875D086: mov ebx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x5875D089: jle 0x5875d09a
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5875D08B: mov edi, dword ptr [edi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D091: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875D093: je 0x5875d09a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875D095: mov edi, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x08
        // 0x5875D098: jmp 0x5875d09c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D09A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875D09C: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D0A1: add ecx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x46
        // 0x5875D0A4: push ecx
        __asm _emit 0x51
        // 0x5875D0A5: add ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0A
        // 0x5875D0A8: push ebx
        __asm _emit 0x53
        // 0x5875D0A9: push edi
        __asm _emit 0x57
        // 0x5875D0AA: push edx
        __asm _emit 0x52
        // 0x5875D0AB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875D0AD: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x4B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875D0B2: jmp 0x5875d0b6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D0B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875D0B6: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875D0B8: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875D0BC: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5875D0BF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xFB
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875D0C4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875D0C7: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D0CB: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D0D0: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875D0D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875D0D6: je 0x5875d11b
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5875D0D8: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875D0DE: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5875D0E1: cmp dword ptr [edi + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D0E7: mov ebx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x08
        // 0x5875D0EA: mov ebp, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5875D0ED: jle 0x5875d0fe
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5875D0EF: mov edi, dword ptr [edi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D0F5: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875D0F7: je 0x5875d0fe
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5875D0F9: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5875D0FC: jmp 0x5875d100
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D0FE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875D100: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D105: add ebx, 0x46
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x46
        // 0x5875D108: push ebx
        __asm _emit 0x53
        // 0x5875D109: add ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0A
        // 0x5875D10C: push ebp
        __asm _emit 0x55
        // 0x5875D10D: push ecx
        __asm _emit 0x51
        // 0x5875D10E: push edx
        __asm _emit 0x52
        // 0x5875D10F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875D111: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x4B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875D116: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x5875D119: jmp 0x5875d11d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D11B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875D11D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D122: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875D124: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875D128: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5875D12B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x5B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D130: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5875D133: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875D138: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x5B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D13D: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D142: lea ecx, [esi + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x34
        // 0x5875D145: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D149: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875D14D: mov dword ptr [esp + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D155: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875D157: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xFA
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875D15C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875D15E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875D161: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875D165: mov dword ptr [esp + 0x2c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D16D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875D16F: je 0x5875d205
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D175: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5875D178: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875D17D: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x5875D180: lea edx, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xFF
        // 0x5875D183: cmp dword ptr [ecx + 0x164], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D189: jle 0x5875d1a3
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5875D18B: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5875D18D: jl 0x5875d1a3
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5875D18F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D195: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875D197: je 0x5875d1a3
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5875D199: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875D19D: mov ebx, dword ptr [ecx + edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x11
        __asm _emit 0xFC
        // 0x5875D1A1: jmp 0x5875d1a5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D1A3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875D1A5: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5875D1A8: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D1AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875D1AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875D1B1: add ebp, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D1B7: push ebp
        __asm _emit 0x55
        // 0x5875D1B8: add ecx, 0x190
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D1BE: push ecx
        __asm _emit 0x51
        // 0x5875D1BF: push eax
        __asm _emit 0x50
        // 0x5875D1C0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875D1C2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D1C7: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875D1CD: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5875D1D0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875D1D2: je 0x5875d1fa
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5875D1D4: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x5875D1D7: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5875D1DA: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x5875D1DD: lea eax, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5875D1E0: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5875D1E3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875D1E5: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5875D1E8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5875D1EB: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5875D1EE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875D1F1: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5875D1F4: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875D1F7: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5875D1FA: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D1FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875D200: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x5875D203: jmp 0x5875d207
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D205: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875D207: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875D20B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D210: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875D214: mov dword ptr [edx - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0xE4
        // 0x5875D217: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x5B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D21C: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5875D21E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xFA
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875D223: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875D225: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875D228: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875D22C: mov dword ptr [esp + 0x2c], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D234: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875D236: je 0x5875d2c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D23C: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875D241: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5875D244: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D24A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875D24D: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5875D250: jle 0x5875d269
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5875D252: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875D254: jl 0x5875d269
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5875D256: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D25C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875D25E: je 0x5875d269
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5875D260: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875D264: mov ebx, dword ptr [ecx + ebx]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x19
        // 0x5875D267: jmp 0x5875d26b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D269: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875D26B: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D270: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875D272: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875D274: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D27A: push edx
        __asm _emit 0x52
        // 0x5875D27B: add ebp, 0x190
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D281: push ebp
        __asm _emit 0x55
        // 0x5875D282: push eax
        __asm _emit 0x50
        // 0x5875D283: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875D285: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x5F
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D28A: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875D290: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x5875D293: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875D295: je 0x5875d2bd
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5875D297: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x5875D29A: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5875D29D: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x5875D2A0: lea eax, [ebx + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5875D2A3: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5875D2A6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875D2A8: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5875D2AB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5875D2AE: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5875D2B1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5875D2B4: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5875D2B7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5875D2BA: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5875D2BD: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D2C1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5875D2C3: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x5875D2C6: jmp 0x5875d2ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875D2C8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875D2CA: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875D2CE: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875D2D3: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5875D2D7: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x5875D2D9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x5A
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875D2DE: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875D2E2: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x5875D2E5: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5875D2E8: add ebx, 2
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x02
        // 0x5875D2EB: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4C
        // 0x5875D2EE: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875D2F2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875D2F6: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875D2FA: jl 0x5875d155
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x55
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875D300: mov dword ptr [esi + 0x64], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D307: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5875D30A: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D30F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D313: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5875D316: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875D318: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D31C: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5875D31F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D323: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5875D326: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D32A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5875D32D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D331: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5875D334: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D338: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5875D33B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D33F: mov eax, dword ptr [esi + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x5875D342: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D346: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5875D349: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D34D: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5875D350: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D354: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5875D357: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D35B: mov eax, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x5875D35E: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D362: mov eax, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5875D365: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D369: mov eax, dword ptr [esi + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x5875D36C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D370: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5875D373: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D377: mov eax, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x48
        // 0x5875D37A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875D37E: mov eax, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x30
        // 0x5875D381: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875D385: mov esi, dword ptr [esi + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x4C
        // 0x5875D388: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5875D38C: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5875D390: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875D397: pop ecx
        __asm _emit 0x59
        // 0x5875D398: pop edi
        __asm _emit 0x5F
        // 0x5875D399: pop esi
        __asm _emit 0x5E
        // 0x5875D39A: pop ebp
        __asm _emit 0x5D
        // 0x5875D39B: pop ebx
        __asm _emit 0x5B
        // 0x5875D39C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x5875D39F: ret
        __asm _emit 0xC3
    }
}
