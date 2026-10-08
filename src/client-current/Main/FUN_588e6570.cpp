// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 82 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e6570.

// Ghidra body range 0x588E6570..0x588E65C2; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_588e6570_segment_00() {
    __asm {
        // 0x588E6570: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6576: movzx eax, word ptr [eax + 0x35e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E657D: cmp eax, 0x139f
        __asm _emit 0x3D
        __asm _emit 0x9F
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6582: jg 0x588e65a4
        __asm _emit 0x7F
        __asm _emit 0x20
        // 0x588E6584: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x588E6586: cmp eax, 0xbd2
        __asm _emit 0x3D
        __asm _emit 0xD2
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E658B: jg 0x588e659d
        __asm _emit 0x7F
        __asm _emit 0x10
        // 0x588E658D: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588E658F: cmp eax, 0x403
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6594: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588E6596: cmp eax, 0x7d8
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E659B: jmp 0x588e65b7
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588E659D: cmp eax, 0xfb1
        __asm _emit 0x3D
        __asm _emit 0xB1
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65A2: jmp 0x588e65b7
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588E65A4: cmp eax, 0x1787
        __asm _emit 0x3D
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65A9: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588E65AB: cmp eax, 0x1b71
        __asm _emit 0x3D
        __asm _emit 0x71
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65B0: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588E65B2: cmp eax, 0x1f58
        __asm _emit 0x3D
        __asm _emit 0x58
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65B7: je 0x588e65bc
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588E65B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E65BB: ret
        __asm _emit 0xC3
        // 0x588E65BC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E65C1: ret
        __asm _emit 0xC3
    }
}
