// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58749A30 .. +0x34 bytes.
// Source symbol alias: FUN_58749a30.
extern "C" __declspec(naked) void FUN_58749a30() {
    __asm {
        // 0x58749A30: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749A36: push esi
        __asm _emit 0x56
        // 0x58749A37: push edi
        __asm _emit 0x57
        // 0x58749A38: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58749A3C: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58749A3F: cdq
        __asm _emit 0x99
        // 0x58749A40: idiv dword ptr [0x58a244cc]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xCC
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58749A46: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58749A4A: add dword ptr [esi], eax
        __asm _emit 0x01
        __asm _emit 0x06
        // 0x58749A4C: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58749A52: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x58749A55: cdq
        __asm _emit 0x99
        // 0x58749A56: idiv dword ptr [0x58a244d0]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xD0
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58749A5C: pop edi
        __asm _emit 0x5F
        // 0x58749A5D: sub dword ptr [esi + 4], eax
        __asm _emit 0x29
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58749A60: pop esi
        __asm _emit 0x5E
        // 0x58749A61: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
