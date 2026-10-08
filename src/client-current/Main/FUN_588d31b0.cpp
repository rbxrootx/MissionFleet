// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 480 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d31b0.

// Ghidra body range 0x588D31B0..0x588D3390; 480 mapped bytes.
extern "C" __declspec(naked) void FUN_588d31b0_segment_00() {
    __asm {
        // 0x588D31B0: push ebx
        __asm _emit 0x53
        // 0x588D31B1: push ebp
        __asm _emit 0x55
        // 0x588D31B2: push esi
        __asm _emit 0x56
        // 0x588D31B3: push edi
        __asm _emit 0x57
        // 0x588D31B4: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588D31B6: mov ecx, dword ptr [0x58a244bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D31BC: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588D31BE: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x588D31C1: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588D31C4: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D31C9: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D31CB: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D31CF: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D31D2: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588D31D4: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x588D31D7: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x588D31D9: cdq
        __asm _emit 0x99
        // 0x588D31DA: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x588D31DC: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D31E0: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D31E5: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D31E9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D31EE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588D31F0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D31F4: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D31F7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588D31F9: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x588D31FC: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588D31FE: cdq
        __asm _emit 0x99
        // 0x588D31FF: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588D3201: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3205: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D320A: cmp dword ptr [eax + 0x218c4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3211: jne 0x588d3221
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588D3213: cmp word ptr [eax + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x588D321B: jne 0x588d32bc
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3221: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3227: mov esi, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x588D322A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D322C: je 0x588d32bc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3232: cmp dword ptr [esi + 0x63b8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3239: je 0x588d32b1
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x588D323B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D323D: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3242: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D3247: jne 0x588d32b1
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x588D3249: mov eax, dword ptr [edi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D324F: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D3251: je 0x588d32b1
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x588D3253: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D3259: cmp dword ptr [ecx + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3260: jne 0x588d328e
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588D3262: cmp word ptr [ecx + 0x105f0], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D3269: jne 0x588d328e
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588D326B: cmp dword ptr [eax + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3272: je 0x588d328e
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588D3274: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D327B: je 0x588d328e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D327D: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D3283: push esi
        __asm _emit 0x56
        // 0x588D3284: push eax
        __asm _emit 0x50
        // 0x588D3285: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x26
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588D328A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588D328C: jne 0x588d32b1
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588D328E: cmp word ptr [esi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3295: jae 0x588d32b1
        __asm _emit 0x73
        __asm _emit 0x1A
        // 0x588D3297: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D329B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D329F: push ebp
        __asm _emit 0x55
        // 0x588D32A0: push eax
        __asm _emit 0x50
        // 0x588D32A1: push ecx
        __asm _emit 0x51
        // 0x588D32A2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D32A4: call 0x588d6960
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32A9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D32AB: jne 0x588d3352
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32B1: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x588D32B4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D32B6: jne 0x588d3232
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D32BC: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D32C1: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x588D32C4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D32C6: je 0x588d3349
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32CC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D32D0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D32D2: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32D7: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D32DC: jne 0x588d3342
        __asm _emit 0x75
        __asm _emit 0x64
        // 0x588D32DE: mov eax, dword ptr [edi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32E4: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D32E6: je 0x588d3342
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588D32E8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D32EE: cmp dword ptr [ecx + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D32F5: jne 0x588d3323
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x588D32F7: cmp word ptr [ecx + 0x105f0], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D32FE: jne 0x588d3323
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588D3300: cmp dword ptr [eax + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3307: je 0x588d3323
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588D3309: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3310: je 0x588d3323
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D3312: mov ecx, dword ptr [ecx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588D3318: push esi
        __asm _emit 0x56
        // 0x588D3319: push eax
        __asm _emit 0x50
        // 0x588D331A: call 0x58775980
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x26
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588D331F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588D3321: jne 0x588d3342
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588D3323: cmp word ptr [esi + 0x164], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D332A: jae 0x588d3342
        __asm _emit 0x73
        __asm _emit 0x16
        // 0x588D332C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D3330: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D3334: push ebp
        __asm _emit 0x55
        // 0x588D3335: push ecx
        __asm _emit 0x51
        // 0x588D3336: push edx
        __asm _emit 0x52
        // 0x588D3337: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D3339: call 0x588d6960
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D333E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D3340: jne 0x588d3371
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x588D3342: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x588D3345: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588D3347: jne 0x588d32d0
        __asm _emit 0x75
        __asm _emit 0x87
        // 0x588D3349: pop edi
        __asm _emit 0x5F
        // 0x588D334A: pop esi
        __asm _emit 0x5E
        // 0x588D334B: pop ebp
        __asm _emit 0x5D
        // 0x588D334C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D334E: pop ebx
        __asm _emit 0x5B
        // 0x588D334F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588D3352: mov dword ptr [edi + 0x200], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3358: movzx edx, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D335F: mov dword ptr [edi + 0x1e4], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3365: pop edi
        __asm _emit 0x5F
        // 0x588D3366: pop esi
        __asm _emit 0x5E
        // 0x588D3367: pop ebp
        __asm _emit 0x5D
        // 0x588D3368: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D336D: pop ebx
        __asm _emit 0x5B
        // 0x588D336E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588D3371: mov dword ptr [edi + 0x200], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3377: movzx eax, word ptr [esi + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D337E: mov dword ptr [edi + 0x1e4], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D3384: pop edi
        __asm _emit 0x5F
        // 0x588D3385: pop esi
        __asm _emit 0x5E
        // 0x588D3386: pop ebp
        __asm _emit 0x5D
        // 0x588D3387: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D338C: pop ebx
        __asm _emit 0x5B
        // 0x588D338D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
