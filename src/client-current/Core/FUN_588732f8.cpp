// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588732F8 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_588732f8() {
    __asm {
        // 0x588732F8: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588732FA: je 0x58873307
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588732FC: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588732FE: call 0x58863c64
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58873303: pop ecx
        __asm _emit 0x59
        // 0x58873304: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE0
        // 0x58873307: ret
        __asm _emit 0xC3
    }
}
