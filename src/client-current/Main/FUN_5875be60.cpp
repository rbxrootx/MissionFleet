// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875BE60 .. +0x393 bytes.
// Source symbol alias: FUN_5875be60.
extern "C" __declspec(naked) void FUN_5875be60() {
    __asm {
        // 0x5875BE60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875BE62: push 0x5897eb44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xEB
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875BE67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BE6D: push eax
        __asm _emit 0x50
        // 0x5875BE6E: push ecx
        __asm _emit 0x51
        // 0x5875BE6F: push ebx
        __asm _emit 0x53
        // 0x5875BE70: push esi
        __asm _emit 0x56
        // 0x5875BE71: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875BE76: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875BE78: push eax
        __asm _emit 0x50
        // 0x5875BE79: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875BE7D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BE83: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875BE85: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875BE89: mov eax, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875BE8D: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5875BE91: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BE95: push eax
        __asm _emit 0x50
        // 0x5875BE96: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BE9A: push ecx
        __asm _emit 0x51
        // 0x5875BE9B: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BE9F: push edx
        __asm _emit 0x52
        // 0x5875BEA0: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BEA4: push eax
        __asm _emit 0x50
        // 0x5875BEA5: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5875BEA9: push ecx
        __asm _emit 0x51
        // 0x5875BEAA: push edx
        __asm _emit 0x52
        // 0x5875BEAB: push eax
        __asm _emit 0x50
        // 0x5875BEAC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875BEAE: call 0x5875bb10
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BEB3: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5875BEB7: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5875BEBB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5875BEBD: add eax, 0xfffffc7c
        __asm _emit 0x05
        __asm _emit 0x7C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BEC2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875BEC4: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875BEC8: mov dword ptr [esi], 0x5898d8e8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875BECE: mov dword ptr [esi + 0x13c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BED4: mov dword ptr [esi + 0x134], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEDA: mov dword ptr [esi + 0x130], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEE4: mov dword ptr [esi + 0x12c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEEA: mov dword ptr [esi + 0x148], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEF0: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEF6: jge 0x5875bf00
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5875BEF8: lea edx, [eax + 0xe10]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BEFE: jmp 0x5875bf08
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5875BF00: cdq
        __asm _emit 0x99
        // 0x5875BF01: mov ecx, 0xe10
        __asm _emit 0xB9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF06: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5875BF08: lea ecx, [edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0x14
        // 0x5875BF0B: mov dword ptr [esi + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF11: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5875BF16: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875BF18: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5875BF1B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875BF1D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875BF20: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875BF22: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5A
        // 0x5875BF25: jl 0x5875bf2a
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x5875BF27: sub eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x5A
        // 0x5875BF2A: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF31: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5875BF33: mov dword ptr [esi + 0x140], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF39: add ecx, 7
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x07
        // 0x5875BF3C: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5875BF3E: mov dword ptr [esi + 0x144], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF44: mov dword ptr [esi + 0x150], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF4A: mov dword ptr [esi + 0x154], 5
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF54: mov dword ptr [esi + 0x158], 0x19
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF5E: mov dword ptr [esi + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF64: mov dword ptr [esi + 0x178], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF6A: mov dword ptr [esi + 0x180], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF70: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x0C
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875BF75: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875BF78: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875BF7C: mov byte ptr [esp + 0x18], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5875BF81: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875BF83: je 0x5875bfbb
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5875BF85: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875BF8B: cmp dword ptr [ecx + 0x170], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5875BF92: jle 0x5875bfaf
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x5875BF94: cmp dword ptr [ecx + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BF9A: je 0x5875bfaf
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5875BF9C: mov edx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BFA2: mov ecx, dword ptr [edx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x40
        // 0x5875BFA5: push ecx
        __asm _emit 0x51
        // 0x5875BFA6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875BFA8: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xB3
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5875BFAD: jmp 0x5875bfbd
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x5875BFAF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875BFB1: push ecx
        __asm _emit 0x51
        // 0x5875BFB2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875BFB4: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xB3
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5875BFB9: jmp 0x5875bfbd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875BFBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875BFBD: mov dword ptr [esi + 0x18c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BFC3: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875BFC9: push ecx
        __asm _emit 0x51
        // 0x5875BFCA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875BFCC: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875BFD0: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xB9
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875BFD5: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5875BFD7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x0C
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875BFDC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875BFDF: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875BFE3: mov byte ptr [esp + 0x18], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        // 0x5875BFE8: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875BFEA: je 0x5875c02b
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5875BFEC: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875BFF2: cmp dword ptr [ecx + 0x160], 0x37
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x37
        // 0x5875BFF9: jle 0x5875c011
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875BFFB: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C001: je 0x5875c011
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875C003: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C009: add edx, 0xdc0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C00F: jmp 0x5875c013
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875C011: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875C013: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5875C016: push 0xfa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C01B: push ecx
        __asm _emit 0x51
        // 0x5875C01C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5875C01F: push ecx
        __asm _emit 0x51
        // 0x5875C020: push edx
        __asm _emit 0x52
        // 0x5875C021: push esi
        __asm _emit 0x56
        // 0x5875C022: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875C024: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x8A
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875C029: jmp 0x5875c02d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875C02B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875C02D: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5875C02F: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875C033: mov dword ptr [esi + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C039: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875C03E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875C041: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875C045: mov byte ptr [esp + 0x18], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x03
        // 0x5875C04A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875C04C: je 0x5875c08d
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5875C04E: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875C054: cmp dword ptr [ecx + 0x160], 0x38
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x38
        // 0x5875C05B: jle 0x5875c073
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875C05D: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C063: je 0x5875c073
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5875C065: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C06B: add edx, 0xe00
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C071: jmp 0x5875c075
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875C073: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875C075: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5875C078: push 0xf9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C07D: push ecx
        __asm _emit 0x51
        // 0x5875C07E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5875C081: push ecx
        __asm _emit 0x51
        // 0x5875C082: push edx
        __asm _emit 0x52
        // 0x5875C083: push esi
        __asm _emit 0x56
        // 0x5875C084: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875C086: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x89
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875C08B: jmp 0x5875c08f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875C08D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875C08F: mov dword ptr [esi + 0x194], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C095: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C09B: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0A0: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875C0A4: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0AA: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5875C0AC: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875C0B0: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x6C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875C0B5: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0BB: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0C0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x6C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875C0C5: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0CB: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0D0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875C0D4: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0DA: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0DF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875C0E3: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0E9: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0EE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875C0F2: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0F8: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C0FE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875C101: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C107: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x5875C109: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x6B
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875C10E: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C114: push 0xffffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875C119: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x6C
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875C11E: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C124: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C129: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875C12D: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C133: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C138: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875C13C: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C142: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C147: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5875C14B: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C151: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C157: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C15C: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5875C15F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x0A
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875C164: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875C167: mov dword ptr [esp + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5875C16B: mov byte ptr [esp + 0x18], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x04
        // 0x5875C170: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5875C172: je 0x5875c1b2
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5875C174: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875C17A: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x5875C181: jle 0x5875c197
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5875C183: cmp dword ptr [ecx + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C189: je 0x5875c197
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5875C18B: mov ebx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C191: add ebx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C197: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5875C19A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5875C19D: sub ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x14
        // 0x5875C1A0: push ecx
        __asm _emit 0x51
        // 0x5875C1A1: sub edx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x1E
        // 0x5875C1A4: push edx
        __asm _emit 0x52
        // 0x5875C1A5: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5875C1A7: push ebx
        __asm _emit 0x53
        // 0x5875C1A8: push esi
        __asm _emit 0x56
        // 0x5875C1A9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875C1AB: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xAF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875C1B0: jmp 0x5875c1b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875C1B2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875C1B4: mov dword ptr [esi + 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C1BA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C1BF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5875C1C3: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5875C1C5: mov dword ptr [esi + 0x15c], 0xe1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C1CF: mov dword ptr [esi + 0x160], 0x87
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C1D9: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5875C1DD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875C1DF: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875C1E3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875C1EA: pop ecx
        __asm _emit 0x59
        // 0x5875C1EB: pop esi
        __asm _emit 0x5E
        // 0x5875C1EC: pop ebx
        __asm _emit 0x5B
        // 0x5875C1ED: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875C1F0: ret 0x34
        __asm _emit 0xC2
        __asm _emit 0x34
        __asm _emit 0x00
    }
}
