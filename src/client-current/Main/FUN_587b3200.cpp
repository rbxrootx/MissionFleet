// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2132 bytes in 2 exact ranges.
// Source symbol alias: FUN_587b3200.

// Ghidra body range 0x587B3200..0x587B328B; 139 mapped bytes.
extern "C" __declspec(naked) void FUN_587b3200_segment_00() {
    __asm {
        // 0x587B3200: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587B3202: push 0x58980ed7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0x0E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B3207: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B320D: push eax
        __asm _emit 0x50
        // 0x587B320E: sub esp, 0x34
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x34
        // 0x587B3211: push ebx
        __asm _emit 0x53
        // 0x587B3212: push ebp
        __asm _emit 0x55
        // 0x587B3213: push esi
        __asm _emit 0x56
        // 0x587B3214: push edi
        __asm _emit 0x57
        // 0x587B3215: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B321A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B321C: push eax
        __asm _emit 0x50
        // 0x587B321D: lea eax, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587B3221: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3227: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B3229: mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B322D: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x587B322F: movzx edx, word ptr [esi + 0x234]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3236: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B3238: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B323E: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587B3241: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3246: shr ecx, 0xf
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0F
        // 0x587B3249: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B324B: and ecx, 0xfff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3251: push edi
        __asm _emit 0x57
        // 0x587B3252: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B3256: push ecx
        __asm _emit 0x51
        // 0x587B3257: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B3259: mov dword ptr [esp + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x587B325D: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B3261: call 0x587b1090
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B3266: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B3268: test byte ptr [esi + 0x224], 7
        __asm _emit 0xF6
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587B326F: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B3273: jbe 0x587b39c1
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3279: mov dword ptr [esp + 0x30], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B327D: mov dword ptr [esp + 0x2c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B3281: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B3285: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B3289: jmp 0x587b3294
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587B3290..0x587B3A59; 1993 mapped bytes.
extern "C" __declspec(naked) void FUN_587b3200_segment_01() {
    __asm {
        // 0x587B3290: mov edi, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B3294: cmp dword ptr [0x58a24504], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B329A: jne 0x587b34ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B32A0: movzx eax, word ptr [esi + 0x22c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B32A7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B32A9: add eax, 0xffffff38
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B32AE: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587B32B0: setl cl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC1
        // 0x587B32B3: dec ecx
        __asm _emit 0x49
        // 0x587B32B4: and ecx, eax
        __asm _emit 0x23
        __asm _emit 0xC8
        // 0x587B32B6: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x587B32BB: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B32BD: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x587B32C0: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B32C2: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B32C5: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B32C7: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B32CC: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587B32CE: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587B32D1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B32D3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B32D5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B32D8: lea ebx, [eax + ecx + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x08
        __asm _emit 0x40
        // 0x587B32DC: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x587B32DF: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B32E2: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x587B32E7: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B32E9: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587B32EB: sar edx, 8
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587B32EE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B32F0: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B32F3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B32F5: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x587B32F7: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587B32F9: jg 0x587b32fd
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587B32FB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587B32FD: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x587B3300: je 0x587b34ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3306: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B330B: mov edx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3311: add edx, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3317: mov eax, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B331D: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B3321: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B3323: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B3327: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x587B3329: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B332B: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3331: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3336: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B333B: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587B333E: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587B3340: cdq
        __asm _emit 0x99
        // 0x587B3341: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B3343: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B3345: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B334A: mul ebp
        __asm _emit 0xF7
        __asm _emit 0xE5
        // 0x587B334C: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x587B334F: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3355: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587B3357: sub ecx, dword ptr [ebp*4 + 0x58a17ce0]
        __asm _emit 0x2B
        __asm _emit 0x0C
        __asm _emit 0xAD
        __asm _emit 0xE0
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x587B335E: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B3363: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B3366: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B3368: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B336B: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B336D: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B3370: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B3372: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x587B3374: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587B3376: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B3378: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B337C: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B337E: jns 0x587b3388
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587B3380: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3386: jmp 0x587b33a3
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587B3388: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B338D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B338F: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B3391: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B3394: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B3396: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B3399: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B339B: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B33A1: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587B33A3: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B33A7: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B33AB: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B33AF: lea eax, [edx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x587B33B2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B33B4: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B33BA: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B33BF: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B33C4: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587B33C7: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B33CC: mul ebp
        __asm _emit 0xF7
        __asm _emit 0xE5
        // 0x587B33CE: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x587B33D1: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B33D7: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587B33D9: sub ecx, dword ptr [ebp*4 + 0x58a17ce0]
        __asm _emit 0x2B
        __asm _emit 0x0C
        __asm _emit 0xAD
        __asm _emit 0xE0
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x587B33E0: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B33E5: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B33E8: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B33EA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B33ED: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B33EF: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B33F2: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B33F4: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B33F6: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587B33F8: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B33FC: cdq
        __asm _emit 0x99
        // 0x587B33FD: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B3400: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B3402: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B3405: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587B3407: jns 0x587b3411
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x587B3409: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B340F: jmp 0x587b342c
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x587B3411: mov eax, 0x6e5d4c3b
        __asm _emit 0xB8
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x5D
        __asm _emit 0x6E
        // 0x587B3416: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B3418: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587B341A: sar edx, 0xb
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x587B341D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B341F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B3422: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B3424: imul eax, eax, 0xe10
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B342A: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587B342C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B3430: mov dword ptr [esp + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B3434: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587B3438: lea eax, [edx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0A
        // 0x587B343B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B343D: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3443: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3448: mov ecx, 0x3e8
        __asm _emit 0xB9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B344D: mov ebp, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x90
        // 0x587B3450: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B3455: mul ebp
        __asm _emit 0xF7
        __asm _emit 0xE5
        // 0x587B3457: shr edx, 6
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x06
        // 0x587B345A: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3460: sub ebp, edx
        __asm _emit 0x2B
        __asm _emit 0xEA
        // 0x587B3462: sub ecx, dword ptr [ebp*4 + 0x58a17ce0]
        __asm _emit 0x2B
        __asm _emit 0x0C
        __asm _emit 0xAD
        __asm _emit 0xE0
        __asm _emit 0x7C
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x587B3469: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B346E: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x587B3471: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B3473: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B3476: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587B3478: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587B347B: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B347D: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587B347F: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B3483: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x587B3488: imul edi
        __asm _emit 0xF7
        __asm _emit 0xEF
        // 0x587B348A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B348C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B348F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B3491: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587B3494: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B3496: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x587B349B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587B349D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B34A0: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B34A2: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B34A5: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B34A7: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587B34A9: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B34AD: cmp dword ptr [esi + 0x25c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587B34B4: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587B34B7: mov ebx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587B34BA: jne 0x587b34ca
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587B34BC: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B34C0: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x587B34C3: lea ebp, [edi + eax]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x07
        // 0x587B34C6: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x587B34C8: jmp 0x587b34f3
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x587B34CA: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B34D0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B34D4: lea eax, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD1
        // 0x587B34D7: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B34DD: lea eax, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xC0
        // 0x587B34E0: lea eax, [ecx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x587B34E3: mov ebp, dword ptr [esi + eax*8 + 0x3e4]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B34EA: add ebp, edi
        __asm _emit 0x03
        __asm _emit 0xEF
        // 0x587B34EC: sub ebx, dword ptr [esi + eax*8 + 0x3e8]
        __asm _emit 0x2B
        __asm _emit 0x9C
        __asm _emit 0xC6
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B34F3: mov edx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B34F7: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B34FB: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B34FF: push edx
        __asm _emit 0x52
        // 0x587B3500: push eax
        __asm _emit 0x50
        // 0x587B3501: push ecx
        __asm _emit 0x51
        // 0x587B3502: lea edx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587B3506: push edx
        __asm _emit 0x52
        // 0x587B3507: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B3509: call 0x587b1ae0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B350E: cmp dword ptr [esi + 0x25c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587B3515: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B351D: jne 0x587b354f
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587B351F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3525: lea eax, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBF
        // 0x587B3528: add eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B352E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B3530: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3536: add eax, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B353A: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3540: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3545: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x587B3548: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587B354B: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B354F: push 0x26c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3554: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3559: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B355C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B3560: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B3562: mov dword ptr [esp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587B3566: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B3568: je 0x587b35a8
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x587B356A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3570: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3576: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B357A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587B357C: push edi
        __asm _emit 0x57
        // 0x587B357D: push edi
        __asm _emit 0x57
        // 0x587B357E: push edi
        __asm _emit 0x57
        // 0x587B357F: push ebx
        __asm _emit 0x53
        // 0x587B3580: push ebp
        __asm _emit 0x55
        // 0x587B3581: push edx
        __asm _emit 0x52
        // 0x587B3582: lea edx, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x587B3586: push edx
        __asm _emit 0x52
        // 0x587B3587: movzx edx, word ptr [esi + 0x24c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B358E: push ecx
        __asm _emit 0x51
        // 0x587B358F: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B3593: push edx
        __asm _emit 0x52
        // 0x587B3594: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B359A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B359C: push ecx
        __asm _emit 0x51
        // 0x587B359D: push edx
        __asm _emit 0x52
        // 0x587B359E: push edi
        __asm _emit 0x57
        // 0x587B359F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B35A1: call 0x588d3a60
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587B35A6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B35A8: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B35AD: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B35B4: mov dword ptr [esp + 0x50], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B35BC: jne 0x587b35d7
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587B35BE: cmp word ptr [eax + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587B35C6: jne 0x587b35d7
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587B35C8: mov eax, dword ptr [eax + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B35CE: push edi
        __asm _emit 0x57
        // 0x587B35CF: lea ecx, [eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x587B35D2: call 0x5873bd60
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B35D7: mov eax, dword ptr [esi + 0x3dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B35DD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B35DF: je 0x587b35f5
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587B35E1: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B35E7: mov edx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B35EB: push ecx
        __asm _emit 0x51
        // 0x587B35EC: push edx
        __asm _emit 0x52
        // 0x587B35ED: push eax
        __asm _emit 0x50
        // 0x587B35EE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B35F0: call 0x588d2b50
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xF5
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587B35F5: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587B35F8: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B35FD: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x587B3601: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B3603: je 0x587b360b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B3605: push edi
        __asm _emit 0x57
        // 0x587B3606: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xF9
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B360B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587B360E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B3610: je 0x587b3618
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B3612: push edi
        __asm _emit 0x57
        // 0x587B3613: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF8
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B3618: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B361E: shr eax, 0x1b
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1B
        // 0x587B3621: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x587B3624: lea ecx, [esi + 0x324]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B362A: jne 0x587b3632
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587B362C: lea ecx, [esi + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3632: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B3634: je 0x587b363e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B3636: mov eax, dword ptr [esi + 0x320]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B363C: jmp 0x587b3644
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587B363E: mov eax, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3644: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x587B3647: push edx
        __asm _emit 0x52
        // 0x587B3648: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B364A: push ecx
        __asm _emit 0x51
        // 0x587B364B: push eax
        __asm _emit 0x50
        // 0x587B364C: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3652: push esi
        __asm _emit 0x56
        // 0x587B3653: push eax
        __asm _emit 0x50
        // 0x587B3654: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3659: mov ecx, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B365F: add ecx, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3665: add ecx, dword ptr [esp + 0x30]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B3669: push ecx
        __asm _emit 0x51
        // 0x587B366A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B366C: call 0x588d3e50
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x07
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587B3671: cmp dword ptr [0x589c904c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x4C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587B3678: je 0x587b3809
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B367E: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3683: push 0x94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3688: cmp dword ptr [esi + 0x25c], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B368E: jne 0x587b3724
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3694: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x95
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3699: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B369C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B36A0: mov dword ptr [esp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587B36A4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B36A6: je 0x587b3701
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x587B36A8: mov ecx, dword ptr [0x58a24684]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B36AE: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B36B5: jle 0x587b36c8
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587B36B7: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B36BE: je 0x587b36c8
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B36C0: mov edi, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B36C6: jmp 0x587b36ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B36C8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B36CA: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B36D0: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B36D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B36D8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B36DA: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B36DF: push ebx
        __asm _emit 0x53
        // 0x587B36E0: push ebp
        __asm _emit 0x55
        // 0x587B36E1: push edi
        __asm _emit 0x57
        // 0x587B36E2: push edx
        __asm _emit 0x52
        // 0x587B36E3: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B36E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B36E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B36EB: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B36EF: push ecx
        __asm _emit 0x51
        // 0x587B36F0: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B36F6: push edx
        __asm _emit 0x52
        // 0x587B36F7: push ecx
        __asm _emit 0x51
        // 0x587B36F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B36FA: call 0x5875ec90
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xB5
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B36FF: jmp 0x587b3703
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B3701: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B3703: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B3705: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B3707: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B3709: mov dword ptr [esp + 0x58], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B3711: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B3713: call 0x5875ec60
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xB5
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B3718: mov dword ptr [esi + 0x68], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B371F: jmp 0x587b37ce
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3724: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x95
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B3729: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B372C: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B3730: mov dword ptr [esp + 0x50], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3738: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B373A: je 0x587b37a5
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x587B373C: mov edx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3742: mov ecx, dword ptr [0x58a24680]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3748: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B374E: jle 0x587b376a
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587B3750: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B3752: jl 0x587b376a
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x587B3754: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B375B: je 0x587b376a
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587B375D: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x587B3760: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3766: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B3768: jmp 0x587b376c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B376A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B376C: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3772: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3778: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B377A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B377C: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3781: push ebx
        __asm _emit 0x53
        // 0x587B3782: push ebp
        __asm _emit 0x55
        // 0x587B3783: push edi
        __asm _emit 0x57
        // 0x587B3784: push edx
        __asm _emit 0x52
        // 0x587B3785: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B3789: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B378B: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x587B378D: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B3791: push ecx
        __asm _emit 0x51
        // 0x587B3792: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3798: push edx
        __asm _emit 0x52
        // 0x587B3799: push ecx
        __asm _emit 0x51
        // 0x587B379A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B379C: call 0x5875ec90
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xB4
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B37A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B37A3: jmp 0x587b37a7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B37A5: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B37A7: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B37AD: cdq
        __asm _emit 0x99
        // 0x587B37AE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B37B0: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B37B2: push eax
        __asm _emit 0x50
        // 0x587B37B3: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B37B9: cdq
        __asm _emit 0x99
        // 0x587B37BA: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B37BC: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B37BE: push eax
        __asm _emit 0x50
        // 0x587B37BF: mov dword ptr [esp + 0x58], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B37C7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B37C9: call 0x5875ec60
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB4
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B37CE: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B37D3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B37D5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xF5
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B37DA: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B37DF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B37E1: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xF4
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B37E6: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587B37E9: mov edx, 0x3e8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B37EE: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x587B37F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B37F4: je 0x587b37fc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B37F6: push edi
        __asm _emit 0x57
        // 0x587B37F7: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF7
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B37FC: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587B37FF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B3801: je 0x587b3809
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B3803: push edi
        __asm _emit 0x57
        // 0x587B3804: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xF6
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B3809: cmp dword ptr [0x589c9050], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587B3810: je 0x587b3990
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3816: cmp dword ptr [esi + 0x25c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587B381D: push 0x94
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3822: jne 0x587b38b4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3828: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x94
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B382D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B3830: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B3834: mov dword ptr [esp + 0x50], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B383C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B383E: je 0x587b38a7
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x587B3840: mov ecx, dword ptr [0x58a2467c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x7C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3846: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B384D: jle 0x587b3860
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x587B384F: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3856: je 0x587b3860
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B3858: mov edi, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B385E: jmp 0x587b3862
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B3860: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B3862: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3868: mov edx, dword ptr [ecx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B386E: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B3872: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B3874: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B3876: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B387B: push ebx
        __asm _emit 0x53
        // 0x587B387C: push ebp
        __asm _emit 0x55
        // 0x587B387D: push edi
        __asm _emit 0x57
        // 0x587B387E: push edx
        __asm _emit 0x52
        // 0x587B387F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B3881: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B3883: lea edx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B3887: push edx
        __asm _emit 0x52
        // 0x587B3888: lea edx, [ecx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x09
        // 0x587B388B: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3891: push edx
        __asm _emit 0x52
        // 0x587B3892: push ecx
        __asm _emit 0x51
        // 0x587B3893: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B3895: call 0x5875ec90
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xB3
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B389A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B389C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B389E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B38A0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B38A2: jmp 0x587b3954
        __asm _emit 0xE9
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38A7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B38A9: push eax
        __asm _emit 0x50
        // 0x587B38AA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B38AC: push eax
        __asm _emit 0x50
        // 0x587B38AD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B38AF: jmp 0x587b3954
        __asm _emit 0xE9
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38B4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x93
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B38B9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B38BC: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B38C0: mov dword ptr [esp + 0x50], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B38CA: je 0x587b3938
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x587B38CC: mov edx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38D2: mov ecx, dword ptr [0x58a24678]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B38D8: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38DE: jle 0x587b38fa
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587B38E0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B38E2: jl 0x587b38fa
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x587B38E4: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38EB: je 0x587b38fa
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587B38ED: shl edx, 6
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x06
        // 0x587B38F0: add edx, dword ptr [ecx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B38F6: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B38F8: jmp 0x587b38fc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B38FA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B38FC: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3902: mov edx, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3908: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B390A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B390C: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3911: push ebx
        __asm _emit 0x53
        // 0x587B3912: push ebp
        __asm _emit 0x55
        // 0x587B3913: push edi
        __asm _emit 0x57
        // 0x587B3914: push edx
        __asm _emit 0x52
        // 0x587B3915: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B3919: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B391B: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x587B391D: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B3921: push ecx
        __asm _emit 0x51
        // 0x587B3922: lea ecx, [edx + edx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x12
        // 0x587B3925: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B392B: push ecx
        __asm _emit 0x51
        // 0x587B392C: push edx
        __asm _emit 0x52
        // 0x587B392D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B392F: call 0x5875ec90
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xB3
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B3934: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B3936: jmp 0x587b393a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587B3938: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587B393A: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3940: cdq
        __asm _emit 0x99
        // 0x587B3941: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B3943: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B3945: push eax
        __asm _emit 0x50
        // 0x587B3946: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B394C: cdq
        __asm _emit 0x99
        // 0x587B394D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B394F: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B3951: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B3953: push eax
        __asm _emit 0x50
        // 0x587B3954: mov dword ptr [esp + 0x58], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B395C: call 0x5875ec60
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xB2
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B3961: push 0x102
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3966: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B3968: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xF3
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B396D: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x587B3970: mov eax, 0x3e9
        __asm _emit 0xB8
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3975: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x587B3979: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B397B: je 0x587b3983
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B397D: push edi
        __asm _emit 0x57
        // 0x587B397E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF5
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B3983: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x587B3986: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B3988: je 0x587b3990
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B398A: push edi
        __asm _emit 0x57
        // 0x587B398B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xF5
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B3990: movzx ecx, word ptr [esi + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3997: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B399B: add dword ptr [esp + 0x24], 0x20
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587B39A0: add dword ptr [esp + 0x28], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x40
        // 0x587B39A5: sub dword ptr [esp + 0x2c], -0x80
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x80
        // 0x587B39AA: add dword ptr [esp + 0x30], 3
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x03
        // 0x587B39AF: inc eax
        __asm _emit 0x40
        // 0x587B39B0: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x07
        // 0x587B39B3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587B39B5: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B39B9: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587B39BB: jb 0x587b3290
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xCF
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B39C1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B39C7: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587B39C9: je 0x587b3a39
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x587B39CB: cmp dword ptr [ecx + 0x606c], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587B39D2: jne 0x587b3a39
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x587B39D4: cmp dword ptr [ecx + 0x1330], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x30
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B39DA: jne 0x587b3a39
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x587B39DC: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B39E2: mov eax, dword ptr [edx + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B39E8: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B39EE: movzx edx, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B39F5: mov ebx, dword ptr [esi + 0x243e4]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B39FB: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587B39FD: cmp dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x587B3A01: je 0x587b3a09
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587B3A03: cmp dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x587B3A07: jne 0x587b3a28
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587B3A09: mov edi, dword ptr [esi + 0x243e8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B3A0F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B3A11: jae 0x587b3a28
        __asm _emit 0x73
        __asm _emit 0x15
        // 0x587B3A13: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587B3A15: jbe 0x587b3a28
        __asm _emit 0x76
        __asm _emit 0x11
        // 0x587B3A17: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587B3A19: jbe 0x587b3a28
        __asm _emit 0x76
        __asm _emit 0x0D
        // 0x587B3A1B: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x587B3A1E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B3A20: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x587B3A22: push eax
        __asm _emit 0x50
        // 0x587B3A23: call 0x588dd370
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x99
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587B3A28: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B3A2D: mov ecx, dword ptr [eax + 0x104f4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B3A33: mov dword ptr [esi + 0x243e4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B3A39: movzx eax, word ptr [esi + 0x224]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3A40: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x07
        // 0x587B3A43: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587B3A47: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B3A4E: pop ecx
        __asm _emit 0x59
        // 0x587B3A4F: pop edi
        __asm _emit 0x5F
        // 0x587B3A50: pop esi
        __asm _emit 0x5E
        // 0x587B3A51: pop ebp
        __asm _emit 0x5D
        // 0x587B3A52: pop ebx
        __asm _emit 0x5B
        // 0x587B3A53: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x587B3A56: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
