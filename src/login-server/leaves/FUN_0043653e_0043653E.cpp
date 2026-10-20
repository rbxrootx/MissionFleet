// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043653E .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_0043653e_0043653E() {
    __asm {
        ; Exact mapped bytes 68 22 F0 00 00: push 0xf022
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B9 F8 F6 44 00: mov ecx, 0x44f6f8
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 0F FE FF: call 0x41749c
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
