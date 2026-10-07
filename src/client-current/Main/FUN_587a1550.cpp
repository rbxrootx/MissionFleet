// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1550 .. +0x17 bytes.
// Source symbol alias: FUN_587a1550.
extern "C" __declspec(naked) void FUN_587a1550() {
    __asm {
        // 0x587A1550: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587A1553: cmp dword ptr [ecx + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A155A: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x587A155D: jne 0x587a1567
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A155F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A1561: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A1564: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
