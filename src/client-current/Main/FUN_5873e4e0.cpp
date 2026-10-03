// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873E4E0 .. +0xB00 bytes.
extern "C" __declspec(naked) void FUN_5873e4e0() {
    __asm {
        // 0x5873E4E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5873E4E2: push 0x5897de3e
        __asm _emit 0x68
        __asm _emit 0x3E
        __asm _emit 0xDE
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5873E4E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4ED: push eax
        __asm _emit 0x50
        // 0x5873E4EE: sub esp, 0x154
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E4F4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873E4F9: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873E4FB: mov dword ptr [esp + 0x150], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E502: push ebx
        __asm _emit 0x53
        // 0x5873E503: push ebp
        __asm _emit 0x55
        // 0x5873E504: push esi
        __asm _emit 0x56
        // 0x5873E505: push edi
        __asm _emit 0x57
        // 0x5873E506: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873E50B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873E50D: push eax
        __asm _emit 0x50
        // 0x5873E50E: lea eax, [esp + 0x168]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E515: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E51B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873E51D: mov ecx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E523: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873E528: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873E52A: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873E52D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E52F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E532: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E534: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5873E536: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873E538: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5873E53A: mov edi, 0x2710
        __asm _emit 0xBF
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E53F: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873E543: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873E547: cmp dword ptr [esi + 0x47c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E54D: jne 0x5873e684
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E553: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E559: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873E55B: je 0x5873e5fb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E561: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x81
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873E566: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873E568: je 0x5873e5fb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E56E: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E574: mov eax, dword ptr [eax + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E57A: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873E57F: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E585: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5873E588: cmp dword ptr [esi + 0x4d8], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E58E: jne 0x5873e5a3
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5873E590: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E596: push ebx
        __asm _emit 0x53
        // 0x5873E597: push 0x83
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E59C: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x5873E59E: call 0x588ec100
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xDB
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5873E5A3: cmp dword ptr [esi + 0x31c], 2
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5873E5AA: je 0x5873e6cc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5B0: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5B6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5873E5B9: mov dword ptr [esi + 0x4a0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5BF: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5873E5C2: mov dword ptr [esi + 0x4a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5C8: mov edi, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5CE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873E5D0: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5D6: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873E5D9: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873E5DE: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E5E0: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E5E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E5E5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E5E8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E5EA: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5873E5EC: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5873E5EE: imul edi, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xFF
        // 0x5873E5F1: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873E5F4: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873E5F6: jmp 0x5873e6cc
        __asm _emit 0xE9
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E5FB: mov eax, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E601: mov dword ptr [esi + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E607: mov eax, dword ptr [esi + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E60D: mov dword ptr [esi + 0x4d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E613: mov dword ptr [esi + 0x4dc], 0xffffffff
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
        // 0x5873E61D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873E61F: jne 0x5873e630
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873E621: mov dword ptr [esi + 0x31c], 3
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E62B: jmp 0x5873e6cc
        __asm _emit 0xE9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E630: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873E633: jne 0x5873e6cc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E639: mov ecx, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E63F: push ecx
        __asm _emit 0x51
        // 0x5873E640: lea edx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873E644: push edx
        __asm _emit 0x52
        // 0x5873E645: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873E649: push eax
        __asm _emit 0x50
        // 0x5873E64A: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E654: mov dword ptr [esp + 0x28], 0x190
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E65C: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873E660: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873E665: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873E668: add ecx, dword ptr [esp + 0x48]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873E66C: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5873E66F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873E672: sub edx, dword ptr [esp + 0x40]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873E676: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E67C: mov dword ptr [esi + 0x4a4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E682: jmp 0x5873e6cc
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x5873E684: mov ecx, dword ptr [esi + 0x490]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E68A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873E68C: je 0x5873e6cc
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5873E68E: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5873E691: mov edx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E697: mov dword ptr [esi + 0x4a0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E69D: sub eax, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5873E6A0: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5873E6A3: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873E6A5: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5873E6AA: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873E6AC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E6AF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E6B1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E6B4: mov dword ptr [esi + 0x4a4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E6BA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E6BC: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5873E6BE: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5873E6C0: imul edi, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF9
        // 0x5873E6C3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5873E6C5: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x5873E6C8: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5873E6CA: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5873E6CC: mov eax, dword ptr [esi + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E6D2: mov ecx, 0xfffffd12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E6D7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873E6D9: jne 0x5873e8ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E6DF: mov ebx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E6E5: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873E6EA: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x5873E6EC: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E6EF: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E6F1: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E6F4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E6F6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873E6F8: imul ecx, dword ptr [0x58a126c0]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x26
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5873E6FF: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873E704: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873E706: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E70C: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873E70F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E711: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E714: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873E716: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E718: mov dword ptr [esi + 0x348], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E71E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873E720: je 0x5873e75c
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5873E722: cmp word ptr [ecx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5873E72A: jb 0x5873e75c
        __asm _emit 0x72
        __asm _emit 0x30
        // 0x5873E72C: mov dword ptr [esi + 0x4c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E732: mov dword ptr [esi + 0x31c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E738: mov ecx, dword ptr [ecx + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E73E: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E743: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873E747: mov dword ptr [esi + 0x4d8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E74D: mov dword ptr [esi + 0x4dc], 0xffffffff
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
        // 0x5873E757: jmp 0x5873efb8
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E75C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873E75E: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873E761: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5873E763: jge 0x5873e88a
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E769: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873E76B: je 0x5873e791
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5873E76D: push ebp
        __asm _emit 0x55
        // 0x5873E76E: call 0x588dd1b0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xEA
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873E773: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873E775: je 0x5873e791
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5873E777: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E77D: push ebp
        __asm _emit 0x55
        // 0x5873E77E: mov dword ptr [esi + 0x4c8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E784: mov dword ptr [esi + 0x31c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E78A: call 0x5873a670
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873E78F: jmp 0x5873e747
        __asm _emit 0xEB
        __asm _emit 0xB6
        // 0x5873E791: mov ecx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E797: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873E79C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873E79E: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873E7A1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873E7A3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873E7A6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873E7A8: mov dword ptr [esi + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E7AE: mov dword ptr [esi + 0x31c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E7B8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E7BE: mov edi, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E7C4: mov ebx, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x9F
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E7CA: mov eax, 0x7d000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873E7CF: cdq
        __asm _emit 0x99
        // 0x5873E7D0: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5873E7D2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873E7D4: mov eax, 0x5dc00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5873E7D9: cdq
        __asm _emit 0x99
        // 0x5873E7DA: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x5873E7DC: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873E7DF: add ecx, dword ptr [edi + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x5873E7E2: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873E7E5: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x5873E7E8: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873E7EA: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873E7ED: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873E7EF: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873E7F2: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873E7F4: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873E7F8: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873E7FC: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xE4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873E801: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xE4
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873E806: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E80C: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5873E80F: sub edx, dword ptr [ecx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5873E812: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x5873E814: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5873E816: jge 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x6C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E81C: mov eax, dword ptr [0x58a246e4]
        __asm _emit 0xA1
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E821: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E826: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E82C: jle 0x5873e841
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5873E82E: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E834: je 0x5873e841
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873E836: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E83C: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5873E83F: jmp 0x5873e843
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E841: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E843: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E849: push edx
        __asm _emit 0x52
        // 0x5873E84A: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873E84F: mov eax, dword ptr [0x58a246e4]
        __asm _emit 0xA1
        __asm _emit 0xE4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E854: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E85A: jle 0x5873e87b
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x5873E85C: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E862: je 0x5873e87b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5873E864: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E86A: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5873E86D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873E86F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873E872: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E874: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873E876: jmp 0x5873ef88
        __asm _emit 0xE9
        __asm _emit 0x0D
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E87B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E87D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873E87F: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873E882: push ecx
        __asm _emit 0x51
        // 0x5873E883: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873E885: jmp 0x5873ef88
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E88A: mov eax, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E890: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5873E892: jge 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xF0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E898: mov dword ptr [esi + 0x348], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8A2: mov dword ptr [esi + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8A8: jmp 0x5873ef88
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8AD: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5873E8B0: jne 0x5873ee7e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8B6: cmp dword ptr [esi + 0x348], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8BC: jle 0x5873e8e8
        __asm _emit 0x7E
        __asm _emit 0x2A
        // 0x5873E8BE: mov eax, dword ptr [esi + 0x324]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8C4: sub eax, dword ptr [esi + 0x340]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8CA: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x5873E8CD: cdq
        __asm _emit 0x99
        // 0x5873E8CE: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5873E8D0: cmp dword ptr [esi + 0x348], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8D6: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873E8DA: jle 0x5873e8e8
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5873E8DC: cmp dword ptr [esi + 0x47c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8E2: je 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8E8: cmp dword ptr [esi + 0x46c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8EE: je 0x5873edd5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E8F4: cmp dword ptr [0x589c8edc], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873E8FA: je 0x5873e9fa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E900: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E906: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x5873E909: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x5873E90C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E912: mov ecx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873E918: mov edx, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E91E: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873E920: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E926: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873E92A: cdq
        __asm _emit 0x99
        // 0x5873E92B: idiv dword ptr [esp + 0x1c]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873E92F: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5873E932: mov ebp, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x5873E935: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5873E937: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x5873E93A: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5873E93D: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5873E93F: mov ebp, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x54
        // 0x5873E942: mov ecx, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E948: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5873E94A: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E950: cdq
        __asm _emit 0x99
        // 0x5873E951: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5873E953: mov ecx, dword ptr [esi + 0x528]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E959: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873E95C: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5873E95E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873E960: je 0x5873e970
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873E962: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E968: push edx
        __asm _emit 0x52
        // 0x5873E969: push eax
        __asm _emit 0x50
        // 0x5873E96A: push edi
        __asm _emit 0x57
        // 0x5873E96B: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5873E970: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E975: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E97C: jne 0x5873e9fa
        __asm _emit 0x75
        __asm _emit 0x7C
        // 0x5873E97E: cmp dword ptr [esi + 0x474], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E985: je 0x5873e9fa
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x5873E987: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E98D: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5873E990: cmp dword ptr [esi + 0x74], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873E993: jne 0x5873e9fa
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x5873E995: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E99A: mov edi, 0x20
        __asm _emit 0xBF
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E99F: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9A5: jle 0x5873e9be
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873E9A7: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9AE: je 0x5873e9be
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873E9B0: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9B6: mov ecx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9BC: jmp 0x5873e9c0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E9BE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E9C0: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E9C5: push eax
        __asm _emit 0x50
        // 0x5873E9C6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873E9CB: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873E9D0: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9D6: jle 0x5873e9ef
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873E9D8: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9DF: je 0x5873e9ef
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873E9E1: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9E7: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9ED: jmp 0x5873e9f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873E9EF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873E9F1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873E9F3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873E9F6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873E9F8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873E9FA: mov ecx, 0xffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873E9FF: add word ptr [esi + 0x2d6], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA06: movzx eax, word ptr [esi + 0x2d6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA0D: mov ecx, dword ptr [esi + 0x514]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA13: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5873EA16: push edx
        __asm _emit 0x52
        // 0x5873EA17: mov dword ptr [esi + 0x46c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA21: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x89
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873EA26: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA2C: mov eax, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA32: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5873EA34: imul eax, eax, 0x32
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x32
        // 0x5873EA37: cdq
        __asm _emit 0x99
        // 0x5873EA38: idiv dword ptr [esp + 0x28]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873EA3C: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA42: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873EA44: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5873EA47: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873EA4C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873EA4E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873EA51: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EA53: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EA56: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EA58: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x5873EA5A: cmp edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x64
        // 0x5873EA5D: jle 0x5873ea64
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5873EA5F: mov edi, 0x64
        __asm _emit 0xBF
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA64: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x5873EA69: mul dword ptr [esi + 0x4d4]
        __asm _emit 0xF7
        __asm _emit 0xA6
        __asm _emit 0xD4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EA6F: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5873EA72: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x5873EA75: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873EA77: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EA7D: add eax, dword ptr [edx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873EA83: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x5873EA85: add eax, dword ptr [edx + 0x10490]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873EA8B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873EA8D: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EA93: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EA98: add ecx, 0x69
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x69
        // 0x5873EA9B: mov edi, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x90
        // 0x5873EA9E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873EAA3: mul edi
        __asm _emit 0xF7
        __asm _emit 0xE7
        // 0x5873EAA5: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x5873EAA8: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EAAE: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x5873EAB0: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EAB5: sub edx, dword ptr [edi*4 + 0x58a17ce0]
        __asm _emit 0x2B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0xE0
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5873EABC: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873EAC1: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873EAC4: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EAC6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873EAC9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EACB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EACE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EAD0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873EAD2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873EAD4: cdq
        __asm _emit 0x99
        // 0x5873EAD5: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5873EAD7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873EAD9: sar ebx, 1
        __asm _emit 0xD1
        __asm _emit 0xFB
        // 0x5873EADB: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x5873EADD: add ebx, dword ptr [esi + 0x34c]
        __asm _emit 0x03
        __asm _emit 0x9E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EAE3: jns 0x5873eaed
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5873EAE5: add ebx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EAEB: jmp 0x5873eb08
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5873EAED: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x5873EAF2: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x5873EAF4: sub edx, ebx
        __asm _emit 0x2B
        __asm _emit 0xD3
        // 0x5873EAF6: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x5873EAF9: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873EAFB: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873EAFE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873EB00: imul ecx, ecx, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EB06: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5873EB08: mov ecx, dword ptr [esi + 0x310]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EB0E: mov edi, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EB14: mov eax, 0xae147ae1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x7A
        __asm _emit 0x14
        __asm _emit 0xAE
        // 0x5873EB19: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873EB1B: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5873EB1E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873EB20: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873EB23: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873EB25: mov edx, dword ptr [edi*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873EB2C: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873EB2F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873EB34: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EB36: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873EB39: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EB3B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EB3E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EB40: mov edx, dword ptr [edi*4 + 0x58a12558]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xBD
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5873EB47: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5873EB4A: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5873EB4E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873EB53: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EB55: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873EB58: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5873EB5A: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5873EB5D: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5873EB5F: mov edx, dword ptr [ebx*4 + 0x58a0ed18]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873EB66: mov ebx, dword ptr [ebx*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x9D
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873EB6D: imul edx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD7
        // 0x5873EB70: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873EB75: imul ebx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xDF
        // 0x5873EB78: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EB7A: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873EB7D: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x5873EB7F: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x5873EB82: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5873EB84: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873EB89: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x5873EB8B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873EB8E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EB90: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EB93: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EB95: cmp dword ptr [0x58a24574], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873EB9C: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873EBA0: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873EBA4: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5873EBA8: je 0x5873ec3c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBAE: push ecx
        __asm _emit 0x51
        // 0x5873EBAF: mov ecx, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBB5: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EBBB: mov edx, dword ptr [ebx + 0x10488]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873EBC1: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBC7: push ecx
        __asm _emit 0x51
        // 0x5873EBC8: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBCE: push ecx
        __asm _emit 0x51
        // 0x5873EBCF: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBD5: push ecx
        __asm _emit 0x51
        // 0x5873EBD6: mov ecx, dword ptr [esi + 0x4ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBDC: mov ebx, dword ptr [ebx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x9B
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873EBE2: push ecx
        __asm _emit 0x51
        // 0x5873EBE3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5873EBE6: push ecx
        __asm _emit 0x51
        // 0x5873EBE7: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873EBEA: push ecx
        __asm _emit 0x51
        // 0x5873EBEB: push eax
        __asm _emit 0x50
        // 0x5873EBEC: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873EBEF: push ebp
        __asm _emit 0x55
        // 0x5873EBF0: push edi
        __asm _emit 0x57
        // 0x5873EBF1: push 0x5898cdb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873EBF6: add eax, 0x3a0
        __asm _emit 0x05
        __asm _emit 0xA0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EBFB: push eax
        __asm _emit 0x50
        // 0x5873EBFC: push edx
        __asm _emit 0x52
        // 0x5873EBFD: push ebx
        __asm _emit 0x53
        // 0x5873EBFE: lea ecx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EC05: push 0x5898cd40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xCD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873EC0A: push ecx
        __asm _emit 0x51
        // 0x5873EC0B: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873EC11: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x5873EC14: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873EC16: push ebp
        __asm _emit 0x55
        // 0x5873EC17: lea edx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873EC1B: push edx
        __asm _emit 0x52
        // 0x5873EC1C: lea eax, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873EC20: push eax
        __asm _emit 0x50
        // 0x5873EC21: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873EC27: mov edx, dword ptr [0x58a0b4d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5873EC2D: push eax
        __asm _emit 0x50
        // 0x5873EC2E: lea ecx, [esp + 0x70]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5873EC32: push ecx
        __asm _emit 0x51
        // 0x5873EC33: push edx
        __asm _emit 0x52
        // 0x5873EC34: call dword ptr [0x5898c1a0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873EC3A: jmp 0x5873ec3e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873EC3C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873EC3E: push 0x26c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EC43: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873EC48: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873EC4A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873EC4D: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873EC51: mov dword ptr [esp + 0x170], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EC58: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873EC5A: je 0x5873ecac
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x5873EC5C: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EC61: mov edi, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5873EC67: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x5873EC6A: movzx ebx, word ptr [edx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x9A
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EC71: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EC77: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873EC7C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EC7E: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5873EC80: push ebp
        __asm _emit 0x55
        // 0x5873EC81: push ebp
        __asm _emit 0x55
        // 0x5873EC82: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873EC85: push ebp
        __asm _emit 0x55
        // 0x5873EC86: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EC88: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EC8B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EC8D: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873EC90: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873EC93: push eax
        __asm _emit 0x50
        // 0x5873EC94: push edx
        __asm _emit 0x52
        // 0x5873EC95: push edi
        __asm _emit 0x57
        // 0x5873EC96: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873EC9A: push eax
        __asm _emit 0x50
        // 0x5873EC9B: push ebp
        __asm _emit 0x55
        // 0x5873EC9C: push ebx
        __asm _emit 0x53
        // 0x5873EC9D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873EC9F: push ebp
        __asm _emit 0x55
        // 0x5873ECA0: push ebp
        __asm _emit 0x55
        // 0x5873ECA1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873ECA3: call 0x588d3a60
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x4D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873ECA8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873ECAA: jmp 0x5873ecae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873ECAC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5873ECAE: or ebx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFF
        // 0x5873ECB1: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ECB6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873ECB8: mov dword ptr [esp + 0x174], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ECBF: call 0x58731590
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873ECC4: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ECCA: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873ECCF: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5873ECD1: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873ECD4: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5873ECD6: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5873ECD9: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5873ECDB: push ecx
        __asm _emit 0x51
        // 0x5873ECDC: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x5873ECDE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873ECE0: call 0x588d2ab0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873ECE5: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5873ECE9: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5873ECEC: push ebp
        __asm _emit 0x55
        // 0x5873ECED: push ebp
        __asm _emit 0x55
        // 0x5873ECEE: lea edx, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ECF4: push edx
        __asm _emit 0x52
        // 0x5873ECF5: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5873ECF9: push ebp
        __asm _emit 0x55
        // 0x5873ECFA: push ebp
        __asm _emit 0x55
        // 0x5873ECFB: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5873ECFD: push eax
        __asm _emit 0x50
        // 0x5873ECFE: push edx
        __asm _emit 0x52
        // 0x5873ECFF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873ED01: call 0x588d3e50
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x51
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5873ED06: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873ED0B: cmp dword ptr [eax + 0x21c34], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873ED11: jne 0x5873ed2c
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5873ED13: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5873ED1B: jne 0x5873ed2c
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5873ED1D: mov ecx, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873ED23: push edi
        __asm _emit 0x57
        // 0x5873ED24: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5873ED27: call 0x5873bd60
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873ED2C: cmp dword ptr [esi + 0x47c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED32: jne 0x5873ed4e
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5873ED34: mov ecx, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED3A: push ebp
        __asm _emit 0x55
        // 0x5873ED3B: call 0x5873a670
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873ED40: mov dword ptr [esi + 0x4d8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED46: mov dword ptr [esi + 0x4dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED4C: jmp 0x5873ed6c
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5873ED4E: mov ecx, dword ptr [esi + 0x490]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED54: mov dword ptr [esi + 0x47c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED5A: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x5873ED5C: je 0x5873ed6c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5873ED5E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873ED60: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873ED62: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873ED64: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873ED66: mov dword ptr [esi + 0x490], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED6C: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5873ED6F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873ED75: push eax
        __asm _emit 0x50
        // 0x5873ED76: call 0x587e5f80
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x72
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873ED7B: mov ecx, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED81: mov edx, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED87: push edx
        __asm _emit 0x52
        // 0x5873ED88: lea eax, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873ED8C: mov dword ptr [esi + 0x324], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873ED92: push eax
        __asm _emit 0x50
        // 0x5873ED93: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5873ED97: push ecx
        __asm _emit 0x51
        // 0x5873ED98: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDA2: mov dword ptr [esp + 0x60], 0x190
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDAA: mov dword ptr [esp + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5873EDAE: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873EDB3: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5873EDB6: add edx, dword ptr [esp + 0x58]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5873EDBA: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873EDBD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873EDC0: sub eax, dword ptr [esp + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873EDC4: mov dword ptr [esi + 0x4a0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDCA: mov dword ptr [esi + 0x4a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDD0: jmp 0x5873ef88
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDD5: mov ecx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDDB: cmp ecx, dword ptr [esi + 0x324]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDE1: jg 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0xA1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDE7: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5873EDEA: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873EDF0: push edx
        __asm _emit 0x52
        // 0x5873EDF1: call 0x587e5f80
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x71
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5873EDF6: mov eax, dword ptr [esi + 0x33c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EDFC: mov ecx, dword ptr [esi + 0x34c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE02: push ecx
        __asm _emit 0x51
        // 0x5873EE03: lea edx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873EE07: mov dword ptr [esi + 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE0D: push edx
        __asm _emit 0x52
        // 0x5873EE0E: lea eax, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5873EE12: push eax
        __asm _emit 0x50
        // 0x5873EE13: mov dword ptr [esi + 0x31c], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE1D: mov dword ptr [esp + 0x68], 0x190
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE25: mov dword ptr [esp + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5873EE29: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873EE2E: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873EE31: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5873EE34: add ecx, dword ptr [esp + 0x50]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5873EE38: sub edx, dword ptr [esp + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5873EE3C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5873EE3F: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE45: mov dword ptr [esi + 0x4a4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE4B: cmp dword ptr [esi + 0x47c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE51: je 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE57: mov ecx, dword ptr [esi + 0x490]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE5D: mov dword ptr [esi + 0x47c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE63: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5873EE65: je 0x5873ef88
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE6B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5873EE6D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873EE6F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5873EE71: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5873EE73: mov dword ptr [esi + 0x490], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE79: jmp 0x5873ef88
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE7E: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5873EE81: jne 0x5873ef3e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE87: mov ecx, dword ptr [esi + 0x324]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EE8D: lea edx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC9
        // 0x5873EE90: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x5873EE95: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873EE97: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5873EE9A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873EE9C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873EE9F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873EEA1: mov edx, dword ptr [esi + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEA7: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5873EEA9: jge 0x5873eed1
        __asm _emit 0x7D
        __asm _emit 0x26
        // 0x5873EEAB: mov eax, 0x190
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEB0: cmp dword ptr [esi + 0x348], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEB6: jl 0x5873eec0
        __asm _emit 0x7C
        __asm _emit 0x08
        // 0x5873EEB8: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEBE: jmp 0x5873ef0f
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x5873EEC0: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5873EEC2: lea eax, [ecx + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x89
        // 0x5873EEC5: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5873EEC8: cdq
        __asm _emit 0x99
        // 0x5873EEC9: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x5873EECB: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873EECF: jmp 0x5873ef13
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x5873EED1: jle 0x5873eefb
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x5873EED3: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5873EED5: jge 0x5873eeff
        __asm _emit 0x7D
        __asm _emit 0x28
        // 0x5873EED7: mov eax, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEDD: sub eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5873EEE0: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x5873EEE3: jg 0x5873eef1
        __asm _emit 0x7F
        __asm _emit 0x0C
        // 0x5873EEE5: mov dword ptr [esi + 0x348], 0x64
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EEEF: jmp 0x5873ef0f
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5873EEF1: mov dword ptr [esp + 0x18], 0xffffffec
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873EEF9: jmp 0x5873ef13
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5873EEFB: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5873EEFD: jl 0x5873ef13
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x5873EEFF: mov dword ptr [esi + 0x31c], 3
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF09: mov dword ptr [esi + 0x348], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF0F: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873EF13: mov eax, dword ptr [esi + 0x4d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF19: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873EF1B: je 0x5873ef88
        __asm _emit 0x74
        __asm _emit 0x6B
        // 0x5873EF1D: mov eax, dword ptr [eax + 0x6100]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF23: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF28: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873EF2C: mov dword ptr [esi + 0x4d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF32: mov dword ptr [esi + 0x4dc], 0xffffffff
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
        // 0x5873EF3C: jmp 0x5873ef88
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x5873EF3E: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5873EF41: jne 0x5873ef88
        __asm _emit 0x75
        __asm _emit 0x45
        // 0x5873EF43: mov eax, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF49: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5873EF4B: jg 0x5873ef7f
        __asm _emit 0x7F
        __asm _emit 0x32
        // 0x5873EF4D: mov dword ptr [esi + 0x348], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF53: mov dword ptr [esi + 0x31c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF59: cmp word ptr [esi + 0x2d6], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF60: je 0x5873ef6a
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5873EF62: mov dword ptr [esi + 0x4c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF68: jmp 0x5873ef88
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5873EF6A: lea edx, [esp + 0x17]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x17
        // 0x5873EF6E: push edx
        __asm _emit 0x52
        // 0x5873EF6F: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x5873EF71: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873EF73: mov byte ptr [esp + 0x1f], 0x61
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1F
        __asm _emit 0x61
        // 0x5873EF78: call 0x5873cee0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873EF7D: jmp 0x5873ef88
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5873EF7F: add eax, -0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x9C
        // 0x5873EF82: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF88: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873EF8C: add dword ptr [esi + 0x348], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF92: mov eax, dword ptr [esi + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EF98: cmp eax, 0xfffffd12
        __asm _emit 0x3D
        __asm _emit 0x12
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873EF9D: jge 0x5873efa6
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x5873EF9F: mov eax, 0xfffffd12
        __asm _emit 0xB8
        __asm _emit 0x12
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873EFA4: jmp 0x5873efb2
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5873EFA6: cmp eax, 0x2ee
        __asm _emit 0x3D
        __asm _emit 0xEE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFAB: jle 0x5873efb2
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5873EFAD: mov eax, 0x2ee
        __asm _emit 0xB8
        __asm _emit 0xEE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFB2: mov dword ptr [esi + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFB8: mov ecx, dword ptr [esp + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFBF: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFC6: pop ecx
        __asm _emit 0x59
        // 0x5873EFC7: pop edi
        __asm _emit 0x5F
        // 0x5873EFC8: pop esi
        __asm _emit 0x5E
        // 0x5873EFC9: pop ebp
        __asm _emit 0x5D
        // 0x5873EFCA: pop ebx
        __asm _emit 0x5B
        // 0x5873EFCB: mov ecx, dword ptr [esp + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFD2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873EFD4: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xDC
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873EFD9: add esp, 0x160
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873EFDF: ret
        __asm _emit 0xC3
    }
}
