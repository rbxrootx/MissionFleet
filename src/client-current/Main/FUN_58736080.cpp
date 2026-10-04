// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58736080 .. +0x1A bytes.
// Source symbol alias: FUN_58736080.
extern "C" __declspec(naked) void FUN_58736080() {
    __asm {
        // 0x58736080: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58736084: mov eax, dword ptr [ecx + eax*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873608B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873608D: je 0x58736095
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5873608F: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x58736092: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58736095: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58736097: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
