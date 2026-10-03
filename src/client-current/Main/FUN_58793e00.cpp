// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58793E00 .. +0x10 bytes.
// Source symbol alias: FUN_58793e00.
extern "C" __declspec(naked) void FUN_58793e00() {
    __asm {
        // 0x58793E00: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58793E02: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58793E05: mov dword ptr [ecx + 0x58], 1
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793E0C: mov dword ptr [ecx + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x58793E0F: ret
        __asm _emit 0xC3
    }
}
