// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B500EF .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58b500ef() {
    __asm {
        ; Exact mapped bytes 0F 84 BF F3 34 00: je 0x58e9f4b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0xf3
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E9 53 DB 1C 00: jmp 0x58d1dc4f
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xdb
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
