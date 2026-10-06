// CWarehouseItem scalar-deleting-destructor-shaped wrapper.
// Ghidra's split 27-byte body omits the reachable add esp,4 at +0x15..+0x18;
// the contiguous mapped stream includes it and ret 4 at +0x1B before INT3.
// Source symbol alias: FUN_588f7d40.
extern "C" __declspec(naked) void FUN_588f7d40() {
    __asm {
        // 0x588F7D40: push esi
        __asm _emit 0x56
        // 0x588F7D41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7D43: call 0x588f7c00
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7D48: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588F7D4D: je 0x588f7d58
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F7D4F: push esi
        __asm _emit 0x56
        // 0x588F7D50: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x4E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F7D55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F7D58: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F7D5A: pop esi
        __asm _emit 0x5E
        // 0x588F7D5B: ret 4; reachable return continuation before INT3.
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
