// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1074 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a3f30.

// Ghidra body range 0x587A3F30..0x587A4362; 1074 mapped bytes.
extern "C" __declspec(naked) void FUN_587a3f30_segment_00() {
    __asm {
        // 0x587A3F30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A3F32: push 0x589809ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A3F37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F3D: push eax
        __asm _emit 0x50
        // 0x587A3F3E: push ecx
        __asm _emit 0x51
        // 0x587A3F3F: push ebx
        __asm _emit 0x53
        // 0x587A3F40: push ebp
        __asm _emit 0x55
        // 0x587A3F41: push esi
        __asm _emit 0x56
        // 0x587A3F42: push edi
        __asm _emit 0x57
        // 0x587A3F43: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A3F48: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A3F4A: push eax
        __asm _emit 0x50
        // 0x587A3F4B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A3F4F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F55: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587A3F57: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A3F5B: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587A3F5E: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A3F68: jl 0x587a40bc
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F6E: cmp esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0A
        // 0x587A3F71: jle 0x587a40bc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F77: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3F7D: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3F83: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3F89: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3F8B: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3F91: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3F96: mov edi, 0x1e
        __asm _emit 0xBF
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3F9B: lea esi, [esi + esi*4]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xB6
        // 0x587A3F9E: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A3FA0: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x587A3FA3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3FA5: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x587A3FA7: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x587A3FA9: ja 0x587a40bc
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3FAF: mov eax, 0x9c4
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A3FB4: cmp dword ptr [ebx + 4], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587A3FB7: jbe 0x587a3fc2
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587A3FB9: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587A3FBC: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3FC2: mov edx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x14
        // 0x587A3FC5: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587A3FCA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587A3FCC: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x587A3FCE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A3FD0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A3FD3: lea edi, [edx + eax + 0x1e]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x1E
        // 0x587A3FD7: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3FDD: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A3FE3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A3FE5: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3FEB: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A3FF1: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587A3FF4: add esi, dword ptr [ebx + 4]
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x587A3FF7: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x587A3FFC: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x587A3FFF: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587A4001: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x587A4004: imul edx, edx, 0x2710
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A400A: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587A400C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A400E: jge 0x587a40a1
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4014: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587A4019: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587A401B: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587A401E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A4020: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A4023: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A4025: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A4027: jge 0x587a402e
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587A4029: shl esi, 4
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x04
        // 0x587A402C: jmp 0x587a4099
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x587A402E: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587A4033: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587A4035: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587A4038: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A403A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A403D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A403F: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A4041: jge 0x587a404b
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587A4043: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A4045: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A4047: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A4049: jmp 0x587a4099
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x587A404B: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587A4050: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587A4052: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587A4055: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A4057: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A405A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A405C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A405E: jge 0x587a4066
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587A4060: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A4062: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A4064: jmp 0x587a4099
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x587A4066: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587A406B: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587A406D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A4070: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A4072: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A4075: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A4077: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587A4079: jge 0x587a407f
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587A407B: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587A407D: jmp 0x587a4099
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x587A407F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A4081: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587A4084: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587A4086: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587A408B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587A408D: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A4090: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587A4092: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587A4095: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587A4097: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A4099: mov dword ptr [esp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40A1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A40A3: jle 0x587a42ee
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40A9: movzx eax, word ptr [ebp + 0x74]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x587A40AD: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587A40B0: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x587A40B2: jge 0x587a40e6
        __asm _emit 0x7D
        __asm _emit 0x32
        // 0x587A40B4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A40B6: mov word ptr [ebp + 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x74
        // 0x587A40BA: jmp 0x587a40ec
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x587A40BC: mov esi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x587A40BF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A40C1: imul ecx, ecx, 0x34
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x34
        // 0x587A40C4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587A40C9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587A40CB: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587A40CE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587A40D0: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587A40D3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587A40D5: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587A40D7: sub esi, 0xa
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x0A
        // 0x587A40DA: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x587A40DD: jge 0x587a40a1
        __asm _emit 0x7D
        __asm _emit 0xC2
        // 0x587A40DF: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40E4: jmp 0x587a40a9
        __asm _emit 0xEB
        __asm _emit 0xC3
        // 0x587A40E6: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587A40E8: mov word ptr [ebp + 0x74], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x74
        // 0x587A40EC: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40F1: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40F6: cmp dword ptr [ebx + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x587A40F9: jne 0x587a41b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A40FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A4104: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A4107: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A410C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A410E: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A4112: je 0x587a415e
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x587A4114: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A4116: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A411A: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587A411C: je 0x587a4234
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4122: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4127: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A412D: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4132: cmp dword ptr [eax + 0x160], 0x31
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x31
        // 0x587A4139: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A413D: jle 0x587a4153
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587A413F: cmp dword ptr [eax + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4145: je 0x587a4153
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587A4147: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A414D: add edi, 0xc40
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4153: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x587A4156: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A4158: push edx
        __asm _emit 0x52
        // 0x587A4159: jmp 0x587a420f
        __asm _emit 0xE9
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A415E: mov dword ptr [esp + 0x20], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4166: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A4168: je 0x587a42e6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A416E: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4174: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A417A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A417E: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4183: cmp dword ptr [eax + 0x160], 0xce
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A418D: jle 0x587a42bb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4193: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A419A: je 0x587a42bb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41A0: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41A6: add edi, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41AC: jmp 0x587a42bd
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41B1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x8A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A41B6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587A41B9: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587A41BE: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A41C0: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A41C4: je 0x587a4277
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41CA: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A41CE: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A41D0: je 0x587a4234
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587A41D2: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A41D8: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A41DE: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A41E2: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A41E7: cmp dword ptr [eax + 0x160], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x587A41EE: jle 0x587a4207
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587A41F0: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41F7: je 0x587a4207
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A41F9: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A41FF: add edi, 0xc80
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4205: jmp 0x587a4209
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A4207: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A4209: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587A420C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A420E: push ecx
        __asm _emit 0x51
        // 0x587A420F: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x8A
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A4214: cdq
        __asm _emit 0x99
        // 0x587A4215: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A421A: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587A421C: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A421F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A4223: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A4225: push eax
        __asm _emit 0x50
        // 0x587A4226: push ecx
        __asm _emit 0x51
        // 0x587A4227: push edi
        __asm _emit 0x57
        // 0x587A4228: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587A422A: push esi
        __asm _emit 0x56
        // 0x587A422B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A422D: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x6B
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A4232: jmp 0x587a4236
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A4234: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A4236: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A423C: cmp dword ptr [ecx + 0x160], 0x33
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x33
        // 0x587A4243: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A424B: jle 0x587a426d
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x587A424D: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4254: je 0x587a426d
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587A4256: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A425C: add ecx, 0xcc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4262: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4268: jmp 0x587a42ee
        __asm _emit 0xE9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A426D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A426F: mov dword ptr [eax + 0xf8], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4275: jmp 0x587a42ee
        __asm _emit 0xEB
        __asm _emit 0x77
        // 0x587A4277: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A427F: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A4281: je 0x587a42e6
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x587A4283: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4289: mov eax, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587A428F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587A4293: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4298: cmp dword ptr [eax + 0x160], 0xcc
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A42A2: jle 0x587a42bb
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587A42A4: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A42AB: je 0x587a42bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587A42AD: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A42B3: add edi, 0x3300
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A42B9: jmp 0x587a42bd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A42BB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A42BD: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x587A42C0: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587A42C2: push ecx
        __asm _emit 0x51
        // 0x587A42C3: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A42C8: cdq
        __asm _emit 0x99
        // 0x587A42C9: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A42CE: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587A42D0: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A42D3: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587A42D7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587A42D9: push eax
        __asm _emit 0x50
        // 0x587A42DA: push ecx
        __asm _emit 0x51
        // 0x587A42DB: push edi
        __asm _emit 0x57
        // 0x587A42DC: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587A42DE: push esi
        __asm _emit 0x56
        // 0x587A42DF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A42E1: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x6A
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587A42E6: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A42EE: cmp word ptr [ebp + 0x74], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x74
        __asm _emit 0x00
        // 0x587A42F3: jne 0x587a434a
        __asm _emit 0x75
        __asm _emit 0x55
        // 0x587A42F5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A42F7: call 0x587a3680
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A42FC: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A4302: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A4305: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587A4309: mov dx, word ptr [ecx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4310: cmp dx, word ptr [eax + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4317: jne 0x587a4343
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587A4319: mov eax, dword ptr [ebp + 0x3f0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A431F: mov dl, byte ptr [ecx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4325: cmp dl, byte ptr [eax + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A432B: je 0x587a4343
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587A432D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A432F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587A4331: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x8A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587A4336: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A433C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A433E: call 0x5877ec00
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xA8
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587A4343: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4348: jmp 0x587a434c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587A434A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A434C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A4350: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A4357: pop ecx
        __asm _emit 0x59
        // 0x587A4358: pop edi
        __asm _emit 0x5F
        // 0x587A4359: pop esi
        __asm _emit 0x5E
        // 0x587A435A: pop ebp
        __asm _emit 0x5D
        // 0x587A435B: pop ebx
        __asm _emit 0x5B
        // 0x587A435C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A435F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
