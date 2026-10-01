// Reconstructed from FUN_10033870 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_100e2800();
extern "C" void FUN_1016c830();

extern "C" __declspec(naked) void FUN_10033870() {
    __asm {
        push 0
        push 1000h
        ; Exact instruction bytes: mov ecx, 101c4558h
        __asm _emit 0xb9
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        call FUN_100e2800
        push 10033890h
        call FUN_1016c830
        pop ecx
        ret
    }
}
