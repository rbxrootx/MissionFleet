// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004366B9 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_004366b9_004366B9() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes B9 B8 F7 44 00: mov ecx, 0x44f7b8
        __asm _emit 0xb9
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 10 FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
