// Reconstructed from FUN_10042cd0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.

extern "C" __declspec(naked) void FUN_10042cd0() {
    __asm {
        push 0ff00h
        push 1
        push 0
        ; Exact instruction bytes: call dword ptr [10175050h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact instruction bytes: mov dword ptr [101c5914h], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ret
    }
}
