// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 510 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876b7f0.

// Ghidra body range 0x5876B7F0..0x5876B9EE; 510 mapped bytes.
extern "C" __declspec(naked) void FUN_5876b7f0_segment_00() {
    __asm {
        // 0x5876B7F0: push esi
        __asm _emit 0x56
        // 0x5876B7F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876B7F3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876B7F7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5876B7F9: je 0x5876b9e8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B7FF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876B803: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B808: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5876B80B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B810: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5876B813: je 0x5876b8d0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B819: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876B81D: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5876B820: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B825: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5876B828: je 0x5876b8d0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B82E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876B832: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5876B835: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B83A: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5876B83D: jne 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B843: cmp dword ptr [esi + 0xb0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B84A: je 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B850: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B856: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876B858: jbe 0x5876b866
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x5876B85A: dec eax
        __asm _emit 0x48
        // 0x5876B85B: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B861: jmp 0x5876b9ca
        __asm _emit 0xE9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B866: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5876B869: mov dword ptr [esi + 0xac], 0x177
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B873: mov dword ptr [esi + 0xb0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B87D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876B87F: jne 0x5876b8b2
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5876B881: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876B887: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876B88D: jne 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B893: cmp dword ptr [esi + 0x7c], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x7C
        __asm _emit 0x01
        // 0x5876B897: jne 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B89D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876B89F: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876B8A2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876B8A4: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876B8A6: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876B8A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876B8AB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876B8AD: jmp 0x5876b9ca
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B8B2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876B8B5: jne 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B8BB: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876B8BD: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5876B8C0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876B8C2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876B8C4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876B8C6: call 0x58762d30
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876B8CB: jmp 0x5876b9ca
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B8D0: mov eax, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5876B8D3: mov ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x5876B8D6: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876B8D8: je 0x5876b904
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5876B8DA: jle 0x5876b8ed
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5876B8DC: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876B8DE: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5876B8E0: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5876B8E3: jg 0x5876b8e8
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5876B8E5: push eax
        __asm _emit 0x50
        // 0x5876B8E6: jmp 0x5876b8fd
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5876B8E8: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5876B8EB: jmp 0x5876b8fc
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5876B8ED: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5876B8EF: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876B8F1: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5876B8F4: jg 0x5876b8f9
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5876B8F6: push eax
        __asm _emit 0x50
        // 0x5876B8F7: jmp 0x5876b8fd
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876B8F9: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x5876B8FC: push ecx
        __asm _emit 0x51
        // 0x5876B8FD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876B8FF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x74
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876B904: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5876B907: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x5876B90A: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876B90C: je 0x5876b938
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5876B90E: jle 0x5876b921
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5876B910: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876B912: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5876B914: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5876B917: jg 0x5876b91c
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5876B919: push eax
        __asm _emit 0x50
        // 0x5876B91A: jmp 0x5876b931
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5876B91C: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5876B91F: jmp 0x5876b930
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5876B921: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5876B923: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876B925: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5876B928: jg 0x5876b92d
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5876B92A: push eax
        __asm _emit 0x50
        // 0x5876B92B: jmp 0x5876b931
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876B92D: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x5876B930: push ecx
        __asm _emit 0x51
        // 0x5876B931: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876B933: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876B938: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5876B93B: cmp eax, dword ptr [esi + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x5876B93E: jne 0x5876b9ca
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B944: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876B947: cmp ecx, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x5876B94A: jne 0x5876b9ca
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x5876B94C: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B950: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B955: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876B958: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B95D: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5876B960: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B964: jne 0x5876b981
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5876B966: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B96B: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876B96E: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B973: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5876B976: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B97A: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5876B97F: jmp 0x5876b9ca
        __asm _emit 0xEB
        __asm _emit 0x49
        // 0x5876B981: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876B984: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B989: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5876B98C: jne 0x5876b9ca
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x5876B98E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B992: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B997: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876B99A: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B99F: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5876B9A2: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B9A6: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B9AB: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876B9AF: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876B9B3: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876B9B7: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876B9BC: and ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5876B9C0: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5876B9C3: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5876B9C6: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5876B9CA: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5876B9CD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5876B9CF: je 0x5876b9e8
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5876B9D1: push edi
        __asm _emit 0x57
        // 0x5876B9D2: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5876B9D5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5876B9D7: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5876B9DA: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5876B9DD: je 0x5876b9ea
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5876B9DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876B9E1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5876B9E3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5876B9E5: jne 0x5876b9d2
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5876B9E7: pop edi
        __asm _emit 0x5F
        // 0x5876B9E8: pop esi
        __asm _emit 0x5E
        // 0x5876B9E9: ret
        __asm _emit 0xC3
        // 0x5876B9EA: pop edi
        __asm _emit 0x5F
        // 0x5876B9EB: pop esi
        __asm _emit 0x5E
        // 0x5876B9EC: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
