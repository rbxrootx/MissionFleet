// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A540 .. +0x28 bytes.
// Source symbol alias: FUN_5873a540.
extern "C" __declspec(naked) void FUN_5873a540() {
    __asm {
        // 0x5873A540: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873A544: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873A546: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5873A54A: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5873A54E: push esi
        __asm _emit 0x56
        // 0x5873A54F: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873A552: mov esi, 0xfffb
        __asm _emit 0xBE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A557: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x5873A55A: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873A55D: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873A560: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873A564: pop esi
        __asm _emit 0x5E
        // 0x5873A565: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
