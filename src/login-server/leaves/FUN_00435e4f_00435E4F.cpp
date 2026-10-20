// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435E4F .. +0xF bytes.
extern "C" __declspec(naked) void FUN_00435e4f_00435E4F() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 3C: push 0x3c
        __asm _emit 0x6a
        __asm _emit 0x3c
        ; Exact mapped bytes B9 D0 F4 44 00: mov ecx, 0x44f4d0
        __asm _emit 0xb9
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 BD 18 FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
