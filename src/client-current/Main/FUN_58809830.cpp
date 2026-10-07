// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58809830 .. +0x1C bytes.
// Source symbol alias: FUN_58809830.
extern "C" __declspec(naked) void FUN_58809830() {
    __asm {
        // 0x58809830: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58809832: cmp dword ptr [esp + 4], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5880983A: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5880983D: dec eax
        __asm _emit 0x48
        // 0x5880983E: and eax, 0x40000000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58809843: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58809849: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
