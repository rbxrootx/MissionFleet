// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C52A0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_100c52a0_100C52A0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 54 24 08: mov dx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 81 96 00 00 00: mov word ptr [ecx + 0x96], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 91 94 00 00 00: mov word ptr [ecx + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
