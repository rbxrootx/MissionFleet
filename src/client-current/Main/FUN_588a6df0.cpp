// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6DF0 .. +0x31 bytes.
// Source symbol alias: FUN_588a6df0.
extern "C" __declspec(naked) void FUN_588a6df0() {
    __asm {
        // 0x588A6DF0: cmp word ptr [ecx + 0x9c], 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588A6DF8: je 0x588a6e1e
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588A6DFA: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588A6DFE: mov edx, dword ptr [ecx + eax*4 + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E05: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588A6E09: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E10: mov ecx, dword ptr [ecx + eax*4 + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E17: mov dword ptr [ecx + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E1E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
