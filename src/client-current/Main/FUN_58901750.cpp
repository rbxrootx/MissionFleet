// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901750 .. +0x18 bytes.
// Source symbol alias: FUN_58901750.
extern "C" __declspec(naked) void FUN_58901750() {
    __asm {
        // 0x58901750: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58901754: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58901757: jl 0x5890175e
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x58901759: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890175B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890175E: imul eax, eax, 0x47
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x47
        // 0x58901761: lea eax, [eax + ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x08
        // 0x58901765: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
