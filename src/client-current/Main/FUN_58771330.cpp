// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 56 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771330.

// Ghidra body range 0x58771330..0x58771368; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_58771330_segment_00() {
    __asm {
        // 0x58771330: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58771334: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771339: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5877133C: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771341: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58771344: jne 0x58771367
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58771346: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877134B: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5877134F: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58771353: mov eax, 0xe4ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771358: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5877135B: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771360: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x58771363: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58771367: ret
        __asm _emit 0xC3
    }
}
