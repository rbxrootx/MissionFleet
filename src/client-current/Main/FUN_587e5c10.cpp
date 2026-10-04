// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5C10 .. +0x16 bytes.
// Source symbol alias: FUN_587e5c10.
extern "C" __declspec(naked) void FUN_587e5c10() {
    __asm {
        // 0x587E5C10: cmp byte ptr [ecx + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5C17: jne 0x587e5c23
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587E5C19: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5C1D: mov byte ptr [ecx + 0x10484], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5C23: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
