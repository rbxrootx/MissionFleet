// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 28 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735930.

// Ghidra body range 0x58735930..0x5873594C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58735930_segment_00() {
    __asm {
        // 0x58735930: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x58735933: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x58735936: jae 0x5873593f
        __asm _emit 0x73
        __asm _emit 0x07
        // 0x58735938: inc eax
        __asm _emit 0x40
        // 0x58735939: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x5873593C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873593E: ret
        __asm _emit 0xC3
        // 0x5873593F: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735946: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873594B: ret
        __asm _emit 0xC3
    }
}
