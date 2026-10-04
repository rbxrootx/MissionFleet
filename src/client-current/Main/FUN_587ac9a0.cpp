// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AC9A0 .. +0x1F2 bytes.
// Source symbol alias: FUN_587ac9a0.
extern "C" __declspec(naked) void FUN_587ac9a0() {
    __asm {
        // 0x587AC9A0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587AC9A2: push 0x58980bdb
        __asm _emit 0x68
        __asm _emit 0xDB
        __asm _emit 0x0B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AC9A7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC9AD: push eax
        __asm _emit 0x50
        // 0x587AC9AE: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587AC9B1: push ebx
        __asm _emit 0x53
        // 0x587AC9B2: push ebp
        __asm _emit 0x55
        // 0x587AC9B3: push esi
        __asm _emit 0x56
        // 0x587AC9B4: push edi
        __asm _emit 0x57
        // 0x587AC9B5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587AC9BA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587AC9BC: push eax
        __asm _emit 0x50
        // 0x587AC9BD: lea eax, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587AC9C1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC9C7: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AC9CB: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC9D0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AC9D5: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587AC9D9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587AC9DB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587AC9DF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587AC9E1: mov dword ptr [esp + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AC9E5: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587AC9E8: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x587AC9EA: lea edi, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x587AC9ED: mov ecx, 0x27
        __asm _emit 0xB9
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC9F2: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587AC9F4: mov esi, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587AC9F8: add dword ptr [esi], 0x9c
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AC9FE: mov eax, dword ptr [ebp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ACA07: add ebx, 0x9c
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA0D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587ACA0F: je 0x587aca32
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587ACA11: push eax
        __asm _emit 0x50
        // 0x587ACA12: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x4B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587ACA17: mov ecx, dword ptr [ebp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA1D: push ecx
        __asm _emit 0x51
        // 0x587ACA1E: push ebx
        __asm _emit 0x53
        // 0x587ACA1F: push eax
        __asm _emit 0x50
        // 0x587ACA20: mov dword ptr [ebp + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA26: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACA2B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587ACA2E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587ACA30: jmp 0x587aca38
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587ACA32: mov dword ptr [ebp + 0xa0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA38: mov eax, dword ptr [ebp + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA3E: add dword ptr [esi], eax
        __asm _emit 0x01
        __asm _emit 0x06
        // 0x587ACA40: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587ACA42: movzx eax, word ptr [ebp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x4C
        // 0x587ACA46: mov dword ptr [ebp + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA4C: add dword ptr [esi], eax
        __asm _emit 0x01
        __asm _emit 0x06
        // 0x587ACA4E: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x587ACA50: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587ACA52: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACA57: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587ACA5A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587ACA5E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587ACA60: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587ACA64: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587ACA66: je 0x587aca71
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587ACA68: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587ACA6A: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587ACA6F: jmp 0x587aca73
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587ACA71: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACA73: cmp byte ptr [ebp + 0xa], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587ACA77: mov dword ptr [esp + 0x30], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACA7F: mov dword ptr [ebp + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA85: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ACA89: je 0x587acb1e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACA8F: nop
        __asm _emit 0x90
        // 0x587ACA90: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACA94: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ACA98: push edx
        __asm _emit 0x52
        // 0x587ACA99: push ebx
        __asm _emit 0x53
        // 0x587ACA9A: push ebp
        __asm _emit 0x55
        // 0x587ACA9B: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587ACA9F: call 0x587ac9a0
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACAA4: mov esi, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACAAA: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587ACAAD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587ACAB1: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587ACAB3: jne 0x587acab9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587ACAB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587ACAB7: jmp 0x587acac1
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587ACAB9: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587ACABC: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587ACABE: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587ACAC1: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACAC4: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587ACAC6: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587ACAC8: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587ACACB: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587ACACD: jae 0x587acadd
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x587ACACF: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587ACAD3: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587ACAD5: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587ACAD8: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587ACADB: jmp 0x587acafb
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x587ACADD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587ACADF: jbe 0x587acae6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587ACAE1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587ACAE6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587ACAE8: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587ACAEC: push ecx
        __asm _emit 0x51
        // 0x587ACAED: push edi
        __asm _emit 0x57
        // 0x587ACAEE: push eax
        __asm _emit 0x50
        // 0x587ACAEF: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587ACAF3: push edx
        __asm _emit 0x52
        // 0x587ACAF4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587ACAF6: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x9D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587ACAFB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587ACAFF: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587ACB03: add dword ptr [ecx], eax
        __asm _emit 0x01
        __asm _emit 0x01
        // 0x587ACB05: movzx ecx, byte ptr [ebp + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4D
        __asm _emit 0x0A
        // 0x587ACB09: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587ACB0B: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ACB0F: inc eax
        __asm _emit 0x40
        // 0x587ACB10: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587ACB12: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587ACB16: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587ACB18: jne 0x587aca90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ACB1E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587ACB22: mov dword ptr [ebp + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB28: mov dword ptr [ebp + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB2E: mov dword ptr [ebp + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB34: mov dword ptr [ebp + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB3A: cmp dword ptr [esp + 0x38], edi
        __asm _emit 0x39
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587ACB3E: jne 0x587acb50
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587ACB40: cmp dword ptr [eax + 0x3fc], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB46: jne 0x587acb50
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587ACB48: mov dword ptr [eax + 0x3fc], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB4E: jmp 0x587acb7a
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x587ACB50: cmp dword ptr [eax + 0x400], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB56: jne 0x587acb66
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587ACB58: cmp byte ptr [ebp + 8], 1
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587ACB5C: jne 0x587acb66
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587ACB5E: mov dword ptr [eax + 0x400], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB64: jmp 0x587acb7a
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x587ACB66: cmp dword ptr [eax + 0x404], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB6C: jne 0x587acb7a
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587ACB6E: cmp byte ptr [ebp + 8], 1
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x587ACB72: jne 0x587acb7a
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587ACB74: mov dword ptr [eax + 0x404], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB7A: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587ACB7C: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587ACB80: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587ACB87: pop ecx
        __asm _emit 0x59
        // 0x587ACB88: pop edi
        __asm _emit 0x5F
        // 0x587ACB89: pop esi
        __asm _emit 0x5E
        // 0x587ACB8A: pop ebp
        __asm _emit 0x5D
        // 0x587ACB8B: pop ebx
        __asm _emit 0x5B
        // 0x587ACB8C: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587ACB8F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
