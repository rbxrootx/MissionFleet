// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58731620 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58731620() {
    __asm {
        // 0x58731620: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58731624: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58731626: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5873162A: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5873162E: push esi
        __asm _emit 0x56
        // 0x5873162F: mov esi, 0xfffd
        __asm _emit 0xBE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731634: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x58731637: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5873163A: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873163D: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58731641: pop esi
        __asm _emit 0x5E
        // 0x58731642: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
