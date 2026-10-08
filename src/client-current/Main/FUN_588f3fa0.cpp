// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 35 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f3fa0.

// Ghidra body range 0x588F3FA0..0x588F3FC3; 35 mapped bytes.
extern "C" __declspec(naked) void FUN_588f3fa0_segment_00() {
    __asm {
        // 0x588F3FA0: cmp dword ptr [ecx + 0xc], 0x64
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x0C
        __asm _emit 0x64
        // 0x588F3FA4: jne 0x588f3fbd
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588F3FA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F3FA8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F3FAA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F3FAC: push 0x36
        __asm _emit 0x6A
        __asm _emit 0x36
        // 0x588F3FAE: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x7B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F3FB3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F3FB5: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x0D
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F3FBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F3FBC: ret
        __asm _emit 0xC3
        // 0x588F3FBD: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F3FC2: ret
        __asm _emit 0xC3
    }
}
