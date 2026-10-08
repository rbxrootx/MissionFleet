// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 747 bytes in 2 exact ranges.
// Source symbol alias: FUN_5889b930.

// Ghidra body range 0x5889B930..0x5889B9ED; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b930_segment_00() {
    __asm {
        // 0x5889B930: push ebp
        __asm _emit 0x55
        // 0x5889B931: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5889B933: movzx eax, byte ptr [ebp + 0xb75]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B93A: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x5889B93D: ja 0x5889bc1c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xD9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B943: push ebx
        __asm _emit 0x53
        // 0x5889B944: push esi
        __asm _emit 0x56
        // 0x5889B945: push edi
        __asm _emit 0x57
        // 0x5889B946: jmp dword ptr [eax*4 + 0x5889bc20]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xBC
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889B94D: mov ebx, 0xfffff593
        __asm _emit 0xBB
        __asm _emit 0x93
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B952: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B958: mov edi, 0x1c0
        __asm _emit 0xBF
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B95D: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B95F: nop
        __asm _emit 0x90
        // 0x5889B960: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B963: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B966: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B96C: jle 0x5889b980
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B96E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889B970: jl 0x5889b980
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889B972: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B978: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B97A: je 0x5889b980
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889B97C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889B97E: jmp 0x5889b982
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889B980: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B982: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B984: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889B987: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B989: je 0x5889b9b3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889B98B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889B98E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889B991: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889B994: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889B997: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889B99A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B99C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889B99F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889B9A1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889B9A4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889B9A7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889B9AA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889B9AD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889B9B0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889B9B3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889B9B5: push 0x3a
        __asm _emit 0x6A
        __asm _emit 0x3A
        // 0x5889B9B7: push 0x203
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9BC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889B9C1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889B9C3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889B9C8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9CE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889B9D1: cmp edi, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9D7: jl 0x5889b960
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889B9D9: mov ebx, 0xfffff69c
        __asm _emit 0xBB
        __asm _emit 0x9C
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889B9DE: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9E4: mov edi, 0x400
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9E9: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889B9EB: jmp 0x5889b9f0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5889B9F0..0x5889BC1E; 558 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b930_segment_01() {
    __asm {
        // 0x5889B9F0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889B9F3: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889B9F6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B9FC: jle 0x5889ba10
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889B9FE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BA00: jl 0x5889ba10
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BA02: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA08: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BA0A: je 0x5889ba10
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BA0C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BA0E: jmp 0x5889ba12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BA10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BA12: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BA14: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BA17: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BA19: je 0x5889ba43
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BA1B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BA1E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BA21: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BA24: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BA27: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BA2A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BA2C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BA2F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BA31: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BA34: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BA37: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BA3A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BA3D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BA40: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BA43: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BA45: push 0x3a
        __asm _emit 0x6A
        __asm _emit 0x3A
        // 0x5889BA47: push 0xd5
        __asm _emit 0x68
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA4C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BA51: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BA53: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BA58: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA5E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BA61: cmp edi, 0x600
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA67: jl 0x5889b9f0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BA69: pop edi
        __asm _emit 0x5F
        // 0x5889BA6A: pop esi
        __asm _emit 0x5E
        // 0x5889BA6B: pop ebx
        __asm _emit 0x5B
        // 0x5889BA6C: pop ebp
        __asm _emit 0x5D
        // 0x5889BA6D: ret
        __asm _emit 0xC3
        // 0x5889BA6E: mov ebx, 0xfffff69d
        __asm _emit 0xBB
        __asm _emit 0x9D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BA73: lea esi, [ebp + 0x974]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA79: mov edi, 0x440
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA7E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BA80: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BA83: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BA86: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA8C: jle 0x5889baa0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BA8E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BA90: jl 0x5889baa0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BA92: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BA98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BA9A: je 0x5889baa0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BA9C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BA9E: jmp 0x5889baa2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BAA0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BAA2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BAA4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BAA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BAA9: je 0x5889bad3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BAAB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BAAE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BAB1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BAB4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BAB7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BABA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BABC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BABF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BAC1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BAC4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BAC7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BACA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BACD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BAD0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BAD3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BAD5: push 0x6c
        __asm _emit 0x6A
        __asm _emit 0x6C
        // 0x5889BAD7: push 0x2a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BADC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BAE1: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BAE3: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BAE8: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BAEE: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BAF1: cmp edi, 0x640
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BAF7: jl 0x5889ba80
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BAF9: pop edi
        __asm _emit 0x5F
        // 0x5889BAFA: pop esi
        __asm _emit 0x5E
        // 0x5889BAFB: pop ebx
        __asm _emit 0x5B
        // 0x5889BAFC: pop ebp
        __asm _emit 0x5D
        // 0x5889BAFD: ret
        __asm _emit 0xC3
        // 0x5889BAFE: mov ebx, 0xfffff595
        __asm _emit 0xBB
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BB03: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB09: mov edi, 0x240
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB0E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BB10: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BB13: lea ecx, [ebx + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x33
        // 0x5889BB16: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB1C: jle 0x5889bb30
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BB1E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BB20: jl 0x5889bb30
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BB22: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB28: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BB2A: je 0x5889bb30
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BB2C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BB2E: jmp 0x5889bb32
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BB30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BB32: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BB34: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BB37: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BB39: je 0x5889bb63
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BB3B: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BB3E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BB41: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BB44: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BB47: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BB4A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BB4C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BB4F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BB51: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BB54: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BB57: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BB5A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BB5D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BB60: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BB63: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BB65: push 0x1a
        __asm _emit 0x6A
        __asm _emit 0x1A
        // 0x5889BB67: push 0x2d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB6C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BB71: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BB73: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BB78: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB7E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BB81: cmp edi, 0x440
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB87: jl 0x5889bb10
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BB89: pop edi
        __asm _emit 0x5F
        // 0x5889BB8A: pop esi
        __asm _emit 0x5E
        // 0x5889BB8B: pop ebx
        __asm _emit 0x5B
        // 0x5889BB8C: pop ebp
        __asm _emit 0x5D
        // 0x5889BB8D: ret
        __asm _emit 0xC3
        // 0x5889BB8E: mov ebx, 0xfffff595
        __asm _emit 0xBB
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889BB93: lea esi, [ebp + 0xa74]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB99: mov edi, 0x240
        __asm _emit 0xBF
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BB9E: sub ebx, ebp
        __asm _emit 0x2B
        __asm _emit 0xDD
        // 0x5889BBA0: mov eax, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x5889BBA3: lea ecx, [esi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x5889BBA6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BBAC: jle 0x5889bbc0
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5889BBAE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889BBB0: jl 0x5889bbc0
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x5889BBB2: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BBB8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BBBA: je 0x5889bbc0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5889BBBC: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5889BBBE: jmp 0x5889bbc2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889BBC0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889BBC2: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BBC4: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5889BBC7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889BBC9: je 0x5889bbf3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889BBCB: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5889BBCE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5889BBD1: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5889BBD4: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5889BBD7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5889BBDA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889BBDC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5889BBDF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5889BBE1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5889BBE4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5889BBE7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5889BBEA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5889BBED: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5889BBF0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5889BBF3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5889BBF5: push 0x1a
        __asm _emit 0x6A
        __asm _emit 0x1A
        // 0x5889BBF7: push 0x2d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BBFC: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889BC01: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5889BC03: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5889BC08: add edi, 0x100
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC0E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5889BC11: cmp edi, 0x440
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889BC17: jl 0x5889bba0
        __asm _emit 0x7C
        __asm _emit 0x87
        // 0x5889BC19: pop edi
        __asm _emit 0x5F
        // 0x5889BC1A: pop esi
        __asm _emit 0x5E
        // 0x5889BC1B: pop ebx
        __asm _emit 0x5B
        // 0x5889BC1C: pop ebp
        __asm _emit 0x5D
        // 0x5889BC1D: ret
        __asm _emit 0xC3
    }
}
