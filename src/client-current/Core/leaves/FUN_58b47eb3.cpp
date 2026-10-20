// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B47EB3 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58b47eb3() {
    __asm {
        ; Exact mapped bytes 0F 86 56 F3 FB FF: jbe 0x58b0720f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8D 9D EC FE FF FF: lea ebx, [ebp - 0x114]
        __asm _emit 0x8d
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A D2: mov dl, dl
        __asm _emit 0x8a
        __asm _emit 0xd2
        ; Exact mapped bytes E9 A3 50 00 00: jmp 0x58b4cf69
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
