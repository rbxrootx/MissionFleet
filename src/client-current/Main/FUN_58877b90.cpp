// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 44 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877b90.

// Ghidra body range 0x58877B90..0x58877BBC; 44 mapped bytes.
extern "C" __declspec(naked) void FUN_58877b90_segment_00() {
    __asm {
        // 0x58877B90: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58877B95: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58877B99: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B9E: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58877BA1: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BA6: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58877BA9: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58877BAD: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58877BB0: push eax
        __asm _emit 0x50
        // 0x58877BB1: push 0x406
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877BB6: call 0x587b6020
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58877BBB: ret
        __asm _emit 0xC3
    }
}
