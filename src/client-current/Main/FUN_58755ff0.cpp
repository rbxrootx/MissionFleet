// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58755FF0 .. +0x2E bytes.
// Source symbol alias: FUN_58755ff0.
extern "C" __declspec(naked) void FUN_58755ff0() {
    __asm {
        // 0x58755FF0: cmp dword ptr [ecx + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58755FF4: je 0x58756019
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x58755FF6: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58755FF9: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58755FFD: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756003: jle 0x58756019
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58756005: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58756007: jl 0x58756019
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x58756009: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875600F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58756011: je 0x58756019
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58756013: mov eax, dword ptr [eax + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x88
        // 0x58756016: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58756019: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875601B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
