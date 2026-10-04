// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876C8B0 .. +0x18 bytes.
// Source symbol alias: FUN_5876c8b0.
extern "C" __declspec(naked) void FUN_5876c8b0() {
    __asm {
        // 0x5876C8B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876C8B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876C8B6: je 0x5876c8c5
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5876C8B8: cmp eax, 0xcdcdcdcd
        __asm _emit 0x3D
        __asm _emit 0xCD
        __asm _emit 0xCD
        __asm _emit 0xCD
        __asm _emit 0xCD
        // 0x5876C8BD: je 0x5876c8c5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5876C8BF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C8C4: ret
        __asm _emit 0xC3
        // 0x5876C8C5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876C8C7: ret
        __asm _emit 0xC3
    }
}
