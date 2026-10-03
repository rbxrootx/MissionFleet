// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58733360 .. +0xB0B bytes.
extern "C" __declspec(naked) void FUN_58733360() {
    __asm {
        // 0x58733360: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58733362: push 0x5897dbbe
        __asm _emit 0x68
        __asm _emit 0xBE
        __asm _emit 0xDB
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58733367: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873336D: push eax
        __asm _emit 0x50
        // 0x5873336E: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58733371: push ebx
        __asm _emit 0x53
        // 0x58733372: push ebp
        __asm _emit 0x55
        // 0x58733373: push esi
        __asm _emit 0x56
        // 0x58733374: push edi
        __asm _emit 0x57
        // 0x58733375: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5873337A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873337C: push eax
        __asm _emit 0x50
        // 0x5873337D: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58733381: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733387: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58733389: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873338D: mov edi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733391: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58733395: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58733399: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5873339D: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587333A1: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587333A5: push edi
        __asm _emit 0x57
        // 0x587333A6: push eax
        __asm _emit 0x50
        // 0x587333A7: push ecx
        __asm _emit 0x51
        // 0x587333A8: push ebp
        __asm _emit 0x55
        // 0x587333A9: push ebx
        __asm _emit 0x53
        // 0x587333AA: push edx
        __asm _emit 0x52
        // 0x587333AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587333AD: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587333B2: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587333B8: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587333BD: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x587333C0: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587333C2: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x587333C5: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587333CC: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x587333CF: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587333D4: mov dword ptr [esp + 0x30], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587333D8: mov dword ptr [esi], 0x5898c4e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587333DE: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587333E3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587333E6: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587333EA: mov byte ptr [esp + 0x2c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x587333EF: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587333F1: je 0x58733404
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587333F3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587333F5: push ebx
        __asm _emit 0x53
        // 0x587333F6: push 0x5898c964
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587333FB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587333FD: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x09
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733402: jmp 0x58733406
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733404: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733406: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873340C: lea eax, [edi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x5873340F: lea ecx, [edi + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733415: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58733418: movzx ebx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD8
        // 0x5873341B: lea eax, [edi + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x87
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733421: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x58733424: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58733428: lea edx, [edi + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873342E: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58733432: add edi, 0x1f4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733438: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x5873343B: movzx ecx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCF
        // 0x5873343E: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58733440: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58733445: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58733449: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873344D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733452: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58733454: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733457: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873345B: mov byte ptr [esp + 0x2c], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x58733460: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58733462: je 0x58733486
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58733464: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733468: push ebx
        __asm _emit 0x53
        // 0x58733469: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873346B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873346D: push ebp
        __asm _emit 0x55
        // 0x5873346E: push edx
        __asm _emit 0x52
        // 0x5873346F: push esi
        __asm _emit 0x56
        // 0x58733470: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58733472: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xFD
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733477: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5873347D: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733484: jmp 0x58733488
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733486: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58733488: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873348D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873348F: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58733494: mov dword ptr [esi + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873349A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873349F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587334A1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587334A6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587334A8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587334AB: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587334AF: mov byte ptr [esp + 0x2c], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        // 0x587334B4: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587334B6: je 0x587334da
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587334B8: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587334BC: push ebx
        __asm _emit 0x53
        // 0x587334BD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587334BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587334C1: push ebp
        __asm _emit 0x55
        // 0x587334C2: push eax
        __asm _emit 0x50
        // 0x587334C3: push esi
        __asm _emit 0x56
        // 0x587334C4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587334C6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587334CB: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587334D1: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587334D8: jmp 0x587334dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587334DA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587334DC: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587334E2: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587334E7: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x587334EB: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587334F1: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587334F6: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587334FB: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733500: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58733502: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733507: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58733509: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873350C: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733510: mov byte ptr [esp + 0x2c], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        // 0x58733515: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58733517: je 0x5873353d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58733519: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873351D: push ebx
        __asm _emit 0x53
        // 0x5873351E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733520: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733522: push ebp
        __asm _emit 0x55
        // 0x58733523: push edx
        __asm _emit 0x52
        // 0x58733524: push esi
        __asm _emit 0x56
        // 0x58733525: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58733527: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873352C: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733532: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733539: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873353B: jmp 0x5873353f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873353D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873353F: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733544: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58733549: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873354F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733554: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58733556: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873355B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5873355D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733560: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733564: mov byte ptr [esp + 0x2c], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x05
        // 0x58733569: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873356B: je 0x5873358f
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5873356D: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733571: push ebx
        __asm _emit 0x53
        // 0x58733572: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733574: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733576: push ebp
        __asm _emit 0x55
        // 0x58733577: push eax
        __asm _emit 0x50
        // 0x58733578: push esi
        __asm _emit 0x56
        // 0x58733579: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873357B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xFC
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733580: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733586: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873358D: jmp 0x58733591
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873358F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58733591: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733597: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873359C: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x587335A0: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587335A6: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587335AB: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587335B0: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587335B5: lea edx, [esi + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587335B8: lea ebx, [ebp + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x5D
        __asm _emit 0x32
        // 0x587335BB: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587335BF: mov dword ptr [esp + 0x48], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587335C3: mov dword ptr [esp + 0x44], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587335CB: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x587335CD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587335D2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587335D5: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587335D9: mov byte ptr [esp + 0x2c], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x06
        // 0x587335DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587335E0: je 0x58733613
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587335E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587335E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587335E6: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587335EB: lea ecx, [ebx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587335EE: push ecx
        __asm _emit 0x51
        // 0x587335EF: lea edx, [ebp + 0x21c]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587335F5: push edx
        __asm _emit 0x52
        // 0x587335F6: mov edx, dword ptr [0x58a24554]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587335FC: push ebx
        __asm _emit 0x53
        // 0x587335FD: lea ecx, [ebp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733603: push ecx
        __asm _emit 0x51
        // 0x58733604: push edx
        __asm _emit 0x52
        // 0x58733605: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733607: push esi
        __asm _emit 0x56
        // 0x58733608: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873360A: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873360F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58733611: jmp 0x58733615
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733613: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58733615: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733619: mov cx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5873361E: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58733620: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x58733624: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58733627: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x5873362C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873362E: je 0x58733636
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733630: push edi
        __asm _emit 0x57
        // 0x58733631: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xF9
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733636: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58733639: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873363B: je 0x58733643
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873363D: push edi
        __asm _emit 0x57
        // 0x5873363E: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733643: add dword ptr [esp + 0x48], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58733648: add ebx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x14
        // 0x5873364B: sub dword ptr [esp + 0x44], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        // 0x58733650: jne 0x587335cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733656: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873365B: lea ebp, [ebx + 0x7e]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x7E
        // 0x5873365E: lea edi, [esi + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733664: mov dword ptr [esp + 0x48], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873366C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733670: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733675: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873367A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5873367D: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58733681: mov byte ptr [esp + 0x2c], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x58733686: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733688: je 0x587336cf
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5873368A: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733690: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733696: jle 0x587336af
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58733698: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873369A: jl 0x587336af
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5873369C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336A3: je 0x587336af
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587336A5: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336AB: add edx, ebp
        __asm _emit 0x03
        __asm _emit 0xD5
        // 0x587336AD: jmp 0x587336b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587336AF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587336B1: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587336B5: push ecx
        __asm _emit 0x51
        // 0x587336B6: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587336BA: push ecx
        __asm _emit 0x51
        // 0x587336BB: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587336BF: push ecx
        __asm _emit 0x51
        // 0x587336C0: push edx
        __asm _emit 0x52
        // 0x587336C1: push esi
        __asm _emit 0x56
        // 0x587336C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587336C4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587336C6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587336C8: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xA6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587336CD: jmp 0x587336d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587336CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587336D1: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x587336D3: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336D8: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587336DC: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587336DE: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336E3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587336E7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587336E9: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336EE: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587336F3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xF6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587336F8: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587336FA: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587336FF: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58733703: add ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x40
        // 0x58733706: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58733709: inc ebx
        __asm _emit 0x43
        // 0x5873370A: sub dword ptr [esp + 0x48], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x5873370F: jne 0x58733670
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733715: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873371A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873371F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733722: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733726: mov byte ptr [esp + 0x2c], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x5873372B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873372D: je 0x5873377e
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x5873372F: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733735: cmp dword ptr [ecx + 0x160], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x5873373C: jle 0x58733755
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5873373E: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733745: je 0x58733755
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58733747: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873374D: add edx, 0x300
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733753: jmp 0x58733757
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733755: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733757: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873375B: push ecx
        __asm _emit 0x51
        // 0x5873375C: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58733760: add ecx, 0x168
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733766: push ecx
        __asm _emit 0x51
        // 0x58733767: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5873376B: add ecx, 0x72
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x72
        // 0x5873376E: push ecx
        __asm _emit 0x51
        // 0x5873376F: push edx
        __asm _emit 0x52
        // 0x58733770: push esi
        __asm _emit 0x56
        // 0x58733771: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733773: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733775: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733777: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xA6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5873377C: jmp 0x58733780
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873377E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733780: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733786: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873378B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5873378F: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733795: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873379A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873379E: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337A4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337A9: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587337AE: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xF5
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587337B3: mov eax, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337B9: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337BE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587337C2: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587337C4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587337C9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587337CC: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587337D0: mov ecx, 9
        __asm _emit 0xB9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337D5: mov byte ptr [esp + 0x2c], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587337D9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587337DB: je 0x58733813
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587337DD: mov edx, dword ptr [0x58a246f0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587337E3: cmp dword ptr [edx + 0x170], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337E9: jle 0x58733807
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587337EB: cmp dword ptr [edx + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337F2: je 0x58733807
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587337F4: mov ecx, dword ptr [edx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587337FA: mov ecx, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x24
        // 0x587337FD: push ecx
        __asm _emit 0x51
        // 0x587337FE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733800: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x3B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58733805: jmp 0x58733815
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58733807: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58733809: push ecx
        __asm _emit 0x51
        // 0x5873380A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873380C: call 0x587b7350
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x3B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58733811: jmp 0x58733815
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733813: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733815: lea edx, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873381B: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58733820: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733826: mov ebx, 0xa
        __asm _emit 0xBB
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873382B: mov dword ptr [esp + 0x48], 0x28
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733833: mov dword ptr [esp + 0x44], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58733837: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58733839: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873383E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58733840: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733843: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58733847: mov byte ptr [esp + 0x2c], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0A
        // 0x5873384C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5873384E: je 0x587338df
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733854: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733859: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873385F: jle 0x5873387d
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58733861: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58733863: jl 0x5873387d
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x58733865: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873386C: je 0x5873387d
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5873386E: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733874: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733878: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5873387B: jmp 0x5873387f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873387D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5873387F: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58733883: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58733887: lea eax, [ebx + edx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0xF6
        // 0x5873388B: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5873388F: push eax
        __asm _emit 0x50
        // 0x58733890: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733892: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733894: add ecx, 0xf0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873389A: push ecx
        __asm _emit 0x51
        // 0x5873389B: add edx, 0x104
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587338A1: push edx
        __asm _emit 0x52
        // 0x587338A2: push esi
        __asm _emit 0x56
        // 0x587338A3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587338A5: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587338AA: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587338B0: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x587338B3: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587338B5: je 0x587338e1
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x587338B7: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x587338BA: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x587338BD: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587338C0: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587338C3: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x587338C6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587338C8: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x587338CB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587338CE: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587338D1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587338D4: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x587338D7: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587338DA: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x587338DD: jmp 0x587338e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587338DF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587338E1: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587338E5: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x587338E7: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587338EC: mov dword ptr [ecx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x10
        // 0x587338EF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587338F4: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587338F6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587338F9: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587338FD: mov byte ptr [esp + 0x2c], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0B
        // 0x58733902: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58733904: je 0x58733995
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873390A: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873390F: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733915: jle 0x58733933
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58733917: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58733919: jl 0x58733933
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x5873391B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733922: je 0x58733933
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58733924: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873392A: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5873392E: mov ebp, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x58733931: jmp 0x58733935
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733933: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58733935: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58733939: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5873393D: lea edx, [ebx + ecx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0B
        __asm _emit 0xF6
        // 0x58733941: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733945: push edx
        __asm _emit 0x52
        // 0x58733946: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733948: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873394A: add eax, 0x113
        __asm _emit 0x05
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873394F: push eax
        __asm _emit 0x50
        // 0x58733950: add ecx, 0x104
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733956: push ecx
        __asm _emit 0x51
        // 0x58733957: push esi
        __asm _emit 0x56
        // 0x58733958: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5873395A: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0xF8
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873395F: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733965: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58733968: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5873396A: je 0x58733997
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5873396C: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5873396F: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58733972: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58733975: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58733978: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873397B: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873397E: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58733981: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58733984: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58733987: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5873398A: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5873398D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58733990: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58733993: jmp 0x58733997
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733995: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58733997: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5873399B: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5873399D: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x587339A2: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x587339A4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587339A9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587339AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587339AE: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587339B2: mov byte ptr [esp + 0x2c], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0C
        // 0x587339B7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587339B9: je 0x58733a49
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587339BF: mov eax, dword ptr [0x58a24760]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587339C4: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587339CA: jle 0x587339e8
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x587339CC: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587339CE: jl 0x587339e8
        __asm _emit 0x7C
        __asm _emit 0x18
        // 0x587339D0: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587339D7: je 0x587339e8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587339D9: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587339DF: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587339E3: mov ebp, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x0A
        // 0x587339E6: jmp 0x587339ea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587339E8: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587339EA: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587339EE: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587339F2: lea ecx, [ebx + eax - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x587339F6: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587339FA: push ecx
        __asm _emit 0x51
        // 0x587339FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587339FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587339FF: add edx, 0x136
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733A05: push edx
        __asm _emit 0x52
        // 0x58733A06: add eax, 0x104
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733A0B: push eax
        __asm _emit 0x50
        // 0x58733A0C: push esi
        __asm _emit 0x56
        // 0x58733A0D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58733A0F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xF7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733A14: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58733A1A: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58733A1D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58733A1F: je 0x58733a4b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58733A21: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58733A24: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58733A27: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58733A2A: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58733A2D: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58733A30: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58733A32: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58733A35: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58733A38: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58733A3B: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58733A3E: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58733A41: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58733A44: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58733A47: jmp 0x58733a4b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733A49: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58733A4B: mov eax, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58733A4F: add dword ptr [esp + 0x48], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58733A54: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58733A57: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58733A5A: inc ebx
        __asm _emit 0x43
        // 0x58733A5B: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58733A5F: lea eax, [ebx - 0xa]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0xF6
        // 0x58733A62: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58733A65: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58733A6A: jl 0x58733837
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC7
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733A70: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58733A72: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733A77: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733A7A: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58733A7E: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58733A82: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733A86: mov byte ptr [esp + 0x2c], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0D
        // 0x58733A8B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733A8D: je 0x58733ac7
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58733A8F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733A91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733A93: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58733A98: lea ecx, [ebp + 0x109]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733A9E: push ecx
        __asm _emit 0x51
        // 0x58733A9F: lea edx, [ebx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733AA5: push edx
        __asm _emit 0x52
        // 0x58733AA6: lea ecx, [ebp + 0xfa]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733AAC: push ecx
        __asm _emit 0x51
        // 0x58733AAD: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733AB3: lea edx, [ebx + 0x10e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733AB9: push edx
        __asm _emit 0x52
        // 0x58733ABA: push ecx
        __asm _emit 0x51
        // 0x58733ABB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733ABD: push esi
        __asm _emit 0x56
        // 0x58733ABE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733AC0: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733AC5: jmp 0x58733ac9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733AC7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733AC9: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733ACF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733AD1: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x58733AD4: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733ADA: mov dword ptr [eax + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x68
        // 0x58733ADD: mov edi, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733AE3: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58733AE6: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58733AEB: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58733AF0: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58733AF4: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58733AF6: je 0x58733afe
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733AF8: push edi
        __asm _emit 0x57
        // 0x58733AF9: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xF4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733AFE: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58733B01: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58733B03: je 0x58733b0b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733B05: push edi
        __asm _emit 0x57
        // 0x58733B06: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xF3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733B0B: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B11: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B16: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58733B1A: mov eax, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B20: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B25: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58733B29: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58733B2B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733B30: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733B33: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733B37: mov byte ptr [esp + 0x2c], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0E
        // 0x58733B3C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733B3E: je 0x58733b78
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58733B40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733B42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733B44: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58733B49: lea ecx, [ebp + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B4F: push ecx
        __asm _emit 0x51
        // 0x58733B50: lea edx, [ebx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B56: push edx
        __asm _emit 0x52
        // 0x58733B57: lea ecx, [ebp + 0x11d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B5D: push ecx
        __asm _emit 0x51
        // 0x58733B5E: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733B64: lea edx, [ebx + 0x10e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B6A: push edx
        __asm _emit 0x52
        // 0x58733B6B: push ecx
        __asm _emit 0x51
        // 0x58733B6C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733B6E: push esi
        __asm _emit 0x56
        // 0x58733B6F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733B71: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733B76: jmp 0x58733b7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733B78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733B7A: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B80: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733B82: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x58733B85: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B8B: mov dword ptr [eax + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x68
        // 0x58733B8E: mov edi, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733B94: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58733B97: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58733B9C: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58733BA1: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58733BA5: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58733BA7: je 0x58733baf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733BA9: push edi
        __asm _emit 0x57
        // 0x58733BAA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733BAF: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58733BB2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58733BB4: je 0x58733bbc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733BB6: push edi
        __asm _emit 0x57
        // 0x58733BB7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xF3
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733BBC: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733BC2: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733BC7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58733BCB: mov eax, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733BD1: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733BD6: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58733BDA: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58733BDC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733BE1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733BE4: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733BE8: mov byte ptr [esp + 0x2c], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x0F
        // 0x58733BED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733BEF: je 0x58733c29
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x58733BF1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733BF3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733BF5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58733BFA: lea ecx, [ebp + 0x14f]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C00: push ecx
        __asm _emit 0x51
        // 0x58733C01: lea edx, [ebx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C07: push edx
        __asm _emit 0x52
        // 0x58733C08: lea ecx, [ebp + 0x140]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C0E: push ecx
        __asm _emit 0x51
        // 0x58733C0F: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733C15: lea edx, [ebx + 0x10e]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C1B: push edx
        __asm _emit 0x52
        // 0x58733C1C: push ecx
        __asm _emit 0x51
        // 0x58733C1D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58733C1F: push esi
        __asm _emit 0x56
        // 0x58733C20: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733C22: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58733C27: jmp 0x58733c2b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733C29: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733C2B: mov dword ptr [esi + 0xfc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C31: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733C33: mov dword ptr [eax + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x58733C36: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C3C: mov dword ptr [eax + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x68
        // 0x58733C3F: mov edi, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C45: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58733C48: mov ax, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58733C4D: mov byte ptr [esp + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x58733C52: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58733C56: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58733C58: je 0x58733c60
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733C5A: push edi
        __asm _emit 0x57
        // 0x58733C5B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733C60: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58733C63: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58733C65: je 0x58733c6d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58733C67: push edi
        __asm _emit 0x57
        // 0x58733C68: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xF2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58733C6D: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C73: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C78: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58733C7C: mov eax, dword ptr [esi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C82: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C87: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58733C8B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733C8D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58733C8F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733C91: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C96: mov word ptr [esi + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733C9D: mov word ptr [esi + 0x122], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CA4: mov word ptr [esi + 0x120], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CAB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733CB0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733CB3: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733CB7: mov byte ptr [esp + 0x2c], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x58733CBC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733CBE: je 0x58733d0e
        __asm _emit 0x74
        __asm _emit 0x4E
        // 0x58733CC0: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733CC6: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CCD: jle 0x58733ce0
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58733CCF: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CD6: je 0x58733ce0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58733CD8: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CDE: jmp 0x58733ce2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733CE0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58733CE2: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58733CE6: push edi
        __asm _emit 0x57
        // 0x58733CE7: lea edx, [ebp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CED: push edx
        __asm _emit 0x52
        // 0x58733CEE: lea edx, [ebx + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733CF4: push edx
        __asm _emit 0x52
        // 0x58733CF5: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733CFB: push ecx
        __asm _emit 0x51
        // 0x58733CFC: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733D02: push esi
        __asm _emit 0x56
        // 0x58733D03: push ecx
        __asm _emit 0x51
        // 0x58733D04: push edx
        __asm _emit 0x52
        // 0x58733D05: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733D07: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58733D0C: jmp 0x58733d14
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58733D0E: mov edi, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58733D12: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733D14: mov ecx, 0xe0ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D19: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D1F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58733D23: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D28: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58733D2D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x8F
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733D32: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733D35: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733D39: mov byte ptr [esp + 0x2c], 0x11
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x11
        // 0x58733D3E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733D40: je 0x58733d92
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58733D42: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733D48: cmp dword ptr [ecx + 0x160], 0xd
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x58733D4F: jle 0x58733d68
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58733D51: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D58: je 0x58733d68
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58733D5A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D60: add edx, 0x340
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D66: jmp 0x58733d6a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733D68: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733D6A: push edi
        __asm _emit 0x57
        // 0x58733D6B: lea ecx, [ebp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D71: push ecx
        __asm _emit 0x51
        // 0x58733D72: lea ecx, [ebx + 0xd2]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D78: push ecx
        __asm _emit 0x51
        // 0x58733D79: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733D7F: push edx
        __asm _emit 0x52
        // 0x58733D80: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733D86: push esi
        __asm _emit 0x56
        // 0x58733D87: push edx
        __asm _emit 0x52
        // 0x58733D88: push ecx
        __asm _emit 0x51
        // 0x58733D89: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733D8B: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58733D90: jmp 0x58733d94
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733D92: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733D94: mov edx, 0xe0ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D99: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733D9F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58733DA3: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733DA8: mov byte ptr [esp + 0x30], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        // 0x58733DAD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58733DB2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58733DB5: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58733DB9: mov byte ptr [esp + 0x2c], 0x12
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x12
        // 0x58733DBE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58733DC0: je 0x58733e0f
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58733DC2: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733DC8: cmp dword ptr [ecx + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58733DCF: jle 0x58733de5
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58733DD1: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733DD8: je 0x58733de5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58733DDA: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733DE0: add edx, 0x40
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x40
        // 0x58733DE3: jmp 0x58733de7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733DE5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733DE7: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733DED: push edi
        __asm _emit 0x57
        // 0x58733DEE: add ebp, 0x16d
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733DF4: push ebp
        __asm _emit 0x55
        // 0x58733DF5: add ebx, 0x11a
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733DFB: push ebx
        __asm _emit 0x53
        // 0x58733DFC: push edx
        __asm _emit 0x52
        // 0x58733DFD: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58733E03: push esi
        __asm _emit 0x56
        // 0x58733E04: push ecx
        __asm _emit 0x51
        // 0x58733E05: push edx
        __asm _emit 0x52
        // 0x58733E06: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58733E08: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x9F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58733E0D: jmp 0x58733e11
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58733E0F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733E11: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E17: mov ecx, 0xe0ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E1C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58733E20: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58733E22: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58733E24: mov word ptr [esi + 0x128], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E2B: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E30: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58733E34: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58733E38: mov word ptr [esi + 0x126], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E3F: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E44: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58733E47: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E4C: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58733E4F: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58733E53: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58733E55: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58733E59: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733E60: pop ecx
        __asm _emit 0x59
        // 0x58733E61: pop edi
        __asm _emit 0x5F
        // 0x58733E62: pop esi
        __asm _emit 0x5E
        // 0x58733E63: pop ebp
        __asm _emit 0x5D
        // 0x58733E64: pop ebx
        __asm _emit 0x5B
        // 0x58733E65: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58733E68: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
