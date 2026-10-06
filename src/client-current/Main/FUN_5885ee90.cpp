// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1277 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_5885ee90.

// Ghidra body range 0x5885EE90..0x5885F198; 776 mapped bytes.
extern "C" __declspec(naked) void FUN_5885ee90_segment_00() {
    __asm {
        // 0x5885EE90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885EE92: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5885EE95: push ebx
        __asm _emit 0x53
        // 0x5885EE96: push ebp
        __asm _emit 0x55
        // 0x5885EE97: push esi
        __asm _emit 0x56
        // 0x5885EE98: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885EE9A: mov dword ptr [esi + 0x148], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEA0: mov dword ptr [esi + 0x14c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEA6: mov dword ptr [esi + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEAC: mov dword ptr [esi + 0x154], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEB2: mov dword ptr [esi + 0x158], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEB8: mov dword ptr [esi + 0x640], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEBE: mov dword ptr [esi + 0x644], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEC4: mov dword ptr [esi + 0x648], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EECA: mov dword ptr [esi + 0x64c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EED0: mov dword ptr [esi + 0x650], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EED6: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885EED8: mov dword ptr [esi + 0x63c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEDE: mov dword ptr [esi + 0x118], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEE4: mov dword ptr [esi + 0x11c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEEA: mov dword ptr [esi + 0x698], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEF0: mov dword ptr [esi + 0x69c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEF6: mov dword ptr [esi + 0x6a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EEFC: mov dword ptr [esi + 0x6a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF02: mov dword ptr [esi + 0x6a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF08: mov dword ptr [esi + 0x5f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF0E: mov dword ptr [esi + 0x5f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF14: mov dword ptr [esi + 0x5fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF1A: mov dword ptr [esi + 0x600], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF20: mov dword ptr [esi + 0x5d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF26: mov dword ptr [esi + 0x5d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF2C: mov dword ptr [esi + 0x5d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF32: mov dword ptr [esi + 0x5dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF38: mov dword ptr [esi + 0x5e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF3E: mov dword ptr [esi + 0x614], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF44: mov dword ptr [esi + 0x618], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF4A: mov dword ptr [esi + 0x61c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF50: mov dword ptr [esi + 0x620], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF56: mov dword ptr [esi + 0x624], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF5C: lea eax, [esi + 0x120]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF62: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885EF64: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5885EF66: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885EF69: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5885EF6C: push edi
        __asm _emit 0x57
        // 0x5885EF6D: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5885EF70: mov dword ptr [eax + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5885EF73: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885EF75: lea ebp, [ebx + 5]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x05
        // 0x5885EF78: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885EF7E: push ebx
        __asm _emit 0x53
        // 0x5885EF7F: push edi
        __asm _emit 0x57
        // 0x5885EF80: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x26
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885EF85: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5885EF88: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5885EF8B: jne 0x5885ef78
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5885EF8D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885EF8F: mov dword ptr [esi + 0x134], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF95: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EF9B: mov dword ptr [esi + 0x13c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFA1: mov dword ptr [esi + 0x140], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFA7: mov dword ptr [esi + 0x144], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFAD: mov dword ptr [esi + 0x628], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFB3: mov dword ptr [esi + 0x62c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFB9: mov dword ptr [esi + 0x630], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFBF: mov dword ptr [esi + 0x634], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFC5: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFCB: mov dword ptr [esi + 0x15c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFD1: mov dword ptr [esi + 0x160], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFD7: mov dword ptr [esi + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFDD: mov dword ptr [esi + 0x168], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFE3: mov dword ptr [esi + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFE9: mov dword ptr [esi + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFEF: mov dword ptr [esi + 0x174], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFF5: mov dword ptr [esi + 0x178], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885EFFB: mov dword ptr [esi + 0x17c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F001: mov dword ptr [esi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F007: mov dword ptr [esi + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F00D: mov dword ptr [esi + 0x188], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F013: mov dword ptr [esi + 0x18c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F019: mov dword ptr [esi + 0x190], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F01F: mov dword ptr [esi + 0x194], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F025: mov dword ptr [esi + 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F02B: mov dword ptr [esi + 0x19c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F031: mov dword ptr [esi + 0x1a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F037: mov dword ptr [esi + 0x1a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F03D: mov dword ptr [esi + 0x1a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F043: lea eax, [esi + 0x188]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F049: lea ecx, [ebp + 5]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x05
        // 0x5885F04C: mov edx, 0xa0e6b2d0
        __asm _emit 0xBA
        __asm _emit 0xD0
        __asm _emit 0xB2
        __asm _emit 0xE6
        __asm _emit 0xA0
        // 0x5885F051: mov dword ptr [eax - 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x5885F054: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5885F056: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x5885F059: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5885F05C: jne 0x5885f051
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5885F05E: push 0x424
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F063: lea eax, [esi + 0x1ac]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F069: push ebx
        __asm _emit 0x53
        // 0x5885F06A: push eax
        __asm _emit 0x50
        // 0x5885F06B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885F070: mov ecx, dword ptr [esi + 0x70c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F076: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885F079: push ebx
        __asm _emit 0x53
        // 0x5885F07A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x82
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F07F: mov ecx, dword ptr [esi + 0x710]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F085: push ebx
        __asm _emit 0x53
        // 0x5885F086: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x82
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F08B: mov ecx, dword ptr [esi + 0x714]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F091: push ebx
        __asm _emit 0x53
        // 0x5885F092: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x82
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F097: mov ecx, dword ptr [esi + 0x718]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F09D: push ebx
        __asm _emit 0x53
        // 0x5885F09E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x82
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F0A3: mov ecx, dword ptr [esi + 0x704]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0A9: push ebx
        __asm _emit 0x53
        // 0x5885F0AA: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x82
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885F0AF: lea edi, [esi + 0x6ac]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0B5: mov ebp, 5
        __asm _emit 0xBD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0BA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0C0: mov eax, dword ptr [edi - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xD0
        // 0x5885F0C3: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0C8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885F0CC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5885F0CE: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x4D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5885F0D3: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5885F0D6: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5885F0D9: jne 0x5885f0c0
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x5885F0DB: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0E0: mov dword ptr [esi + 0x5e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0E6: mov dword ptr [esi + 0x5e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0EC: mov dword ptr [esi + 0x5ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0F2: mov dword ptr [esi + 0x5f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0F8: mov edx, dword ptr [esi + 0x6c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F0FE: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5885F101: mov eax, dword ptr [esi + 0x6c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F107: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5885F10A: mov ecx, dword ptr [esi + 0x6c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F110: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5885F113: mov edx, dword ptr [esi + 0x6cc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xCC
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F119: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5885F11C: mov eax, dword ptr [esi + 0x6d0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F122: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5885F125: mov eax, dword ptr [esi + 0x728]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F12B: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F130: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885F134: mov eax, dword ptr [esi + 0x72c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F13A: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885F13C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885F140: mov eax, dword ptr [esi + 0x734]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F146: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885F14A: mov eax, dword ptr [esi + 0x730]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F150: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5885F154: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F159: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885F15C: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F162: mov eax, dword ptr [edx + 0x388]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F168: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F16C: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F170: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F176: fmul qword ptr [0x5899eb28]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885F17C: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xDB
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885F181: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F187: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F18D: mov byte ptr [esp + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F191: mov edi, 0xa0
        __asm _emit 0xBF
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F196: jmp 0x5885f1a0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5885F1A0..0x5885F395; 501 mapped bytes.
extern "C" __declspec(naked) void FUN_5885ee90_segment_01() {
    __asm {
        // 0x5885F1A0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885F1A3: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1A9: mov cl, byte ptr [ecx + 0x35c]
        __asm _emit 0x8A
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1AF: movzx ebp, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xE9
        // 0x5885F1B2: cmp cl, byte ptr [eax + edi + 0x86b]
        __asm _emit 0x3A
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0x6B
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1B9: jne 0x5885f296
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1BF: cmp dword ptr [eax + edi + 0x884], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1C7: je 0x5885f1e4
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5885F1C9: push ebp
        __asm _emit 0x55
        // 0x5885F1CA: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1D0: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885F1D5: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F1DB: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5885F1DE: je 0x5885f296
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1E4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885F1E7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5885F1E9: cmp byte ptr [eax + 0x86a], 0x11
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x11
        // 0x5885F1F0: jne 0x5885f296
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1F6: cmp word ptr [eax + 0x876], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F1FD: jbe 0x5885f296
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F203: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5885F206: mov eax, dword ptr [ecx + edi + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F20D: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5885F20F: mov ecx, dword ptr [ecx + 0x86c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F215: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F21B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F21F: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F223: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885F225: jge 0x5885f22d
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5885F227: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885F22D: fmul qword ptr [0x5899eb20]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885F233: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885F235: xor ecx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885F23B: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5885F23D: xor ebp, 0xaa00000
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0x0A
        // 0x5885F243: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x5885F246: shr ebp, 0x14
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x14
        // 0x5885F249: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F24F: and ebp, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F255: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F25A: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5885F25C: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F261: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5885F263: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F267: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F26B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885F26D: jge 0x5885f275
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5885F26F: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885F275: fcompp
        __asm _emit 0xDE
        __asm _emit 0xD9
        // 0x5885F277: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x5885F279: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x5885F27C: jnp 0x5885f296
        __asm _emit 0x7B
        __asm _emit 0x18
        // 0x5885F27E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885F281: mov cl, byte ptr [eax + edi + 0x86b]
        __asm _emit 0x8A
        __asm _emit 0x8C
        __asm _emit 0x38
        __asm _emit 0x6B
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F288: movzx ebx, word ptr [eax + edi + 0x876]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9C
        __asm _emit 0x38
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F290: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5885F292: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F296: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x5885F299: cmp edi, 0x400
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F29F: jl 0x5885f1a0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885F2A5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5885F2A7: cmp bx, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x5885F2AA: jbe 0x5885f345
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F2B0: cmp byte ptr [esp + 0x10], 4
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x5885F2B5: jne 0x5885f2ee
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x5885F2B7: movzx edx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD3
        // 0x5885F2BA: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F2BE: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F2C2: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F2C6: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F2CB: fmul qword ptr [0x5898d780]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885F2D1: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F2D6: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2DA: fldcw word ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2DE: fistp dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2E2: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2E7: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x5885F2EA: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885F2EE: movzx ecx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCB
        // 0x5885F2F1: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2F5: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F2F9: fdiv qword ptr [0x5899eb18]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885F2FF: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xD9
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885F304: mov edx, 0x19
        __asm _emit 0xBA
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F309: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5885F30B: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F30F: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885F313: fmul qword ptr [0x5899c298]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885F319: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xD9
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885F31E: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7D
        // 0x5885F321: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F327: jle 0x5885f333
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5885F329: mov dword ptr [esi + 0xc4], 0x7d
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F333: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F339: lea ecx, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F33F: push eax
        __asm _emit 0x50
        // 0x5885F340: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5885F342: push ecx
        __asm _emit 0x51
        // 0x5885F343: jmp 0x5885f359
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5885F345: lea eax, [esi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F34B: push edi
        __asm _emit 0x57
        // 0x5885F34C: mov dword ptr [esi + 0xc4], 0x12
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F356: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5885F358: push eax
        __asm _emit 0x50
        // 0x5885F359: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885F35F: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x22
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885F364: mov eax, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F36A: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5885F36D: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F373: mov dword ptr [ecx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F37A: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F380: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5885F383: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885F389: pop edi
        __asm _emit 0x5F
        // 0x5885F38A: pop esi
        __asm _emit 0x5E
        // 0x5885F38B: pop ebp
        __asm _emit 0x5D
        // 0x5885F38C: pop ebx
        __asm _emit 0x5B
        // 0x5885F38D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5885F390: jmp 0x58793e00
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0x4A
        __asm _emit 0xF3
        __asm _emit 0xFF
    }
}
