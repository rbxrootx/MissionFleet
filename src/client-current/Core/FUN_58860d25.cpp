// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860D25 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58860d25() {
    __asm {
        // 0x58860D25: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860D27: push esi
        __asm _emit 0x56
        // 0x58860D28: push dword ptr [ecx + 0x60]
        __asm _emit 0xFF
        __asm _emit 0x71
        __asm _emit 0x60
        // 0x58860D2B: lea esi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58860D2E: push esi
        __asm _emit 0x56
        // 0x58860D2F: call 0x5885d904
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860D34: pop ecx
        __asm _emit 0x59
        // 0x58860D35: pop ecx
        __asm _emit 0x59
        // 0x58860D36: push eax
        __asm _emit 0x50
        // 0x58860D37: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860D39: call 0x588613b9
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860D3E: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860D40: pop esi
        __asm _emit 0x5E
        // 0x58860D41: ret
        __asm _emit 0xC3
    }
}
