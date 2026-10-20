// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B23168 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58b23168() {
    __asm {
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 80 7D 08 00: cmp byte ptr [ebp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 88 4D FF: mov byte ptr [ebp - 1], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 98 1F 00: jmp 0x58d1c9a4
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x98
        __asm _emit 0x1f
        __asm _emit 0x00
    }
}
