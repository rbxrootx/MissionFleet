// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CE60 .. +0x2B bytes.
// Source symbol alias: __alloca_probe.
extern "C" __declspec(naked) void __alloca_probe() {
    __asm {
        // 0x5897CE60: push ecx
        __asm _emit 0x51
        // 0x5897CE61: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5897CE65: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5897CE67: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5897CE69: not eax
        __asm _emit 0xF7
        __asm _emit 0xD0
        // 0x5897CE6B: and ecx, eax
        __asm _emit 0x23
        __asm _emit 0xC8
        // 0x5897CE6D: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x5897CE6F: and eax, 0xfffff000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897CE74: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897CE76: jb 0x5897ce82
        __asm _emit 0x72
        __asm _emit 0x0A
        // 0x5897CE78: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5897CE7A: pop ecx
        __asm _emit 0x59
        // 0x5897CE7B: xchg esp, eax
        __asm _emit 0x94
        // 0x5897CE7C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5897CE7E: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5897CE81: ret
        __asm _emit 0xC3
        // 0x5897CE82: sub eax, 0x1000
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897CE87: test dword ptr [eax], eax
        __asm _emit 0x85
        __asm _emit 0x00
        // 0x5897CE89: jmp 0x5897ce74
        __asm _emit 0xEB
        __asm _emit 0xE9
    }
}
