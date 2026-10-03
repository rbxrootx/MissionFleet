// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587315F0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_587315f0() {
    __asm {
        // 0x587315F0: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587315F4: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587315F6: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587315FA: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x587315FE: push esi
        __asm _emit 0x56
        // 0x587315FF: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731604: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x58731607: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873160A: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873160E: pop esi
        __asm _emit 0x5E
        // 0x5873160F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
