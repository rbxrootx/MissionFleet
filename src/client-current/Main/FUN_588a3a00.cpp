// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 52 bytes in 1 exact ranges.
// Source symbol alias: FUN_588a3a00.

// Ghidra body range 0x588A3A00..0x588A3A34; 52 mapped bytes.
extern "C" __declspec(naked) void FUN_588a3a00_segment_00() {
    __asm {
        // 0x588A3A00: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588A3A04: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3A09: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588A3A0C: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3A11: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588A3A14: jne 0x588a3a33
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588A3A16: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588A3A1B: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588A3A1F: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3A24: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588A3A27: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A3A2C: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588A3A2F: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588A3A33: ret
        __asm _emit 0xC3
    }
}
