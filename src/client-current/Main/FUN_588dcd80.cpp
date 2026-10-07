// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 67 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dcd80.

// Ghidra body range 0x588DCD80..0x588DCDC3; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_588dcd80_segment_00() {
    __asm {
        // 0x588DCD80: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCD85: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588DCD8C: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588DCD90: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588DCD92: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588DCD96: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588DCD98: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588DCD9C: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588DCD9E: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x588DCDA2: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588DCDA4: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588DCDA8: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588DCDAA: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588DCDAE: je 0x588dcdb6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588DCDB0: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x588DCDB4: jne 0x588dcdc0
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588DCDB6: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCDBA: add dword ptr [ecx + 0x12a4], edx
        __asm _emit 0x01
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCDC0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
