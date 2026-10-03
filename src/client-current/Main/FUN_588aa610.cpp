// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AA610 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_588aa610() {
    __asm {
        // 0x588AA610: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x588AA615: jne 0x588aa63a
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588AA617: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588AA61B: cmp eax, dword ptr [ecx + 0x98]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA621: jne 0x588aa62d
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588AA623: call 0x588aa0d0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA628: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA62A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588AA62D: cmp eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AA633: jne 0x588aa63a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588AA635: call 0x588aa120
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588AA63A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588AA63C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
