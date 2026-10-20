// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10096490 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_10096490_10096490() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 25 FF E1 00 00: and eax, 0xe1ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0D 05 01 00 00: or eax, 0x105
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
