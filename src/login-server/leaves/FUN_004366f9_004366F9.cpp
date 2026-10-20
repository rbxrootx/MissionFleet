// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004366F9 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_004366f9_004366F9() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes B9 90 F7 44 00: mov ecx, 0x44f790
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 10 FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
