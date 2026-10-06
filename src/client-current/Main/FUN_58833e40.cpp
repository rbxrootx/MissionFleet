// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58833E40 .. +0x2B bytes.
// Source symbol alias: FUN_58833e40.
extern "C" __declspec(naked) void FUN_58833e40() {
    __asm {
        // 0x58833E40: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58833E44: lea eax, [ecx + 0x328]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E4A: mov byte ptr [ecx + 0x321], 0
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E51: mov ecx, dword ptr [ecx + 0x324]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833E57: push eax
        __asm _emit 0x50
        // 0x58833E58: lea eax, [edx + ecx*8 + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xCA
        __asm _emit 0x5C
        // 0x58833E5C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833E62: push eax
        __asm _emit 0x50
        // 0x58833E63: call 0x587baa60
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x6B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58833E68: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
