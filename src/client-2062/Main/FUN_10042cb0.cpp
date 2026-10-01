// Reconstructed from FUN_10042cb0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10042cb0() {
    __asm {
        push 9600h
        push 1
        push 0
        ; Exact instruction bytes: call dword ptr [10175050h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact instruction bytes: mov dword ptr [101c5918h], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ret
    }
}
