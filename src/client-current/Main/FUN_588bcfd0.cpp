// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 483 bytes in 3 exact ranges.
// Source symbol alias: FUN_588bcfd0.

// Ghidra body range 0x588BCFD0..0x588BD0CD; 253 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcfd0_segment_00() {
    __asm {
        // 0x588BCFD0: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCFD6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588BCFDB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588BCFDD: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCFE4: push ebx
        __asm _emit 0x53
        // 0x588BCFE5: push ebp
        __asm _emit 0x55
        // 0x588BCFE6: push esi
        __asm _emit 0x56
        // 0x588BCFE7: push edi
        __asm _emit 0x57
        // 0x588BCFE8: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588BCFEA: mov byte ptr [edi + 0xac], 0
        __asm _emit 0xC6
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCFF1: mov byte ptr [edi + 0xad], 0
        __asm _emit 0xC6
        __asm _emit 0x87
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCFF8: mov byte ptr [edi + 0xae], 0
        __asm _emit 0xC6
        __asm _emit 0x87
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCFFF: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD005: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD00A: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x588BD00D: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588BD010: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD016: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD01C: lea ebp, [edi + 0x3d4]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD022: mov dword ptr [edi + 0x3dc], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD028: mov ebx, ebp
        __asm _emit 0x8B
        __asm _emit 0xDD
        // 0x588BD02A: mov dword ptr [esp + 0x10], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD032: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588BD034: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD039: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588BD03C: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588BD041: jne 0x588bd032
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588BD043: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588BD045: je 0x588bd15d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD04B: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588BD04E: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD054: push edx
        __asm _emit 0x52
        // 0x588BD055: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xBA
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588BD05A: movzx edx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BD05E: mov ebx, dword ptr [0x5898c040]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD064: lea ecx, [eax + 0x33c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD06A: push ecx
        __asm _emit 0x51
        // 0x588BD06B: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588BD06E: push edx
        __asm _emit 0x52
        // 0x588BD06F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BD071: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD074: push eax
        __asm _emit 0x50
        // 0x588BD075: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BD079: push 0x58998394
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BD07E: push eax
        __asm _emit 0x50
        // 0x588BD07F: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD085: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588BD088: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD08D: push esi
        __asm _emit 0x56
        // 0x588BD08E: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BD092: push ecx
        __asm _emit 0x51
        // 0x588BD093: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588BD096: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD09B: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x588BD09E: mov ecx, dword ptr [edi + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0A4: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD0A9: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588BD0AC: push edx
        __asm _emit 0x52
        // 0x588BD0AD: lea eax, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588BD0B0: push eax
        __asm _emit 0x50
        // 0x588BD0B1: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD0B6: inc byte ptr [edi + 0xac]
        __asm _emit 0xFE
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0BC: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD0C2: cmp esi, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x588BD0C5: je 0x588bd15d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0CB: jmp 0x588bd0d0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588BD0D0..0x588BD18A; 186 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcfd0_segment_01() {
    __asm {
        // 0x588BD0D0: cmp byte ptr [edi + 0xac], 0x64
        __asm _emit 0x80
        __asm _emit 0xBF
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        // 0x588BD0D7: je 0x588bd15d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0DD: mov esi, dword ptr [esi + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0E3: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588BD0E6: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD0EC: push edx
        __asm _emit 0x52
        // 0x588BD0ED: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xBA
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588BD0F2: movzx edx, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588BD0F6: lea ecx, [eax + 0x33c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD0FC: push ecx
        __asm _emit 0x51
        // 0x588BD0FD: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588BD100: push edx
        __asm _emit 0x52
        // 0x588BD101: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588BD103: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588BD106: push eax
        __asm _emit 0x50
        // 0x588BD107: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BD10B: push 0x58998394
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x83
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588BD110: push eax
        __asm _emit 0x50
        // 0x588BD111: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588BD117: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588BD11A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD11F: push esi
        __asm _emit 0x56
        // 0x588BD120: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588BD124: push ecx
        __asm _emit 0x51
        // 0x588BD125: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588BD128: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD12D: mov edx, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x48
        // 0x588BD130: mov ecx, dword ptr [edi + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD136: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588BD13B: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588BD13E: push edx
        __asm _emit 0x52
        // 0x588BD13F: lea eax, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588BD142: push eax
        __asm _emit 0x50
        // 0x588BD143: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BD148: inc byte ptr [edi + 0xac]
        __asm _emit 0xFE
        __asm _emit 0x87
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD14E: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588BD154: cmp esi, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x588BD157: jne 0x588bd0d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588BD15D: lea eax, [edi + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD163: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD168: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588BD16A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD170: mov dword ptr [eax + 0x190], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD176: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x588BD178: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588BD17B: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588BD17E: jne 0x588bd170
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588BD180: lea ecx, [edi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588BD183: mov edx, 7
        __asm _emit 0xBA
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD188: jmp 0x588bd190
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588BD190..0x588BD1BC; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcfd0_segment_02() {
    __asm {
        // 0x588BD190: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588BD192: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD197: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588BD19B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588BD19E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588BD1A1: jne 0x588bd190
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588BD1A3: mov ecx, dword ptr [esp + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD1AA: pop edi
        __asm _emit 0x5F
        // 0x588BD1AB: pop esi
        __asm _emit 0x5E
        // 0x588BD1AC: pop ebp
        __asm _emit 0x5D
        // 0x588BD1AD: pop ebx
        __asm _emit 0x5B
        // 0x588BD1AE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588BD1B0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xFA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588BD1B5: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BD1BB: ret
        __asm _emit 0xC3
    }
}
