// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 61 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878aac0.

// Ghidra body range 0x5878AAC0..0x5878AAFD; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_5878aac0_segment_00() {
    __asm {
        // 0x5878AAC0: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5878AAC4: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AAC9: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5878AACC: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AAD1: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5878AAD4: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5878AAD8: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AADD: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5878AAE1: add dword ptr [ecx + 0x12138], 4
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x5878AAE8: mov dword ptr [ecx + 0x12144], 0x56
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AAF2: mov dword ptr [ecx + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x28
        // 0x5878AAF5: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AAFC: ret
        __asm _emit 0xC3
    }
}
