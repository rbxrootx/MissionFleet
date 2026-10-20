// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436576 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_00436576_00436576() {
    __asm {
        ; Exact mapped bytes 68 24 F0 00 00: push 0xf024
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes B9 60 F6 44 00: mov ecx, 0x44f660
        __asm _emit 0xb9
        __asm _emit 0x60
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 0F FE FF: call 0x4174e9
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
