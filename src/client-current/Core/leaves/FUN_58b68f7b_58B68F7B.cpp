// Raw mapped byte stream; the body does not decode as one contiguous instruction run.
// 10 bytes.
extern "C" __declspec(naked) void FUN_58b68f7b_58B68F7B() {
    __asm {
        __asm _emit 0x55
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xee
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x1b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0xfe
    }
}
