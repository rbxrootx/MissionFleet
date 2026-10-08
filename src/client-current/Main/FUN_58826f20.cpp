// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 51 bytes in 1 exact ranges.
// Source symbol alias: FUN_58826f20.

// Ghidra body range 0x58826F20..0x58826F53; 51 mapped bytes.
extern "C" __declspec(naked) void FUN_58826f20_segment_00() {
    __asm {
        // 0x58826F20: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x58826F23: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F28: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58826F2C: mov eax, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F32: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58826F36: mov eax, dword ptr [ecx + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F3C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58826F40: mov eax, dword ptr [ecx + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F46: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58826F4B: mov byte ptr [ecx + 0x26c], 0
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58826F52: ret
        __asm _emit 0xC3
    }
}
