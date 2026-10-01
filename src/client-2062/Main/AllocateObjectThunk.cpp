// FUN_1016c7a0 is the six-byte callback dispatch used by ConstructScreen.
// Ghidra identifies its indirect destination as DAT_1017515c; the original
// instruction jumps through that slot and leaves the callback's return value
// and stack contract untouched.
extern "C" __declspec(naked) void AllocateObjectThunk() {
    __asm {
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x5c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
    }
}
