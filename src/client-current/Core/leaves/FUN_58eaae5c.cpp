// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58EAAE5C .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58eaae5c() {
    __asm {
        ; Exact mapped bytes 0F 84 5B 9E E9 FF: je 0x58d44cbd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x9e
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 81 FA 04 01 00 00: cmp edx, 0x104
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 48 9E E9 FF: jmp 0x58d44cb7
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x9e
        __asm _emit 0xe9
        __asm _emit 0xff
    }
}
