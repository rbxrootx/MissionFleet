// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043689E .. +0xF bytes.
extern "C" __declspec(naked) void FUN_0043689e_0043689E() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes B9 E8 F7 44 00: mov ecx, 0x44f7e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 6E 0E FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
