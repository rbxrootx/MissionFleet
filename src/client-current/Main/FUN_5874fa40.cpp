// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FA40 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_5874fa40() {
    __asm {
        // 0x5874FA40: push esi
        __asm _emit 0x56
        // 0x5874FA41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874FA43: call 0x5874f990
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874FA48: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5874FA4D: je 0x5874fa58
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874FA4F: push esi
        __asm _emit 0x56
        // 0x5874FA50: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xD1
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5874FA55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5874FA58: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874FA5A: pop esi
        __asm _emit 0x5E
        // 0x5874FA5B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
