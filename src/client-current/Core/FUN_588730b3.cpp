// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588730B3 .. +0xC bytes.
extern "C" __declspec(naked) void FUN_588730b3() {
    __asm {
        // 0x588730B3: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588730B6: push dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x31
        // 0x588730B8: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x0B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588730BD: pop ecx
        __asm _emit 0x59
        // 0x588730BE: ret
        __asm _emit 0xC3
    }
}
