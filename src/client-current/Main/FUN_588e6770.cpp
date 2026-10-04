// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E6770 .. +0x51 bytes.
// Source symbol alias: FUN_588e6770.
extern "C" __declspec(naked) void FUN_588e6770() {
    __asm {
        // 0x588E6770: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6774: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x588E6777: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E6779: je 0x588e67b9
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588E677B: mov ecx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6781: movzx ecx, byte ptr [ecx + 0x35c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6788: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x588E678B: ja 0x588e67b9
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x588E678D: movzx edx, byte ptr [ecx + 0x588e67d0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0xD0
        __asm _emit 0x67
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E6794: jmp dword ptr [edx*4 + 0x588e67c4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0x67
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x588E679B: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E679E: je 0x588e67a5
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588E67A0: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588E67A3: jne 0x588e67b9
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x588E67A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E67A7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E67AA: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E67AD: jne 0x588e67b9
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588E67AF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E67B1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E67B4: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588E67B7: jne 0x588e67a0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588E67B9: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E67BE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
