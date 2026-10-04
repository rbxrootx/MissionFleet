// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58909B00 .. +0x4 bytes.
// Source symbol alias: FUN_58909b00.
extern "C" __declspec(naked) void FUN_58909b00() {
    __asm {
        // 0x58909B00: mov eax, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x58909B03: ret
        __asm _emit 0xC3
    }
}
