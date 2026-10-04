// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D66E0 .. +0x7 bytes.
// Source symbol alias: FUN_588d66e0.
extern "C" __declspec(naked) void FUN_588d66e0() {
    __asm {
        // 0x588D66E0: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D66E6: ret
        __asm _emit 0xC3
    }
}
