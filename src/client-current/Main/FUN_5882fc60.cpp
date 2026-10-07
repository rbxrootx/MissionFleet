// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 931 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882fc60.

// Ghidra body range 0x5882FC60..0x58830003; 931 mapped bytes.
extern "C" __declspec(naked) void FUN_5882fc60_segment_00() {
    __asm {
        // 0x5882FC60: sub esp, 0x204
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC66: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882FC6B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882FC6D: mov dword ptr [esp + 0x200], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC74: push ebx
        __asm _emit 0x53
        // 0x5882FC75: push esi
        __asm _emit 0x56
        // 0x5882FC76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882FC78: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FC7B: push edi
        __asm _emit 0x57
        // 0x5882FC7C: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x67
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FC81: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FC87: shr eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5882FC8A: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5882FC8D: add eax, 0x69
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x69
        // 0x5882FC90: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FC96: jle 0x5882fcb0
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5882FC98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FC9A: jl 0x5882fcb0
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5882FC9C: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FCA3: je 0x5882fcb0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5882FCA5: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FCAB: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x5882FCAE: jmp 0x5882fcb2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882FCB0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882FCB2: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5882FCB5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5882FCB8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FCBA: je 0x5882fce4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5882FCBC: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5882FCBF: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5882FCC2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5882FCC5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5882FCC8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5882FCCB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882FCCD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5882FCD0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5882FCD2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882FCD5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5882FCD8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5882FCDB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5882FCDE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5882FCE1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5882FCE4: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FCE7: call 0x58786630
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x69
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FCEC: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882FCF2: dec eax
        __asm _emit 0x48
        // 0x5882FCF3: push eax
        __asm _emit 0x50
        // 0x5882FCF4: call 0x58755ff0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x62
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5882FCF9: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5882FCFC: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5882FCFF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FD01: je 0x5882fd2b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5882FD03: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5882FD06: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5882FD09: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5882FD0C: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5882FD0F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5882FD12: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5882FD14: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5882FD17: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5882FD19: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5882FD1C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5882FD1F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5882FD22: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5882FD25: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5882FD28: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5882FD2B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD2E: call 0x58785fd0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD33: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD36: call 0x58786150
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD3B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD3E: call 0x58786340
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD43: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD46: call 0x587863c0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x66
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD4B: movzx eax, byte ptr [esi + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FD52: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x5882FD55: lea edx, [esi + ecx*8 + 0x144]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0xCE
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FD5C: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5882FD5F: push edx
        __asm _emit 0x52
        // 0x5882FD60: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x1F
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FD65: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD68: call 0x58786320
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD6D: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5882FD70: push eax
        __asm _emit 0x50
        // 0x5882FD71: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x1F
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FD76: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD79: call 0x58786330
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x65
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD7E: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FD84: push eax
        __asm _emit 0x50
        // 0x5882FD85: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x1F
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FD8A: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FD8D: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x61
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FD92: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FD98: push eax
        __asm _emit 0x50
        // 0x5882FD99: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x75
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FD9E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FDA1: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FDA6: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FDAB: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FDB1: lea eax, [esp + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x5882FDB5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882FDB7: push eax
        __asm _emit 0x50
        // 0x5882FDB8: mov byte ptr [esp + 0x18], 0x20
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x20
        // 0x5882FDBD: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882FDC2: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FDC5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5882FDC8: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FDCD: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FDD3: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882FDD9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882FDDB: jbe 0x5882fe19
        __asm _emit 0x76
        __asm _emit 0x3C
        // 0x5882FDDD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FDE0: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FDE5: cmp eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5882FDE8: jae 0x5882fe19
        __asm _emit 0x73
        __asm _emit 0x2F
        // 0x5882FDEA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FDED: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FDF2: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FDF5: inc eax
        __asm _emit 0x40
        // 0x5882FDF6: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FDFC: push eax
        __asm _emit 0x50
        // 0x5882FDFD: call 0x58785ea0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FE02: inc eax
        __asm _emit 0x40
        // 0x5882FE03: push eax
        __asm _emit 0x50
        // 0x5882FE04: push 0x5899e07c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FE09: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882FE0B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FE0E: push eax
        __asm _emit 0x50
        // 0x5882FE0F: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882FE13: push ecx
        __asm _emit 0x51
        // 0x5882FE14: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882FE16: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882FE19: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE1F: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882FE23: push edx
        __asm _emit 0x52
        // 0x5882FE24: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x1E
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FE29: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FE2C: call 0x58785ed0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FE31: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE37: push eax
        __asm _emit 0x50
        // 0x5882FE38: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x75
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE3D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FE40: call 0x58785f30
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FE45: mov ecx, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE4B: push eax
        __asm _emit 0x50
        // 0x5882FE4C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x75
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE51: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE57: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882FE59: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xBD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE5E: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE64: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882FE66: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE6B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FE6E: call 0x58785f00
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FE73: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE79: push eax
        __asm _emit 0x50
        // 0x5882FE7A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE7F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FE82: call 0x58785f60
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FE87: mov ecx, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE8D: push eax
        __asm _emit 0x50
        // 0x5882FE8E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FE93: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FE99: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882FE9B: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xBD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FEA0: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FEA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882FEA8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FEAD: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FEB0: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5882FEB5: call 0x58785f90
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FEBA: push eax
        __asm _emit 0x50
        // 0x5882FEBB: push 0x5899e054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FEC0: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882FEC2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FEC5: push eax
        __asm _emit 0x50
        // 0x5882FEC6: lea eax, [esp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FECD: push eax
        __asm _emit 0x50
        // 0x5882FECE: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882FED0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882FED3: lea ecx, [esp + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FEDA: push ecx
        __asm _emit 0x51
        // 0x5882FEDB: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FEE1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x1D
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FEE6: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FEE9: push 0xf4240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5882FEEE: call 0x58785fc0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x60
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FEF3: push eax
        __asm _emit 0x50
        // 0x5882FEF4: push 0x5899e054
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xE0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882FEF9: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5882FEFB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882FEFE: push eax
        __asm _emit 0x50
        // 0x5882FEFF: lea edx, [esp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF06: push edx
        __asm _emit 0x52
        // 0x5882FF07: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5882FF09: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF0F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5882FF12: lea eax, [esp + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF19: push eax
        __asm _emit 0x50
        // 0x5882FF1A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1D
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882FF1F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF22: call 0x58786200
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF27: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5882FF2A: push ecx
        __asm _emit 0x51
        // 0x5882FF2B: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF31: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FF36: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF39: call 0x58786210
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF3E: mov ecx, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF44: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5882FF47: push edx
        __asm _emit 0x52
        // 0x5882FF48: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FF4D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF50: call 0x58786220
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF55: mov ecx, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF5B: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5882FF5E: push eax
        __asm _emit 0x50
        // 0x5882FF5F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FF64: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF67: call 0x58786230
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF6C: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5882FF6F: push ecx
        __asm _emit 0x51
        // 0x5882FF70: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF76: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FF7B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF7E: call 0x58786240
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF83: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FF89: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5882FF8C: push edx
        __asm _emit 0x52
        // 0x5882FF8D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FF92: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FF95: call 0x58786250
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x62
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FF9A: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FFA0: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5882FFA3: push eax
        __asm _emit 0x50
        // 0x5882FFA4: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FFA9: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FFAC: call 0x587863b0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x63
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FFB1: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x5882FFB4: push ecx
        __asm _emit 0x51
        // 0x5882FFB5: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FFBB: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FFC0: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FFC3: call 0x58786430
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FFC8: mov ecx, dword ptr [esi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FFCE: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5882FFD1: push edx
        __asm _emit 0x52
        // 0x5882FFD2: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FFD7: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882FFDA: call 0x58786460
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882FFDF: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FFE5: push eax
        __asm _emit 0x50
        // 0x5882FFE6: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x73
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882FFEB: mov ecx, dword ptr [esp + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882FFF2: pop edi
        __asm _emit 0x5F
        // 0x5882FFF3: pop esi
        __asm _emit 0x5E
        // 0x5882FFF4: pop ebx
        __asm _emit 0x5B
        // 0x5882FFF5: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882FFF7: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xCB
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882FFFC: add esp, 0x204
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58830002: ret
        __asm _emit 0xC3
    }
}
