// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2076 bytes in 1 exact ranges.
// Source symbol alias: FUN_587f7530.

// Ghidra body range 0x587F7530..0x587F7D4C; 2076 mapped bytes.
extern "C" __declspec(naked) void FUN_587f7530_segment_00() {
    __asm {
        // 0x587F7530: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587F7534: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587F7537: add eax, -9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF7
        // 0x587F753A: push esi
        __asm _emit 0x56
        // 0x587F753B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F753D: cmp eax, 0x72
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x72
        // 0x587F7540: ja 0x587f7d30
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xEA
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7546: movzx ecx, byte ptr [eax + 0x587f7d90]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x7D
        __asm _emit 0x7F
        __asm _emit 0x58
        // 0x587F754D: push ebx
        __asm _emit 0x53
        // 0x587F754E: push ebp
        __asm _emit 0x55
        // 0x587F754F: push edi
        __asm _emit 0x57
        // 0x587F7550: jmp dword ptr [ecx*4 + 0x587f7d4c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x7D
        __asm _emit 0x7F
        __asm _emit 0x58
        // 0x587F7557: cmp dword ptr [esi + 0x218ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F755E: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7564: mov edx, dword ptr [esi + 0x218f0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F756A: cmp dword ptr [edx + 0x128], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7571: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7577: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F757E: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587F7582: je 0x587f759a
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587F7584: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587F7588: je 0x587f759a
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587F758A: mov ecx, dword ptr [esi + 0x218f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7590: call 0x588b3180
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F7595: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F759A: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F759F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F75A2: cmp byte ptr [ecx + 0x354], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75A9: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75AF: mov ecx, dword ptr [esi + 0x218f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F75B5: call 0x588b3180
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F75BA: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x6E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75BF: cmp dword ptr [esi + 0x218ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75C6: je 0x587f7623
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x587F75C8: mov edx, dword ptr [esi + 0x218f4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F75CE: cmp dword ptr [edx + 0x128], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75D5: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75DB: movzx eax, word ptr [esi + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F75E2: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587F75E6: je 0x587f75fe
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587F75E8: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587F75EC: je 0x587f75fe
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587F75EE: mov ecx, dword ptr [esi + 0x218f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F75F4: call 0x588b3180
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F75F9: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x2F
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F75FE: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7603: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F7606: cmp byte ptr [ecx + 0x354], 1
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587F760D: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7613: mov ecx, dword ptr [esi + 0x218f0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7619: call 0x588b3180
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F761E: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7623: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F762A: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7630: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7636: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F763B: cmp dword ptr [esi + 0x20d24], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7641: jne 0x587f76aa
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x587F7643: push 0x5899c504
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7648: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F764A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F764D: push eax
        __asm _emit 0x50
        // 0x587F764E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F7650: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xB4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7655: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F765A: mov dword ptr [esi + 0x20d24], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7664: mov word ptr [esi + 0x20d20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F766B: mov dword ptr [esi + 0x21ce4], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7675: mov dword ptr [esi + 0x21ce8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F767B: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7680: mov ebx, dword ptr [eax + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7686: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F768B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F768D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F7690: push eax
        __asm _emit 0x50
        // 0x587F7691: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F7693: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F7698: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F769E: mov dword ptr [ecx + 0xb8], 2
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F76A8: jmp 0x587f771a
        __asm _emit 0xEB
        __asm _emit 0x70
        // 0x587F76AA: push 0x5899c528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F76AF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F76B1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F76B4: push eax
        __asm _emit 0x50
        // 0x587F76B5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F76B7: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F76BC: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F76C2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F76C5: movzx cx, byte ptr [eax + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F76CD: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x587F76D0: mov dword ptr [esi + 0x20d24], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F76D6: mov word ptr [esi + 0x20d20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F76DD: mov dword ptr [esi + 0x21ce4], 3
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F76E7: mov dword ptr [esi + 0x21ce8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F76ED: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F76F3: mov ebx, dword ptr [edx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x9A
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F76F9: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F76FE: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F7700: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F7703: push eax
        __asm _emit 0x50
        // 0x587F7704: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F7706: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x93
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F770B: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7710: mov dword ptr [eax + 0xb8], 3
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F771A: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7720: push ebp
        __asm _emit 0x55
        // 0x587F7721: call 0x5888cdf0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F7726: cmp dword ptr [esi + 0x20d40], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F772D: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7733: mov eax, dword ptr [esi + 0x21ce4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7739: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587F773B: je 0x587f7795
        __asm _emit 0x74
        __asm _emit 0x58
        // 0x587F773D: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587F773F: je 0x587f7750
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587F7741: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x587F7743: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7749: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F774E: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x587F7750: mov eax, dword ptr [esi + 0x21ce8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7756: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587F7758: jne 0x587f7761
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F775A: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F775F: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x587F7761: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587F7764: jne 0x587f776d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F7766: push 0x5899c8c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F776B: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x587F776D: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587F7770: jne 0x587f7779
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F7772: push 0x5899c8a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7777: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x587F7779: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587F777C: jne 0x587f7785
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587F777E: push 0x5899c87c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7783: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587F7785: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587F7788: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9F
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F778E: push 0x5899c858
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7793: jmp 0x587f779a
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587F7795: push 0x5899c838
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F779A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F779C: mov ecx, dword ptr [esi + 0x21d24]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F77A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F77A5: push eax
        __asm _emit 0x50
        // 0x587F77A6: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xA5
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x587F77AB: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x7D
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77B0: cmp dword ptr [esi + 0x218ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77B7: je 0x587f77d6
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587F77B9: mov ecx, dword ptr [esi + 0x218f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F77BF: cmp dword ptr [ecx + 0x128], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77C6: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77CC: call 0x588b3180
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xB9
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587F77D1: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77D6: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77DD: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77E3: cmp dword ptr [esi + 0x37c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F77EA: jne 0x587f7811
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x587F77EC: push 0x5899c808
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xC8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F77F1: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F77F7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F77FA: push eax
        __asm _emit 0x50
        // 0x587F77FB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F77FD: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7802: mov dword ptr [esi + 0x37c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F780C: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7811: push 0x5899c7d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7816: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F781C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F781F: push eax
        __asm _emit 0x50
        // 0x587F7820: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F7822: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xB2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7827: mov dword ptr [esi + 0x37c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7831: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xF7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7836: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F783D: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7843: mov eax, dword ptr [esi + 0x20e20]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7849: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587F784C: jne 0x587f7866
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587F784E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F7850: mov dword ptr [esi + 0x20e20], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7856: mov dword ptr [esi + 0x20e24], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F785C: push 0x5899c7b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7861: jmp 0x587f7997
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7866: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F786B: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587F786D: jne 0x587f7883
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587F786F: mov dword ptr [esi + 0x20e20], 2
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7879: push 0x5899c788
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F787E: jmp 0x587f7997
        __asm _emit 0xE9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7883: mov dword ptr [esi + 0x20e20], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7889: push 0x5899c764
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F788E: jmp 0x587f7997
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7893: cmp dword ptr [esi + 0x218ec], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F789A: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F78A0: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F78A7: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F78AD: cmp dword ptr [esi + 0x20e3c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F78B4: mov ecx, dword ptr [esi + 0x20e38]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F78BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F78BC: jne 0x587f78c3
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587F78BE: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F78C1: jmp 0x587f78c6
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587F78C3: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587F78C6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587F78C8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F78CA: cmp dword ptr [esi + 0x20e3c], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F78D0: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x587F78D3: mov dword ptr [esi + 0x20e3c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F78D9: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F78DE: mov edx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F78E4: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587F78E8: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F78EE: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x587F78F2: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587F78F4: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x587F78F6: jne 0x587f7904
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587F78F8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F78FA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F78FD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587F78FF: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7904: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587F7908: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x587F790C: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587F790F: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587F7912: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7918: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F791E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587F7920: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587F7923: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587F7925: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F792A: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F792F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587F7933: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587F7937: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587F793A: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587F793D: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7943: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7949: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F794B: cmp dword ptr [0x58a248dc], edx
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7951: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587F7954: mov dword ptr [0x58a248dc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F795A: call 0x588545c0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xCC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x587F795F: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7964: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7969: cmp dword ptr [esi + 0x20e2c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F796F: jne 0x587f7982
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587F7971: mov dword ptr [esi + 0x20e2c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F797B: push 0x5899c744
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7980: jmp 0x587f7997
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587F7982: mov dword ptr [esi + 0x20e2c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7988: mov dword ptr [esi + 0x10528], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7992: push 0x5899c724
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xC7
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7997: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F799D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F79A0: push eax
        __asm _emit 0x50
        // 0x587F79A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F79A3: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xB0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F79A8: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F79AD: cmp dword ptr [esi + 0x218e0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F79B4: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F79BA: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F79BF: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587F79C3: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x587F79C7: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587F79CA: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587F79CD: je 0x587f79ef
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587F79CF: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F79D5: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587F79D9: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x587F79DD: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587F79DF: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587F79E1: je 0x587f79ef
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587F79E3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F79E5: call 0x587e63f0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xEA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587F79EA: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x3E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F79EF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F79F1: call 0x587e6450
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xEA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587F79F6: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F79FB: cmp dword ptr [esi + 0x10534], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A02: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A08: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A0E: mov eax, dword ptr [esi + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A14: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x587F7A17: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587F7A19: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x587F7A1C: jle 0x587f7a29
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587F7A1E: sub dword ptr [esi + 0x10530], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A24: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A29: mov dword ptr [esi + 0x10530], 0x20
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A33: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A38: cmp dword ptr [esi + 0x10534], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A3F: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A45: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A4B: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A51: imul eax, dword ptr [ecx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A58: sub eax, dword ptr [ecx + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587F7A5B: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x587F7A5E: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x587F7A61: mov edi, dword ptr [esi + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A67: lea eax, [eax + edx - 0x320]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7A6E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F7A70: jle 0x587f7a7d
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587F7A72: add dword ptr [esi + 0x10530], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A78: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A7D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587F7A7F: sub eax, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x587F7A82: mov ebx, dword ptr [esi + 0x10530]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7A88: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A8E: cdq
        __asm _emit 0x99
        // 0x587F7A8F: idiv dword ptr [ecx + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A95: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7A9B: imul edx, dword ptr [ecx + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AA2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F7AA4: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587F7AA6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F7AA8: jle 0x587f7aac
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587F7AAA: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F7AAC: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587F7AAE: mov dword ptr [esi + 0x10530], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7AB4: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AB9: cmp dword ptr [esi + 0x10534], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AC0: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AC6: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7ACC: mov eax, dword ptr [esi + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7AD2: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587F7AD5: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587F7AD7: cmp edx, 0x46
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x46
        // 0x587F7ADA: jle 0x587f7ae7
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587F7ADC: sub dword ptr [esi + 0x1052c], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7AE2: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AE7: mov dword ptr [esi + 0x1052c], 0x46
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AF1: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AF6: cmp dword ptr [esi + 0x10534], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7AFD: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B03: mov ecx, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B09: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B0F: imul eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B16: sub eax, dword ptr [ecx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587F7B19: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x587F7B1C: sub eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x587F7B1F: mov edi, dword ptr [esi + 0x104cc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B25: lea eax, [eax + edx - 0x44c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xB4
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7B2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F7B2E: jle 0x587f7b3b
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587F7B30: add dword ptr [esi + 0x1052c], edi
        __asm _emit 0x01
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B36: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B3B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587F7B3D: sub eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x587F7B40: mov ebx, dword ptr [esi + 0x1052c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B46: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B4C: cdq
        __asm _emit 0x99
        // 0x587F7B4D: idiv dword ptr [ecx + 0x114]
        __asm _emit 0xF7
        __asm _emit 0xB9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B53: mov edx, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B59: imul edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B60: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587F7B62: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x587F7B64: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F7B66: jle 0x587f7b6a
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587F7B68: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587F7B6A: add ebx, eax
        __asm _emit 0x03
        __asm _emit 0xD8
        // 0x587F7B6C: mov dword ptr [esi + 0x1052c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B72: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B77: mov eax, dword ptr [esi + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7B7D: test eax, 0x200
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B82: je 0x587f7b9d
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587F7B84: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F7B86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F7B88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F7B8A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F7B8C: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x3F
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F7B91: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F7B93: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x29
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F7B98: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7B9D: and eax, 0xf0000000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        // 0x587F7BA2: cmp eax, 0x10000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x587F7BA7: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7BAD: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7BB2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F7BB5: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xEB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587F7BBA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F7BBC: je 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7BC2: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7BC8: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587F7BCB: mov eax, dword ptr [edx + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7BD1: mov eax, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x587F7BD4: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587F7BD9: cdq
        __asm _emit 0x99
        // 0x587F7BDA: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587F7BDC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F7BDE: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x587F7BE1: jge 0x587f7c8d
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7BE7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F7BE9: call 0x587e9310
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F7BEE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F7BF0: jne 0x587f7c14
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587F7BF2: cmp dword ptr [esi + 0x20d5c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7BF8: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7BFE: push eax
        __asm _emit 0x50
        // 0x587F7BFF: push eax
        __asm _emit 0x50
        // 0x587F7C00: push eax
        __asm _emit 0x50
        // 0x587F7C01: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x587F7C03: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F7C08: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587F7C0A: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x29
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587F7C0F: jmp 0x587f7d2d
        __asm _emit 0xE9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C14: cmp dword ptr [esi + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C1B: jne 0x587f7d2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C21: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7C26: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C2B: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C31: jle 0x587f7c47
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587F7C33: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C3A: je 0x587f7c47
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F7C3C: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C42: mov ecx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x14
        // 0x587F7C45: jmp 0x587f7c49
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F7C47: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F7C49: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7C4F: push edx
        __asm _emit 0x52
        // 0x587F7C50: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFD
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587F7C55: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7C5A: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C60: jle 0x587f7c76
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587F7C62: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C69: je 0x587f7c76
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F7C6B: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C71: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587F7C74: jmp 0x587f7c78
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F7C76: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F7C78: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F7C7A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F7C7D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F7C7F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587F7C81: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587F7C86: push 0x5899c6fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7C8B: jmp 0x587f7cf7
        __asm _emit 0xEB
        __asm _emit 0x6A
        // 0x587F7C8D: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7C92: mov edi, 5
        __asm _emit 0xBF
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C97: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7C9D: jle 0x587f7cb3
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587F7C9F: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7CA6: je 0x587f7cb3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F7CA8: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7CAE: mov ecx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x14
        // 0x587F7CB1: jmp 0x587f7cb5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F7CB3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F7CB5: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7CBB: push edx
        __asm _emit 0x52
        // 0x587F7CBC: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xFC
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587F7CC1: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xA1
        __asm _emit 0xF0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F7CC6: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7CCC: jle 0x587f7ce2
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587F7CCE: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7CD5: je 0x587f7ce2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F7CD7: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7CDD: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587F7CE0: jmp 0x587f7ce4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587F7CE2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587F7CE4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587F7CE6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F7CE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F7CEB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587F7CED: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x587F7CF2: push 0x5899c6d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xC6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F7CF7: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F7CFD: mov ecx, dword ptr [esi + 0x20d38]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7D03: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F7D06: push eax
        __asm _emit 0x50
        // 0x587F7D07: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F7D0C: jmp 0x587f7d2d
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587F7D0E: mov dword ptr [esi + 0x21d2c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F7D18: jmp 0x587f7d2d
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x587F7D1A: cmp dword ptr [esi + 0x21d2c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587F7D21: jne 0x587f7d2d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587F7D23: xor dword ptr [0x58a2450c], 0x10000
        __asm _emit 0x81
        __asm _emit 0x35
        __asm _emit 0x0C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F7D2D: pop edi
        __asm _emit 0x5F
        // 0x587F7D2E: pop ebp
        __asm _emit 0x5D
        // 0x587F7D2F: pop ebx
        __asm _emit 0x5B
        // 0x587F7D30: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587F7D34: cmp dword ptr [ecx + 8], 0x10
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x10
        // 0x587F7D38: je 0x587f7d48
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587F7D3A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F7D3C: mov dword ptr [esi + 0x218ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7D42: mov dword ptr [esi + 0x21d2c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x1D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F7D48: pop esi
        __asm _emit 0x5E
        // 0x587F7D49: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
