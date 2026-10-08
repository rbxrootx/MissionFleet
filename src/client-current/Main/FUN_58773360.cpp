// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 711 bytes in 3 exact ranges.
// Source symbol alias: FUN_58773360.

// Ghidra body range 0x58773360..0x587734F1; 401 mapped bytes.
extern "C" __declspec(naked) void FUN_58773360_segment_00() {
    __asm {
        // 0x58773360: push ebp
        __asm _emit 0x55
        // 0x58773361: lea ebp, [esp - 0x11c]
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xE4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773368: sub esp, 0x11c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877336E: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58773370: push 0x5897f100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xF1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58773375: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877337B: push eax
        __asm _emit 0x50
        // 0x5877337C: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5877337F: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58773384: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58773386: mov dword ptr [ebp + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877338C: push ebx
        __asm _emit 0x53
        // 0x5877338D: push esi
        __asm _emit 0x56
        // 0x5877338E: push edi
        __asm _emit 0x57
        // 0x5877338F: push eax
        __asm _emit 0x50
        // 0x58773390: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58773393: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773399: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5877339C: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5877339E: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587733A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587733A3: jne 0x587733a9
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587733A5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587733A7: jmp 0x587733c1
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x587733A9: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587733AC: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587733AE: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587733B3: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587733B5: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587733B7: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587733BA: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587733BC: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x587733BF: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x587733C1: mov edi, dword ptr [ebp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587733C7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587733C9: je 0x58773618
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587733CF: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587733D2: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587733D5: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x587733D8: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587733DD: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587733DF: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587733E1: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587733E4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587733E6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587733E9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587733EB: mov ecx, 0xea0ea0
        __asm _emit 0xB9
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        __asm _emit 0x00
        // 0x587733F0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587733F2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587733F4: jae 0x587733fb
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x587733F6: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x32
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587733FB: lea ecx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x38
        // 0x587733FE: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x58773400: jae 0x5877352a
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773406: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58773408: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877340A: mov edx, 0xea0ea0
        __asm _emit 0xBA
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        __asm _emit 0x00
        // 0x5877340F: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58773411: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58773413: jae 0x58773419
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58773415: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58773417: jmp 0x5877341b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58773419: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877341B: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x5877341D: jae 0x58773421
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5877341F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58773421: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58773423: push esi
        __asm _emit 0x56
        // 0x58773424: call 0x587724d0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773429: mov ecx, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877342F: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58773432: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58773435: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877343A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5877343C: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5877343E: mov ecx, dword ptr [ebp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773444: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58773447: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773449: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877344C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877344E: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58773451: imul eax, eax, 0x118
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773457: add eax, dword ptr [ebp - 0x14]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5877345A: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5877345D: push ecx
        __asm _emit 0x51
        // 0x5877345E: push edi
        __asm _emit 0x57
        // 0x5877345F: push eax
        __asm _emit 0x50
        // 0x58773460: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773462: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773469: call 0x58772cf0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877346E: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58773471: mov byte ptr [ebp - 0x1c], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x58773475: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE4
        // 0x58773478: push edx
        __asm _emit 0x52
        // 0x58773479: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x5877347C: push edx
        __asm _emit 0x52
        // 0x5877347D: mov edx, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773483: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x58773486: push ecx
        __asm _emit 0x51
        // 0x58773487: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5877348A: push ecx
        __asm _emit 0x51
        // 0x5877348B: push edx
        __asm _emit 0x52
        // 0x5877348C: push eax
        __asm _emit 0x50
        // 0x5877348D: call 0x58772940
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773492: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x58773495: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58773498: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5877349A: imul eax, eax, 0x118
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587734A0: add eax, dword ptr [ebp - 0x14]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587734A3: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587734A6: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587734AA: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x587734AD: push edx
        __asm _emit 0x52
        // 0x587734AE: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xE8
        // 0x587734B1: push edx
        __asm _emit 0x52
        // 0x587734B2: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x587734B5: push edx
        __asm _emit 0x52
        // 0x587734B6: push eax
        __asm _emit 0x50
        // 0x587734B7: mov eax, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587734BD: push ecx
        __asm _emit 0x51
        // 0x587734BE: push eax
        __asm _emit 0x50
        // 0x587734BF: call 0x58772940
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587734C4: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587734C7: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587734CA: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587734CC: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x587734D1: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587734D3: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587734D6: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587734D8: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587734DB: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587734DD: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587734E0: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587734E2: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587734E5: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x587734E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587734E9: je 0x587734f4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587734EB: push eax
        __asm _emit 0x50
        // 0x587734EC: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x97
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587734F4..0x58773515; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_58773360_segment_01() {
    __asm {
        // 0x587734F4: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587734F7: imul esi, esi, 0x118
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587734FD: imul edi, edi, 0x118
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773503: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x58773505: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58773507: mov dword ptr [ebx + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x14
        // 0x5877350A: mov dword ptr [ebx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x5877350D: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58773510: jmp 0x58773618
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5877352A..0x5877363F; 277 mapped bytes.
extern "C" __declspec(naked) void FUN_58773360_segment_02() {
    __asm {
        // 0x5877352A: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x5877352D: sub ecx, dword ptr [ebp + 0x128]
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773533: mov esi, dword ptr [ebp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773539: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x5877353E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773540: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58773542: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x58773545: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58773547: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5877354A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5877354C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5877354E: mov ecx, 0x46
        __asm _emit 0xB9
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773553: lea edi, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x58773556: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58773558: jae 0x587735d1
        __asm _emit 0x73
        __asm _emit 0x77
        // 0x5877355A: mov edi, dword ptr [ebp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xBD
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773560: mov eax, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773566: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xEC
        // 0x58773569: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5877356B: imul esi, esi, 0x118
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773571: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x58773574: push ecx
        __asm _emit 0x51
        // 0x58773575: push edx
        __asm _emit 0x52
        // 0x58773576: push eax
        __asm _emit 0x50
        // 0x58773577: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58773579: call 0x58772e80
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877357E: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58773581: sub ecx, dword ptr [ebp + 0x128]
        __asm _emit 0x2B
        __asm _emit 0x8D
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773587: lea eax, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5877358A: push eax
        __asm _emit 0x50
        // 0x5877358B: mov eax, 0xea0ea0eb
        __asm _emit 0xB8
        __asm _emit 0xEB
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0xEA
        // 0x58773590: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58773592: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58773595: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58773597: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x5877359A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5877359C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5877359F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587735A1: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587735A3: push edi
        __asm _emit 0x57
        // 0x587735A4: push eax
        __asm _emit 0x50
        // 0x587735A5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587735A7: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587735AE: call 0x58772cf0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587735B3: add dword ptr [ebx + 0x10], esi
        __asm _emit 0x01
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587735B6: mov ebx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x10
        // 0x587735B9: mov eax, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587735BF: lea edx, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x587735C2: push edx
        __asm _emit 0x52
        // 0x587735C3: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587735C5: push ebx
        __asm _emit 0x53
        // 0x587735C6: push eax
        __asm _emit 0x50
        // 0x587735C7: call 0x587728d0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587735CC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587735CF: jmp 0x58773618
        __asm _emit 0xEB
        __asm _emit 0x47
        // 0x587735D1: mov esi, dword ptr [ebp + 0x12c]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587735D7: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587735DA: imul esi, esi, 0x118
        __asm _emit 0x69
        __asm _emit 0xF6
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587735E0: push eax
        __asm _emit 0x50
        // 0x587735E1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587735E3: push eax
        __asm _emit 0x50
        // 0x587735E4: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x587735E6: push edi
        __asm _emit 0x57
        // 0x587735E7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587735E9: call 0x58772e80
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587735EE: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x587735F1: mov edx, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587735F7: push ecx
        __asm _emit 0x51
        // 0x587735F8: push edi
        __asm _emit 0x57
        // 0x587735F9: push edx
        __asm _emit 0x52
        // 0x587735FA: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587735FD: call 0x58772b40
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773602: lea eax, [ebp]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58773605: push eax
        __asm _emit 0x50
        // 0x58773606: mov eax, dword ptr [ebp + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877360C: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5877360E: push esi
        __asm _emit 0x56
        // 0x5877360F: push eax
        __asm _emit 0x50
        // 0x58773610: call 0x587728d0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58773615: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58773618: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5877361B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773622: pop ecx
        __asm _emit 0x59
        // 0x58773623: pop edi
        __asm _emit 0x5F
        // 0x58773624: pop esi
        __asm _emit 0x5E
        // 0x58773625: pop ebx
        __asm _emit 0x5B
        // 0x58773626: mov ecx, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877362C: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5877362E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58773633: add ebp, 0x11c
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58773639: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5877363B: pop ebp
        __asm _emit 0x5D
        // 0x5877363C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
