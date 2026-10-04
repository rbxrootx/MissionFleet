// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587315C0 .. +0x22 bytes.
// Source symbol alias: FUN_587315c0.
extern "C" __declspec(naked) void FUN_587315c0() {
    __asm {
        // 0x587315C0: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587315C4: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587315C6: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587315CA: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587315CE: push esi
        __asm _emit 0x56
        // 0x587315CF: mov esi, 0xfff0
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587315D4: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587315D7: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587315DA: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587315DE: pop esi
        __asm _emit 0x5E
        // 0x587315DF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
