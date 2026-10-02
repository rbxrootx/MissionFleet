// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58868BA0 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_58868ba0() {
    __asm {
        // 0x58868BA0: call 0x58868bf1
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58868BA5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58868BA7: je 0x58862710
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58868BAD: ret
        __asm _emit 0xC3
    }
}
