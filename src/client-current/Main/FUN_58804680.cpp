// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58804680 .. +0x9D bytes.
// Source symbol alias: FUN_58804680.
extern "C" __declspec(naked) void FUN_58804680() {
    __asm {
        // 0x58804680: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58804682: cmp dword ptr [ecx + 0x2fc], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804688: je 0x58804690
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880468A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880468F: ret
        __asm _emit 0xC3
        // 0x58804690: movzx edx, word ptr [ecx + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58804697: push esi
        __asm _emit 0x56
        // 0x58804698: mov esi, 6
        __asm _emit 0xBE
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880469D: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588046A0: je 0x58804705
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x588046A2: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588046A6: je 0x58804705
        __asm _emit 0x74
        __asm _emit 0x5D
        // 0x588046A8: cmp dx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x588046AC: jne 0x588046b2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588046AE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588046B0: pop esi
        __asm _emit 0x5E
        // 0x588046B1: ret
        __asm _emit 0xC3
        // 0x588046B2: cmp dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x588046B6: jne 0x588046c9
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x588046B8: cmp dword ptr [ecx + 0x2f0], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588046BE: jb 0x5880471b
        __asm _emit 0x72
        __asm _emit 0x5B
        // 0x588046C0: cmp dword ptr [ecx + 0x2f4], 0xe
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0E
        // 0x588046C7: jmp 0x58804714
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x588046C9: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588046CD: jne 0x588046e1
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588046CF: cmp dword ptr [ecx + 0x2f0], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588046D6: jb 0x5880471b
        __asm _emit 0x72
        __asm _emit 0x43
        // 0x588046D8: cmp dword ptr [ecx + 0x2f4], 4
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588046DF: jmp 0x58804714
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x588046E1: cmp dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x588046E5: je 0x58804705
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588046E7: cmp dx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588046EB: jne 0x588046ff
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588046ED: cmp dword ptr [ecx + 0x2f0], 8
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588046F4: jb 0x5880471b
        __asm _emit 0x72
        __asm _emit 0x25
        // 0x588046F6: cmp dword ptr [ecx + 0x2f4], 0x10
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588046FD: jmp 0x58804714
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588046FF: cmp dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x10
        // 0x58804703: jne 0x5880471b
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x58804705: cmp dword ptr [ecx + 0x2f0], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880470B: jb 0x5880471b
        __asm _emit 0x72
        __asm _emit 0x0E
        // 0x5880470D: cmp dword ptr [ecx + 0x2f4], 0x14
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x58804714: jb 0x5880471b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58804716: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880471B: pop esi
        __asm _emit 0x5E
        // 0x5880471C: ret
        __asm _emit 0xC3
    }
}
