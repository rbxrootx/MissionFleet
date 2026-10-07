// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 595 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dc990.

// Ghidra body range 0x588DC990..0x588DCBE3; 595 mapped bytes.
extern "C" __declspec(naked) void FUN_588dc990_segment_00() {
    __asm {
        // 0x588DC990: push ebp
        __asm _emit 0x55
        // 0x588DC991: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588DC993: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x588DC996: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x588DC999: fld qword ptr [0x589a1088]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DC99F: push ebx
        __asm _emit 0x53
        // 0x588DC9A0: fld qword ptr [0x5898cae0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DC9A6: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC9AC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DC9AE: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588DC9B2: push esi
        __asm _emit 0x56
        // 0x588DC9B3: add ecx, 0x47c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC9B9: push edi
        __asm _emit 0x57
        // 0x588DC9BA: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DC9BE: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DC9C2: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DC9C6: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DC9CA: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x588DC9CC: xor esi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF6
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC9D2: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC9D8: je 0x588dcbad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC9DE: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DC9E2: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x588DC9E5: mov edi, dword ptr [ebx + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DC9EB: mov ecx, dword ptr [ebx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DC9F1: lea eax, [edx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x82
        // 0x588DC9F4: lea eax, [edi + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x87
        // 0x588DC9F7: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DC9F9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DC9FB: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCA01: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCA06: test byte ptr [eax + edx*4], 3
        __asm _emit 0xF6
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x03
        // 0x588DCA0A: jne 0x588dcbad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCA10: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCA18: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DCA1A: jle 0x588dcb42
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCA20: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x588DCA23: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588DCA26: add eax, dword ptr [esp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DCA2A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DCA2C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588DCA2E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DCA30: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCA36: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCA3C: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588DCA41: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x588DCA43: dec esi
        __asm _emit 0x4E
        // 0x588DCA44: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x588DCA47: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588DCA49: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x588DCA4C: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCA52: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588DCA54: movzx edx, word ptr [ebx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DCA5B: mov ebx, dword ptr [0x589c909c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588DCA61: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DCA66: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588DCA6A: mul esi
        __asm _emit 0xF7
        __asm _emit 0xE6
        // 0x588DCA6C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588DCA6E: shr esi, 5
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x05
        // 0x588DCA71: inc esi
        __asm _emit 0x46
        // 0x588DCA72: cmp edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x64
        // 0x588DCA75: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCA7A: jg 0x588dca7e
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x588DCA7C: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588DCA7E: imul eax, dword ptr [ebp + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588DCA82: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588DCA84: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DCA89: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588DCA8B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588DCA8E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588DCA90: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588DCA93: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588DCA95: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCA99: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCA9D: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCAA1: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCAA6: fmul st(2)
        __asm _emit 0xD8
        __asm _emit 0xCA
        // 0x588DCAA8: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCAAD: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCAB1: fldcw word ptr [esp + 0x28]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCAB5: fistp qword ptr [esp + 0x28]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCAB9: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCABD: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCAC1: cmp ebx, -1
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588DCAC4: je 0x588dcb12
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x588DCAC6: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588DCAC8: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCACC: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCAD0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DCAD2: jge 0x588dcada
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588DCAD4: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCADA: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCADE: fdiv st(1)
        __asm _emit 0xD8
        __asm _emit 0xF1
        // 0x588DCAE0: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCAE4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588DCAE6: jge 0x588dcaee
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588DCAE8: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCAEE: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCAF2: movzx eax, word ptr [esp + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCAF7: fmulp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC9
        // 0x588DCAF9: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCAFE: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCB02: fldcw word ptr [esp + 0x28]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCB06: fistp qword ptr [esp + 0x28]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCB0A: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588DCB0E: fldcw word ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DCB12: cmp word ptr [esp + 0x30], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x03
        // 0x588DCB18: jne 0x588dcb1c
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588DCB1A: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x588DCB1C: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x588DCB1E: jae 0x588dcb36
        __asm _emit 0x73
        __asm _emit 0x16
        // 0x588DCB20: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DCB25: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588DCB27: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB2B: shr edx, 7
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x07
        // 0x588DCB2E: lea edx, [eax + edx + 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588DCB32: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB36: sub edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x64
        // 0x588DCB39: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588DCB3C: jne 0x588dca72
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DCB42: cmp dword ptr [0x58a24568], 2
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x588DCB49: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x588DCB4B: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x588DCB4D: jne 0x588dcb53
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588DCB4F: shl dword ptr [esp + 0x14], 1
        __asm _emit 0xD1
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB53: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DCB57: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DCB5B: movzx ecx, byte ptr [esi + edi + 0xd74]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x3E
        __asm _emit 0x74
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCB63: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB67: lea edx, [ecx + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x588DCB6A: mov eax, dword ptr [0x589c3e94]
        __asm _emit 0xA1
        __asm _emit 0x94
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588DCB6F: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588DCB71: jle 0x588dcb79
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x588DCB73: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588DCB75: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB79: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB7D: push eax
        __asm _emit 0x50
        // 0x588DCB7E: push esi
        __asm _emit 0x56
        // 0x588DCB7F: lea ecx, [edi + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCB85: call 0x588e6650
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCB8A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DCB8E: add dword ptr [esp + 0x20], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DCB92: push eax
        __asm _emit 0x50
        // 0x588DCB93: push esi
        __asm _emit 0x56
        // 0x588DCB94: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588DCB96: call 0x588dc830
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DCB9B: fld qword ptr [0x589a1088]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588DCBA1: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCBA7: fld qword ptr [0x5898cae0]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588DCBAD: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DCBB1: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DCBB5: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DCBB9: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588DCBBC: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x588DCBBF: cmp eax, 0xc80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCBC4: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DCBC8: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588DCBCC: jl 0x588dc9ca
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xF8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DCBD2: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DCBD6: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x588DCBD8: pop edi
        __asm _emit 0x5F
        // 0x588DCBD9: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x588DCBDB: pop esi
        __asm _emit 0x5E
        // 0x588DCBDC: pop ebx
        __asm _emit 0x5B
        // 0x588DCBDD: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x588DCBDF: pop ebp
        __asm _emit 0x5D
        // 0x588DCBE0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
