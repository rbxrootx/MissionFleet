// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 835 bytes in 1 exact ranges.
// Source symbol alias: FUN_5873bf90.

// Ghidra body range 0x5873BF90..0x5873C2D3; 835 mapped bytes.
extern "C" __declspec(naked) void FUN_5873bf90_segment_00() {
    __asm {
        // 0x5873BF90: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x5873BF93: push ebp
        __asm _emit 0x55
        // 0x5873BF94: mov ebp, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873BF9A: push esi
        __asm _emit 0x56
        // 0x5873BF9B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873BF9D: mov ecx, dword ptr [ebp + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873BFA3: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873BFA8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873BFAA: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5873BFAD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873BFAF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873BFB2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873BFB4: imul eax, eax, 0x19
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x19
        // 0x5873BFB7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5873BFB9: jne 0x5873c2cd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BFBF: push ebx
        __asm _emit 0x53
        // 0x5873BFC0: push edi
        __asm _emit 0x57
        // 0x5873BFC1: cmp dword ptr [esi + 0x4cc], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BFC7: jne 0x5873c1dc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BFCD: cmp dword ptr [esi + 0x4c8], 4
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873BFD4: jne 0x5873bfe4
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5873BFD6: cmp word ptr [esi + 0x2cc], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873BFDE: jae 0x5873c2cb
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BFE4: cmp word ptr [esi + 0x2cc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5873BFEC: jne 0x5873c002
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5873BFEE: mov dword ptr [esi + 0x4dc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873BFF8: mov dword ptr [esi + 0x4d8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C002: movzx ebx, word ptr [esi + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9E
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C009: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C00F: mov ebp, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x5873C012: shr ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xEB
        // 0x5873C014: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873C018: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5873C01A: je 0x5873c2cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C020: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873C022: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xA6
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873C027: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5873C02C: jne 0x5873c1c5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C032: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873C034: cmp dword ptr [ebp + 0x6070], 1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5873C03B: jne 0x5873c05a
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5873C03D: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873C040: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873C046: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873C04C: push eax
        __asm _emit 0x50
        // 0x5873C04D: push ebp
        __asm _emit 0x55
        // 0x5873C04E: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x5873C053: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873C056: jne 0x5873c070
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5873C058: jmp 0x5873c06b
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5873C05A: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873C05D: mov dl, byte ptr [ebp + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C063: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C069: je 0x5873c070
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5873C06B: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C070: cmp dword ptr [esi + 0x74], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x5873C074: je 0x5873c07f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5873C076: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5873C079: jne 0x5873c1c5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C07F: lea ecx, [ebp + 0x1390]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C085: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873C089: mov dword ptr [esp + 0x1c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C091: cmp dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5873C095: je 0x5873c1b3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C09B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873C09D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873C0A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C0A3: je 0x5873c1b3
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0A9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0B0: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x5873C0B3: cmp dword ptr [edi + 0x460], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0BA: jne 0x5873c19c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0C0: mov edx, dword ptr [edi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0C6: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873C0CB: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C0CD: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873C0D0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C0D2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C0D5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873C0D7: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0DD: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5873C0DF: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873C0E4: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C0E6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873C0E9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C0EB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C0EE: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873C0F0: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5873C0F2: imul edx, edx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C0F8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873C0FB: sub ecx, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5873C0FE: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873C103: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C105: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873C108: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C10A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C10D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873C10F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873C111: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873C114: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873C116: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873C119: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873C11B: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873C11F: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873C123: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x0B
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C128: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x0B
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C12D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873C12F: jge 0x5873c198
        __asm _emit 0x7D
        __asm _emit 0x67
        // 0x5873C131: cmp dword ptr [esi + 0x464], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C138: jne 0x5873c198
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x5873C13A: cmp dword ptr [esi + 0x4c8], 0x64
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        // 0x5873C141: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873C143: jne 0x5873c161
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5873C145: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C14B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C14D: je 0x5873c161
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5873C14F: mov ecx, dword ptr [esi + 0x4dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C155: mov dword ptr [esi + 0x4e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C15B: mov dword ptr [esi + 0x4e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C161: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873C165: mov dword ptr [esi + 0x4d8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C16B: mov eax, dword ptr [edi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x7C
        // 0x5873C16E: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x5873C171: or eax, dword ptr [edi + 0x78]
        __asm _emit 0x0B
        __asm _emit 0x47
        __asm _emit 0x78
        // 0x5873C174: mov dword ptr [esi + 0x4c8], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C17E: mov dword ptr [esi + 0x4dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C184: mov dword ptr [esi + 0x4cc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C18E: mov dword ptr [esi + 0x31c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C198: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873C19C: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5873C19F: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873C1A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C1A5: jne 0x5873c0b0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C1AB: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873C1AF: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873C1B3: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x5873C1B6: sub dword ptr [esp + 0x1c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5873C1BB: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873C1BF: jne 0x5873c091
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C1C5: mov ebp, dword ptr [ebp + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x78
        // 0x5873C1C8: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5873C1CC: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5873C1CE: jne 0x5873c020
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C1D4: pop edi
        __asm _emit 0x5F
        // 0x5873C1D5: pop ebx
        __asm _emit 0x5B
        // 0x5873C1D6: pop esi
        __asm _emit 0x5E
        // 0x5873C1D7: pop ebp
        __asm _emit 0x5D
        // 0x5873C1D8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5873C1DB: ret
        __asm _emit 0xC3
        // 0x5873C1DC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873C1DE: call 0x5873b540
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C1E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C1E5: je 0x5873c270
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C1EB: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x5873C1EE: mov edx, dword ptr [eax + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C1F4: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873C1F9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C1FB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873C1FE: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873C200: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873C203: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873C205: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C20B: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873C210: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C212: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873C215: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C217: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C21A: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873C21C: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x5873C21E: imul edx, edx, 0xc8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C224: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873C227: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873C22C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873C22E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873C231: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873C233: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873C236: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873C238: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873C23A: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x5873C23C: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873C23F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873C241: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873C244: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873C246: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873C24A: fild dword ptr [esp + 0x20]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873C24E: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C253: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873C258: movzx ecx, word ptr [esi + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C25F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5873C261: jle 0x5873c2cb
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5873C263: push edi
        __asm _emit 0x57
        // 0x5873C264: push ebx
        __asm _emit 0x53
        // 0x5873C265: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873C267: call 0x587e5e10
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x9B
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873C26C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873C26E: jne 0x5873c2cb
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x5873C270: cmp dword ptr [esi + 0x4c8], 4
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5873C277: je 0x5873c2cb
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5873C279: mov eax, dword ptr [esi + 0x4e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C27F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873C281: mov dword ptr [esi + 0x4cc], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C287: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5873C289: je 0x5873c2b5
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5873C28B: mov edx, dword ptr [esi + 0x4e4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C291: pop edi
        __asm _emit 0x5F
        // 0x5873C292: pop ebx
        __asm _emit 0x5B
        // 0x5873C293: mov dword ptr [esi + 0x4d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C299: mov dword ptr [esi + 0x4dc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C29F: mov dword ptr [esi + 0x4e0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C2A5: mov dword ptr [esi + 0x4c8], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C2AF: pop esi
        __asm _emit 0x5E
        // 0x5873C2B0: pop ebp
        __asm _emit 0x5D
        // 0x5873C2B1: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5873C2B4: ret
        __asm _emit 0xC3
        // 0x5873C2B5: mov dword ptr [esi + 0x4d8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C2BB: mov dword ptr [esi + 0x4dc], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873C2C5: mov dword ptr [esi + 0x4c8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873C2CB: pop edi
        __asm _emit 0x5F
        // 0x5873C2CC: pop ebx
        __asm _emit 0x5B
        // 0x5873C2CD: pop esi
        __asm _emit 0x5E
        // 0x5873C2CE: pop ebp
        __asm _emit 0x5D
        // 0x5873C2CF: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5873C2D2: ret
        __asm _emit 0xC3
    }
}
