// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 27 bytes in 2 exact ranges.
// Source symbol alias: FUN_588318f0.

// Ghidra body range 0x588318F0..0x58831905; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_588318f0_segment_00() {
    __asm {
        // 0x588318F0: push esi
        __asm _emit 0x56
        // 0x588318F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588318F3: call 0x588316e0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588318F8: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588318FD: je 0x58831908
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588318FF: push esi
        __asm _emit 0x56
        // 0x58831900: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xB3
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58831908..0x5883190E; 6 mapped bytes.
extern "C" __declspec(naked) void FUN_588318f0_segment_01() {
    __asm {
        // 0x58831908: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5883190A: pop esi
        __asm _emit 0x5E
        // 0x5883190B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
