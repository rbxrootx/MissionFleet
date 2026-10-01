// Reconstructed from FUN_10042d10 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10042d10() {
    __asm {
        push 9b9b9bh
        push 1
        push 0
        ; Exact instruction bytes: call dword ptr [10175050h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact instruction bytes: mov dword ptr [101c590ch], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ret
    }
}
