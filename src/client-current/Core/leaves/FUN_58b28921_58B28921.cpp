// Raw mapped byte stream; the body does not decode as one contiguous instruction run.
// 9 bytes.
extern "C" __declspec(naked) void FUN_58b28921_58B28921() {
    __asm {
        __asm _emit 0x8b
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x66
    }
}
