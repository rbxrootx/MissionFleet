// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ECAB0 .. +0x1EC bytes.
// Source symbol alias: FUN_587ecab0.
extern "C" __declspec(naked) void FUN_587ecab0() {
    __asm {
        // 0x587ECAB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587ECAB2: push 0x5898253b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x25
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ECAB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECABD: push eax
        __asm _emit 0x50
        // 0x587ECABE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587ECAC1: push ebx
        __asm _emit 0x53
        // 0x587ECAC2: push ebp
        __asm _emit 0x55
        // 0x587ECAC3: push esi
        __asm _emit 0x56
        // 0x587ECAC4: push edi
        __asm _emit 0x57
        // 0x587ECAC5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587ECACA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587ECACC: push eax
        __asm _emit 0x50
        // 0x587ECACD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ECAD1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECAD7: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587ECAD9: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ECADD: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587ECAE1: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587ECAE3: cmp dword ptr [ebx + 0x218c4], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECAE9: je 0x587ecc86
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECAEF: mov eax, dword ptr [0x58a0ae1c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587ECAF4: fild dword ptr [0x58a0ae1c]
        __asm _emit 0xDB
        __asm _emit 0x05
        __asm _emit 0x1C
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587ECAFA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587ECAFC: jge 0x587ecb04
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587ECAFE: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ECB04: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECB0A: fdiv qword ptr [0x58996aa0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xA0
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ECB10: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECB16: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECB1C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587ECB1E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587ECB20: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587ECB23: lea eax, [ecx + eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x03
        // 0x587ECB27: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECB2D: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECB32: fmul qword ptr [0x58996ad8]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x6A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587ECB38: fstp dword ptr [esp + 0x30]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587ECB3C: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x587ECB3F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ECB44: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587ECB46: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x587ECB49: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x587ECB4C: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x587ECB4E: inc ecx
        __asm _emit 0x41
        // 0x587ECB4F: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ECB53: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ECB57: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587ECB59: jge 0x587ecb61
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587ECB5B: fadd dword ptr [0x5898d788]
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587ECB61: fld dword ptr [esp + 0x30]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587ECB65: fcompp
        __asm _emit 0xDE
        __asm _emit 0xD9
        // 0x587ECB67: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x587ECB69: test ah, 1
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x01
        // 0x587ECB6C: jne 0x587ecb77
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587ECB6E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587ECB70: cdq
        __asm _emit 0x99
        // 0x587ECB71: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587ECB73: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587ECB75: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x587ECB77: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587ECB79: jle 0x587ecc86
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECB7F: movzx eax, byte ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587ECB84: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587ECB86: je 0x587ecbb5
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587ECB88: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587ECB8B: je 0x587ecb99
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587ECB8D: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587ECB90: jne 0x587ecbbc
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587ECB92: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587ECB94: imul ecx, ecx, 0x46
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x46
        // 0x587ECB97: jmp 0x587ecba2
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x587ECB99: lea ecx, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xBF
        // 0x587ECB9C: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ECB9E: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ECBA0: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587ECBA2: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587ECBA7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587ECBA9: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587ECBAC: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587ECBAE: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587ECBB1: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587ECBB3: jmp 0x587ecbc0
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587ECBB5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587ECBB7: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x587ECBBA: jmp 0x587ecba2
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x587ECBBC: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587ECBC0: sub dword ptr [ebx + 0x218d0], edi
        __asm _emit 0x29
        __asm _emit 0xBB
        __asm _emit 0xD0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECBC6: jns 0x587ecbce
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x587ECBC8: mov dword ptr [ebx + 0x218d0], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xD0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECBCE: push 0x11c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECBD3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587ECBD8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ECBDB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587ECBDF: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587ECBE3: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587ECBE5: je 0x587ecc53
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x587ECBE7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECBED: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECBF2: cmp dword ptr [eax + 0x160], 0xce
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
        // 0x587ECBFC: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECC02: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587ECC06: jle 0x587ecc1e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x587ECC08: cmp dword ptr [eax + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECC0E: je 0x587ecc1e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587ECC10: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECC16: add ebx, 0x3380
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x80
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECC1C: jmp 0x587ecc20
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ECC1E: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587ECC20: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587ECC24: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587ECC27: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587ECC29: push eax
        __asm _emit 0x50
        // 0x587ECC2A: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587ECC2F: cdq
        __asm _emit 0x99
        // 0x587ECC30: mov ecx, 0x32
        __asm _emit 0xB9
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECC35: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587ECC37: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587ECC3A: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587ECC3E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587ECC40: push eax
        __asm _emit 0x50
        // 0x587ECC41: push ecx
        __asm _emit 0x51
        // 0x587ECC42: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587ECC46: push ebx
        __asm _emit 0x53
        // 0x587ECC47: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x587ECC49: push edi
        __asm _emit 0x57
        // 0x587ECC4A: call 0x5875adb0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xE1
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587ECC4F: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ECC53: mov edx, dword ptr [ebx + 0x218d0]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0xD0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587ECC59: mov ecx, dword ptr [ebx + 0x10b5c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587ECC5F: push edx
        __asm _emit 0x52
        // 0x587ECC60: mov dword ptr [esp + 0x28], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ECC68: call 0x5877e740
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587ECC6D: movzx eax, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC6
        // 0x587ECC70: movzx ecx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCF
        // 0x587ECC73: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587ECC76: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x587ECC78: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587ECC7E: push eax
        __asm _emit 0x50
        // 0x587ECC7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ECC81: call 0x587bb160
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xE4
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587ECC86: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ECC8A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ECC91: pop ecx
        __asm _emit 0x59
        // 0x587ECC92: pop edi
        __asm _emit 0x5F
        // 0x587ECC93: pop esi
        __asm _emit 0x5E
        // 0x587ECC94: pop ebp
        __asm _emit 0x5D
        // 0x587ECC95: pop ebx
        __asm _emit 0x5B
        // 0x587ECC96: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587ECC99: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
