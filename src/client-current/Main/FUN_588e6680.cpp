// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E6680 .. +0xC1 bytes.
// Source symbol alias: FUN_588e6680.
extern "C" __declspec(naked) void FUN_588e6680() {
    __asm {
        // 0x588E6680: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6686: movzx ecx, byte ptr [eax + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E668D: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6691: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588E6693: jne 0x588e669a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588E6695: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E6697: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E669A: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588E669D: ja 0x588e6739
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E66A3: jmp dword ptr [ecx*4 + 0x588e6744]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x67
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E66AA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E66AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E66B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E66B4: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588E66B6: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E66B9: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588E66BB: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E66BE: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588E66C0: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588E66C3: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588E66C5: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588E66C8: jne 0x588e6739
        __asm _emit 0x75
        __asm _emit 0x6F
        // 0x588E66CA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E66CF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E66D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E66D4: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xF4
        // 0x588E66D6: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E66D9: jmp 0x588e66b9
        __asm _emit 0xEB
        __asm _emit 0xDE
        // 0x588E66DB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E66DD: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x588E66DF: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588E66E2: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xE6
        // 0x588E66E4: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E66E7: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xE1
        // 0x588E66E9: cmp eax, 7
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x07
        // 0x588E66EC: jmp 0x588e66c8
        __asm _emit 0xEB
        __asm _emit 0xDA
        // 0x588E66EE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E66F0: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xD8
        // 0x588E66F2: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588E66F5: jmp 0x588e66e2
        __asm _emit 0xEB
        __asm _emit 0xEB
        // 0x588E66F7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E66F9: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xCF
        // 0x588E66FB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E66FE: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xCA
        // 0x588E6700: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E6703: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xC5
        // 0x588E6705: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E6708: jmp 0x588e66c3
        __asm _emit 0xEB
        __asm _emit 0xB9
        // 0x588E670A: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588E670D: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xBB
        // 0x588E670F: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588E6712: je 0x588e66ca
        __asm _emit 0x74
        __asm _emit 0xB6
        // 0x588E6714: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E6717: jmp 0x588e66c8
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x588E6719: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E671B: je 0x588e66aa
        __asm _emit 0x74
        __asm _emit 0x8D
        // 0x588E671D: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E6720: je 0x588e66aa
        __asm _emit 0x74
        __asm _emit 0x88
        // 0x588E6722: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E6725: je 0x588e66aa
        __asm _emit 0x74
        __asm _emit 0x83
        // 0x588E6727: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588E672A: je 0x588e66aa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6730: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E6733: je 0x588e66aa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E6739: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E673E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
