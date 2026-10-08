// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877b60.

// Ghidra body range 0x58877B60..0x58877B8C; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_58877b60_segment_00() {
    __asm {
        // 0x58877B60: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58877B65: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58877B69: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B6E: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58877B71: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B76: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58877B79: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58877B7D: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58877B80: push eax
        __asm _emit 0x50
        // 0x58877B81: push 0x374
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B86: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xE4
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58877B8B: ret
        __asm _emit 0xC3
    }
}
