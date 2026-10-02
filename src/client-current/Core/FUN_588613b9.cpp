// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588613B9 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588613b9() {
    __asm {
        // 0x588613B9: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588613BB: push ebp
        __asm _emit 0x55
        // 0x588613BC: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588613BE: cmp dword ptr [ebp + 8], -1
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x588613C2: je 0x588613d3
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588613C4: push dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x31
        // 0x588613C6: dec dword ptr [ecx + 4]
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588613C9: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588613CC: call 0x5885ac64
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x98
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588613D1: pop ecx
        __asm _emit 0x59
        // 0x588613D2: pop ecx
        __asm _emit 0x59
        // 0x588613D3: pop ebp
        __asm _emit 0x5D
        // 0x588613D4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
