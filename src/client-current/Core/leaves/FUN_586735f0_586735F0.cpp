// Raw mapped byte stream; the body does not decode as one contiguous instruction run.
// 18 bytes.
extern "C" __declspec(naked) void FUN_586735f0_586735F0() {
    __asm {
        __asm _emit 0x55
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x2c
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xe8
    }
}
