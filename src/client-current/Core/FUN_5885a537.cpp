// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A537 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_5885a537() {
    __asm {
        // 0x5885A537: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A53A: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A53F: pop ecx
        __asm _emit 0x59
        // 0x5885A540: ret
        __asm _emit 0xC3
    }
}
