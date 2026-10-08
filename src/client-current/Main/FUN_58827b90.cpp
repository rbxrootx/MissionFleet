// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 58 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827b90.

// Ghidra body range 0x58827B90..0x58827BCA; 58 mapped bytes.
extern "C" __declspec(naked) void FUN_58827b90_segment_00() {
    __asm {
        // 0x58827B90: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x58827B93: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58827B98: mov eax, dword ptr [ecx + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827B9E: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BA3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58827BA7: mov eax, dword ptr [ecx + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BAD: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58827BB1: mov eax, dword ptr [ecx + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BB7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58827BBB: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58827BBD: mov byte ptr [ecx + 0x9c], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BC3: mov byte ptr [ecx + 0x9d], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827BC9: ret
        __asm _emit 0xC3
    }
}
