// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5887A3F0 .. +0x20 bytes.
// Source symbol alias: FUN_5887a3f0.
extern "C" __declspec(naked) void FUN_5887a3f0() {
    __asm {
        // 0x5887A3F0: cmp dword ptr [ecx + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x68
        __asm _emit 0x00
        // 0x5887A3F4: je 0x5887a40d
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5887A3F6: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5887A3FA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887A3FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887A3FE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887A400: push eax
        __asm _emit 0x50
        // 0x5887A401: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x16
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5887A406: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5887A408: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xA9
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5887A40D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
