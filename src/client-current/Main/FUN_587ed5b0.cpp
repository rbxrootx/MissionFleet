// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587ED5B0 .. +0x4A bytes.
// Source symbol alias: FUN_587ed5b0.
extern "C" __declspec(naked) void FUN_587ed5b0() {
    __asm {
        // 0x587ED5B0: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587ED5B5: dec eax
        __asm _emit 0x48
        // 0x587ED5B6: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x587ED5B9: ja 0x587ed5f7
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x587ED5BB: jmp dword ptr [eax*4 + 0x587ed5fc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0xD5
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x587ED5C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5C4: push 0x5b
        __asm _emit 0x6A
        __asm _emit 0x5B
        // 0x587ED5C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5C8: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED5CD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED5D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5D2: push 0x5c
        __asm _emit 0x6A
        __asm _emit 0x5C
        // 0x587ED5D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5D6: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED5DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED5DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5E0: push 0x5d
        __asm _emit 0x6A
        __asm _emit 0x5D
        // 0x587ED5E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5E4: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED5E9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587ED5EC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5EE: push 0x5e
        __asm _emit 0x6A
        __asm _emit 0x5E
        // 0x587ED5F0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587ED5F2: call 0x587e9a10
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xC4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587ED5F7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
