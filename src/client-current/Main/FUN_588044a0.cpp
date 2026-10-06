// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588044A0 .. +0x2E bytes.
// Source symbol alias: FUN_588044a0.
extern "C" __declspec(naked) void FUN_588044a0() {
    __asm {
        // 0x588044A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588044A4: cmp eax, dword ptr [esp + 8]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588044A8: jb 0x588044b2
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x588044AA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588044AF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588044B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588044B4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588044B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588044B8: push 0x1d6
        __asm _emit 0x68
        __asm _emit 0xD6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588044BD: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x76
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588044C2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588044C4: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588044C9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588044CB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
