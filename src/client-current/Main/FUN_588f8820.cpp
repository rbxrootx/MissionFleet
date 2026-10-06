// CWarehouseItemForce scalar-deleting-destructor-shaped wrapper.
// Ghidra records 27 bytes in two body ranges; this emits the complete 30-byte
// mapped stream, including the reachable cleanup and ret 4 continuation.
// Source symbol alias: FUN_588f8820.
extern "C" __declspec(naked) void FUN_588f8820() {
    __asm {
        // 0x588F8820: push esi
        __asm _emit 0x56
        // 0x588F8821: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F8823: call 0x588f8640
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F8828: test byte ptr [esp + 8], 1
        __asm _emit 0xF6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x588F882D: je 0x588f8838
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F882F: push esi
        __asm _emit 0x56
        // 0x588F8830: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F8835: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F8838: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588F883A: pop esi
        __asm _emit 0x5E
        // 0x588F883B: ret 4; reachable continuation after the indirect free thunk.
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
