// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786250 .. +0x5 bytes.
// Source symbol alias: FUN_58786250.
extern "C" __declspec(naked) void FUN_58786250() {
    __asm {
        // 0x58786250: mov ax, word ptr [ecx + 0x3e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x3E
        // 0x58786254: ret
        __asm _emit 0xC3
    }
}
