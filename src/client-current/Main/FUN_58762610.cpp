// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58762610 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58762610() {
    __asm {
        // 0x58762610: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58762614: cmp eax, dword ptr [ecx + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58762617: jne 0x58762629
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58762619: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876261E: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58762622: mov dword ptr [ecx + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58762629: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
