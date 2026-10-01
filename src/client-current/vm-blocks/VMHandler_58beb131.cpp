// Byte-emitted source for one dynamically traced VM basic block.
// Executed extent: [0x58BEB131, 0x58BEB13A), 9 bytes; not a function boundary.
extern "C" __declspec(naked) void VMHandler_58beb131() {
    __asm {
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
