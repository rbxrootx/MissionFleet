// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5887C5BB .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_5887c5bb() {
    __asm {
        // 0x5887C5BB: mov eax, dword ptr [0x58907d30]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x7D
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5887C5C0: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5887C5C3: je 0x5887c5d1
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5887C5C5: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5887C5C8: je 0x5887c5d1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887C5CA: push eax
        __asm _emit 0x50
        // 0x5887C5CB: call dword ptr [0x588942f8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5887C5D1: ret
        __asm _emit 0xC3
    }
}
