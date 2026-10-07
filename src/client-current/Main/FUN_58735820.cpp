// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 21 bytes in 1 exact ranges.
// Source symbol alias: FUN_58735820.

// Ghidra body range 0x58735820..0x58735835; 21 mapped bytes.
extern "C" __declspec(naked) void FUN_58735820_segment_00() {
    __asm {
        // 0x58735820: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x58735823: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x0E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58735828: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873582A: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5873582F: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x58735832: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58735834: ret
        __asm _emit 0xC3
    }
}
