// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 137 bytes in 2 exact ranges.
// Source symbol alias: FUN_587da9a0.

// Ghidra body range 0x587DA9A0..0x587DA9C9; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_587da9a0_segment_00() {
    __asm {
        // 0x587DA9A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587DA9A4: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA9AA: push eax
        __asm _emit 0x50
        // 0x587DA9AB: call 0x588f4290
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587DA9B0: cmp dword ptr [0x589cc01c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x1C
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587DA9B7: je 0x587daa10
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x587DA9B9: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA9BF: push esi
        __asm _emit 0x56
        // 0x587DA9C0: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x587DA9C3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA9C5: je 0x587da9f5
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587DA9C7: jmp 0x587da9d0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587DA9D0..0x587DAA30; 96 mapped bytes.
extern "C" __declspec(naked) void FUN_587da9a0_segment_01() {
    __asm {
        // 0x587DA9D0: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587DA9D3: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x5E
        // 0x587DA9D7: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587DA9DB: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x587DA9DD: cmp al, 0xc
        __asm _emit 0x3C
        __asm _emit 0x0C
        // 0x587DA9DF: jb 0x587da9ee
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x587DA9E1: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA9E7: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x587DA9E9: call 0x587cf690
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DA9EE: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587DA9F1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587DA9F3: jne 0x587da9d0
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x587DA9F5: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DA9FB: mov dword ptr [ecx + 0xae0], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA05: mov dword ptr [0x589cc01c], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x1C
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA0F: pop esi
        __asm _emit 0x5E
        // 0x587DAA10: mov edx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAA16: movzx eax, word ptr [edx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA1D: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAA23: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAA25: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAA27: push eax
        __asm _emit 0x50
        // 0x587DAA28: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xE6
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587DAA2D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
