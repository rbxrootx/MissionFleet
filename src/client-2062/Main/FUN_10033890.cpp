// Reconstructed from FUN_10033890 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100e28c0();

extern "C" __declspec(naked) void FUN_10033890() {
    __asm {
        ; Exact instruction bytes: mov ecx, 101c4558h
        __asm _emit 0xb9
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        jmp FUN_100e28c0
    }
}
