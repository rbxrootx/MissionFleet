// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EB2D0 .. +0xF bytes.
// Source symbol alias: FUN_588eb2d0.
extern "C" __declspec(naked) void FUN_588eb2d0() {
    __asm {
        // 0x588EB2D0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EB2D2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588EB2D5: mov dword ptr [ecx + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x588EB2D8: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x588EB2DB: mov dword ptr [ecx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588EB2DE: ret
        __asm _emit 0xC3
    }
}
