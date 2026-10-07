// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1180 bytes in 2 exact ranges.
// Source symbol alias: FUN_588d3390.

// Ghidra body range 0x588D3390..0x588D344C; 188 mapped bytes.
extern "C" __declspec(naked) void FUN_588d3390_segment_00() {
    __asm {
        // 0x588D3390: sub esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3396: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588D339B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588D339D: mov dword ptr [esp + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33A4: push ebx
        __asm _emit 0x53
        // 0x588D33A5: push ebp
        __asm _emit 0x55
        // 0x588D33A6: push esi
        __asm _emit 0x56
        // 0x588D33A7: push edi
        __asm _emit 0x57
        // 0x588D33A8: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588D33AA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D33AC: cmp dword ptr [ebx + 0x1dc], edi
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33B2: je 0x588d380e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33B8: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D33BD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588D33C0: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D33C4: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D33C6: je 0x588d380e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D33D0: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D33D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D33D6: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D33DD: je 0x588d37f9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D33E3: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D33E8: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D33EC: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D33F0: cmp dword ptr [eax + 0x21c34], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D33F6: jne 0x588d341c
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x588D33F8: cmp dword ptr [eax + 0x218b0], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D33FE: jle 0x588d341c
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588D3400: mov cl, byte ptr [eax + 0x105a8]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0xA8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3406: and cl, 1
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x01
        // 0x588D3409: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x588D340C: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588D340E: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588D3410: and eax, 0xfffffff7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xF7
        // 0x588D3413: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x588D3416: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D341A: jmp 0x588d3424
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588D341C: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3424: lea eax, [esi + 0x1390]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D342A: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D342E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D3432: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D3436: je 0x588d3736
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D343C: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x588D343E: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3442: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D3444: je 0x588d3736
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D344A: jmp 0x588d3454
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x588D3450..0x588D3830; 992 mapped bytes.
extern "C" __declspec(naked) void FUN_588d3390_segment_01() {
    __asm {
        // 0x588D3450: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3454: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x588D3457: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588D3459: call 0x5873a250
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x6D
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D345E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3460: je 0x588d352e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3466: mov ecx, dword ptr [ebx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D346C: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D3471: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3473: mov ecx, dword ptr [ebp + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3479: sar edx, 7
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588D347C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D347E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D3481: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3483: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D3487: mov edi, dword ptr [ebx + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D348D: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x588D3492: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D3494: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D3498: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588D349B: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D349D: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D34A0: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D34A2: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588D34A4: cdq
        __asm _emit 0x99
        // 0x588D34A5: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588D34A7: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x588D34A9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D34AB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D34AD: jge 0x588d352e
        __asm _emit 0x7D
        __asm _emit 0x7F
        // 0x588D34AF: mov esi, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D34B5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D34B7: imul esi, esi, 0x75
        __asm _emit 0x6B
        __asm _emit 0xF6
        __asm _emit 0x75
        // 0x588D34BA: imul ecx, ecx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x64
        // 0x588D34BD: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D34C2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D34C4: mov eax, dword ptr [ebx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D34CA: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D34CD: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D34CF: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D34D2: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D34D4: cdq
        __asm _emit 0x99
        // 0x588D34D5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D34D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D34D9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D34DE: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x588D34E0: mov eax, dword ptr [ebx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D34E6: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D34E9: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588D34EB: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x588D34EE: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588D34F0: cdq
        __asm _emit 0x99
        // 0x588D34F1: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588D34F3: mov edx, dword ptr [ebp + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D34F9: sub ecx, dword ptr [ebp + 4]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x588D34FC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588D34FE: mov eax, 0x57619f1
        __asm _emit 0xB8
        __asm _emit 0xF1
        __asm _emit 0x19
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588D3503: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D3505: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588D3508: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D350A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D350D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D350F: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x588D3511: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D3513: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x588D3516: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D3518: imul eax, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC6
        // 0x588D351B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D351D: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x588D3520: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3522: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588D3524: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D3528: jg 0x588d3542
        __asm _emit 0x7F
        __asm _emit 0x18
        // 0x588D352A: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D352E: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588D3531: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3535: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3537: jne 0x588d3450
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D353D: jmp 0x588d3736
        __asm _emit 0xE9
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3542: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3546: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D354A: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588D354D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D3551: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x97
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3556: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x97
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D355B: mov ecx, dword ptr [ebx + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3561: push eax
        __asm _emit 0x50
        // 0x588D3562: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3568: lea eax, [ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D356F: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588D3571: cdq
        __asm _emit 0x99
        // 0x588D3572: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D3575: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D3577: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588D357A: push edi
        __asm _emit 0x57
        // 0x588D357B: push eax
        __asm _emit 0x50
        // 0x588D357C: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x89
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D3581: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3587: movzx ecx, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D358E: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x588D3591: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588D3594: push ecx
        __asm _emit 0x51
        // 0x588D3595: push eax
        __asm _emit 0x50
        // 0x588D3596: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x588D3599: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588D359B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D359D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D359F: je 0x588d3829
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35A5: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D35AB: test byte ptr [ecx + 0x378], 0x80
        __asm _emit 0xF6
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x588D35B2: je 0x588d372b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35B8: mov esi, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35BE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D35C0: je 0x588d372b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35C6: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x588D35C9: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35CF: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35D5: je 0x588d372b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35DB: mov eax, dword ptr [ebp + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35E1: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588D35E4: push eax
        __asm _emit 0x50
        // 0x588D35E5: call 0x588dcd80
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D35EA: cmp byte ptr [0x58a24908], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588D35F1: je 0x588d3629
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588D35F3: mov ecx, dword ptr [ebp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x588D35F6: cmp byte ptr [ecx + 0x354], 4
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588D35FD: jne 0x588d3629
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588D35FF: mov edx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3605: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D360A: cmp edx, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588D360D: jne 0x588d3629
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x588D360F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3615: cmp word ptr [ecx + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588D361D: je 0x588d362f
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588D361F: mov dword ptr [ecx + 0x21f30], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3629: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D362F: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3636: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588D363A: je 0x588d3657
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588D363C: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D363F: je 0x588d3657
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588D3641: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588D3645: je 0x588d3657
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588D3647: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588D364B: je 0x588d3657
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588D364D: mov dword ptr [ecx + 0x21f38], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3657: mov eax, dword ptr [ebp + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D365D: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D3661: imul eax, eax, 0x46
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x588D3664: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3666: div esi
        __asm _emit 0xF7
        __asm _emit 0xF6
        // 0x588D3668: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D366E: push eax
        __asm _emit 0x50
        // 0x588D366F: call 0x588dce50
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3674: mov eax, dword ptr [ebp + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D367A: imul eax, eax, 0xc8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3680: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D3682: div esi
        __asm _emit 0xF7
        __asm _emit 0xF6
        // 0x588D3684: mov edi, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D368A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588D368C: cdq
        __asm _emit 0x99
        // 0x588D368D: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x588D368F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588D3691: sub dword ptr [edi + 0x128c], eax
        __asm _emit 0x29
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3697: push ecx
        __asm _emit 0x51
        // 0x588D3698: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D369E: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588D36A0: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36A5: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D36AB: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36B2: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588D36B6: je 0x588d36e3
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588D36B8: cmp ax, 0x13
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x13
        // 0x588D36BC: je 0x588d36e3
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588D36BE: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D36C4: cmp word ptr [edx + 0x105f0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588D36CC: je 0x588d36e3
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588D36CE: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D36D2: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36D8: push eax
        __asm _emit 0x50
        // 0x588D36D9: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36DE: call 0x588dc990
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36E3: mov ecx, dword ptr [ebx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36E9: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D36EF: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588D36F2: jne 0x588d372b
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588D36F4: mov eax, dword ptr [ebp + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D36FA: imul eax, eax, 0x46
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x588D36FD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D36FF: div esi
        __asm _emit 0xF7
        __asm _emit 0xF6
        // 0x588D3701: mov ecx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3707: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D370B: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588D3711: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3715: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D371A: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588D371C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3722: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588D3725: push edx
        __asm _emit 0x52
        // 0x588D3726: call 0x587e6480
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x2D
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588D372B: cmp dword ptr [esp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588D3730: jne 0x588d3829
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3736: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D373A: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D373E: inc ecx
        __asm _emit 0x41
        // 0x588D373F: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x588D3742: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588D3745: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D3749: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D374D: jl 0x588d3432
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xDF
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D3753: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3759: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D375C: cmp eax, dword ptr [ebx + 0x23c]
        __asm _emit 0x3B
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3762: jne 0x588d37f9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3768: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D376C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588D376E: je 0x588d37f9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3774: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D377A: cmp dword ptr [edx + 0x2e4], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3781: je 0x588d37f9
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x588D3783: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D3789: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D378E: imul dword ptr [esp + 0x2c]
        __asm _emit 0xF7
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588D3792: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D3795: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D3797: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D379A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D379C: push eax
        __asm _emit 0x50
        // 0x588D379D: push ecx
        __asm _emit 0x51
        // 0x588D379E: push 0x589a0f94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D37A3: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588D37A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D37A8: push eax
        __asm _emit 0x50
        // 0x588D37A9: lea ecx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588D37AD: push ecx
        __asm _emit 0x51
        // 0x588D37AE: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D37B4: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D37BA: mov esi, dword ptr [edx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0xB2
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D37C0: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D37C3: push 0x9f
        __asm _emit 0x68
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D37C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D37CA: push 0x5898cde8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D37CF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588D37D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588D37D4: push eax
        __asm _emit 0x50
        // 0x588D37D5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D37D7: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x73
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588D37DC: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D37E2: mov ecx, dword ptr [ecx + 0x2e4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D37E8: push 0x10101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D37ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588D37EF: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588D37F3: push eax
        __asm _emit 0x50
        // 0x588D37F4: call 0x5877aba0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x73
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588D37F9: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D37FD: mov eax, dword ptr [edx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x78
        // 0x588D3800: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588D3802: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3806: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D3808: jne 0x588d33d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC2
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D380E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D3810: mov ecx, dword ptr [esp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3817: pop edi
        __asm _emit 0x5F
        // 0x588D3818: pop esi
        __asm _emit 0x5E
        // 0x588D3819: pop ebp
        __asm _emit 0x5D
        // 0x588D381A: pop ebx
        __asm _emit 0x5B
        // 0x588D381B: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588D381D: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D3822: add esp, 0x124
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3828: ret
        __asm _emit 0xC3
        // 0x588D3829: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D382E: jmp 0x588d3810
        __asm _emit 0xEB
        __asm _emit 0xE0
    }
}
