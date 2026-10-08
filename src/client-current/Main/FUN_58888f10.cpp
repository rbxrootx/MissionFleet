// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 58 bytes in 1 exact ranges.
// Source symbol alias: FUN_58888f10.

// Ghidra body range 0x58888F10..0x58888F4A; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_58888f10_segment_00() {
    __asm {
        // 0x58888F10: mov eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F16: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F1B: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888F1F: mov eax, dword ptr [ecx + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F25: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888F29: mov eax, dword ptr [ecx + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F2F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888F33: mov eax, dword ptr [ecx + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F39: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888F3D: mov ecx, dword ptr [ecx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888F43: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58888F45: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58888F49: ret
        __asm _emit 0xC3
    }
}
