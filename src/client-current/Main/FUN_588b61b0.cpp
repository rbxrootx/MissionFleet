// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 38 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b61b0.

// Ghidra body range 0x588B61B0..0x588B61D6; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_588b61b0_segment_00() {
    __asm {
        // 0x588B61B0: mov eax, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B61B6: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B61BB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588B61BF: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B61C4: mov word ptr [ecx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B61CB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B61D1: jmp 0x587b9130
        __asm _emit 0xE9
        __asm _emit 0x5A
        __asm _emit 0x2F
        __asm _emit 0xF0
        __asm _emit 0xFF
    }
}
