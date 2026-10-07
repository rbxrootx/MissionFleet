// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 35 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972620.

// Ghidra body range 0x58972620..0x58972643; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_58972620_segment_00() {
    __asm {
        // 0x58972620: mov al, byte ptr [ecx + 0x1aa]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972626: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58972628: je 0x58972632
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5897262A: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5897262F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58972632: movsx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972637: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58972639: mov cl, ah
        __asm _emit 0x8A
        __asm _emit 0xCC
        // 0x5897263B: mov ch, al
        __asm _emit 0x8A
        __asm _emit 0xE8
        // 0x5897263D: mov ax, cx
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58972640: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
