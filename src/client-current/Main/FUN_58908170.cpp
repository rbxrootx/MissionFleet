// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908170 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58908170() {
    __asm {
        // 0x58908170: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x58908173: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58908175: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58908177: je 0x5890818c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58908179: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890817F: nop
        __asm _emit 0x90
        // 0x58908180: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58908182: je 0x5890818f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58908184: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58908187: inc eax
        __asm _emit 0x40
        // 0x58908188: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890818A: jne 0x58908180
        __asm _emit 0x75
        __asm _emit 0xF4
        // 0x5890818C: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5890818F: ret
        __asm _emit 0xC3
    }
}
