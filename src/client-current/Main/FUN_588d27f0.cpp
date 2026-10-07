// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D27F0 .. +0x2B bytes.
// Source symbol alias: FUN_588d27f0.
extern "C" __declspec(naked) void FUN_588d27f0() {
    __asm {
        // 0x588D27F0: push esi
        __asm _emit 0x56
        // 0x588D27F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D27F3: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588D27F6: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D27FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D27FD: push eax
        __asm _emit 0x50
        // 0x588D27FE: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2803: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2809: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D280E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2810: push ecx
        __asm _emit 0x51
        // 0x588D2811: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xA4
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2816: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588D2819: pop esi
        __asm _emit 0x5E
        // 0x588D281A: ret
        __asm _emit 0xC3
    }
}
