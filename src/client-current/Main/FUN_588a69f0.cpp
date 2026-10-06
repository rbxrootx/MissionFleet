// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A69F0 .. +0x29 bytes.
// Source symbol alias: FUN_588a69f0.
extern "C" __declspec(naked) void FUN_588a69f0() {
    __asm {
        // 0x588A69F0: push esi
        __asm _emit 0x56
        // 0x588A69F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A69F3: cmp word ptr [esi + 0x9c], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588A69FB: jne 0x588a6a15
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588A69FD: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A03: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588A6A05: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588A6A08: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588A6A0A: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6A10: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A6A15: pop esi
        __asm _emit 0x5E
        // 0x588A6A16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
