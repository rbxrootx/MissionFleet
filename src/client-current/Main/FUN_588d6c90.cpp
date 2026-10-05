// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6C90 .. +0x25 bytes.
// Source symbol alias: FUN_588d6c90.
extern "C" __declspec(naked) void FUN_588d6c90() {
    __asm {
        // 0x588D6C90: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D6C95: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588D6C99: jne 0x588d6ca5
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588D6C9B: add dword ptr [ecx + 0x1428], 8
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588D6CA2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6CA5: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588D6CA9: jne 0x588d6cb2
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588D6CAB: add dword ptr [ecx + 0x142c], 8
        __asm _emit 0x83
        __asm _emit 0x81
        __asm _emit 0x2C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x588D6CB2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
