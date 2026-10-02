// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860D42 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58860d42() {
    __asm {
        // 0x58860D42: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58860D44: push esi
        __asm _emit 0x56
        // 0x58860D45: push dword ptr [ecx + 0x68]
        __asm _emit 0xFF
        __asm _emit 0x71
        __asm _emit 0x68
        // 0x58860D48: lea esi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58860D4B: push esi
        __asm _emit 0x56
        // 0x58860D4C: call 0x5885d93b
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58860D51: pop ecx
        __asm _emit 0x59
        // 0x58860D52: pop ecx
        __asm _emit 0x59
        // 0x58860D53: push eax
        __asm _emit 0x50
        // 0x58860D54: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58860D56: call 0x588613d7
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860D5B: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860D5D: pop esi
        __asm _emit 0x5E
        // 0x58860D5E: ret
        __asm _emit 0xC3
    }
}
