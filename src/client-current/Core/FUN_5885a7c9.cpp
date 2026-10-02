// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A7C9 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_5885a7c9() {
    __asm {
        // 0x5885A7C9: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885A7CC: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A7CE: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A7D3: pop ecx
        __asm _emit 0x59
        // 0x5885A7D4: ret
        __asm _emit 0xC3
    }
}
