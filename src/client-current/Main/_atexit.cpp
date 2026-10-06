// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CE0F .. +0x17 bytes.
// Source symbol alias: _atexit.
extern "C" __declspec(naked) void _atexit() {
    __asm {
        // 0x5897CE0F: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5897CE11: push ebp
        __asm _emit 0x55
        // 0x5897CE12: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5897CE14: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897CE17: call 0x5897cd6a
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897CE1C: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5897CE1E: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5897CE20: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x5897CE22: pop ecx
        __asm _emit 0x59
        // 0x5897CE23: dec eax
        __asm _emit 0x48
        // 0x5897CE24: pop ebp
        __asm _emit 0x5D
        // 0x5897CE25: ret
        __asm _emit 0xC3
    }
}
