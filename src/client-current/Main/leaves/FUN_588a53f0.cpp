// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A53F0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_588a53f0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 81 9C 00 00 00: mov word ptr [ecx + 0x9c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
