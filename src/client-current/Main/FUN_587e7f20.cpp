// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E7F20 .. +0x22 bytes.
// Source symbol alias: FUN_587e7f20.
extern "C" __declspec(naked) void FUN_587e7f20() {
    __asm {
        // 0x587E7F20: cmp dword ptr [ecx + 0x20d40], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7F27: jne 0x587e7f3c
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587E7F29: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7F2E: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587E7F32: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x587E7F34: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x587E7F37: jne 0x587e7f3c
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587E7F39: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7F3B: ret
        __asm _emit 0xC3
        // 0x587E7F3C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7F41: ret
        __asm _emit 0xC3
    }
}
