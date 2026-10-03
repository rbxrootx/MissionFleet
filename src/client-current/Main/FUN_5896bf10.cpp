// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896BF10 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_5896bf10() {
    __asm {
        // 0x5896BF10: push esi
        __asm _emit 0x56
        // 0x5896BF11: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5896BF13: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5896BF15: call 0x5896cae0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896BF1A: mov dword ptr [esi], 0x589a2e18
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896BF20: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5896BF22: pop esi
        __asm _emit 0x5E
        // 0x5896BF23: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
