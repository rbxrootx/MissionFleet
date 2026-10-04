// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FCC0 .. +0xF bytes.
// Source symbol alias: FUN_5874fcc0.
extern "C" __declspec(naked) void FUN_5874fcc0() {
    __asm {
        // 0x5874FCC0: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x5874FCC3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FCC5: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5874FCC8: mov ecx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x58
        // 0x5874FCCB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5874FCCE: ret
        __asm _emit 0xC3
    }
}
