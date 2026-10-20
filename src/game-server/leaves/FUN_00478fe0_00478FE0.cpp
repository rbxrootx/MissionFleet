// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478FE0 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_00478fe0_00478FE0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 88 CB 5D 00: mov ecx, 0x5dcb88
        __asm _emit 0xb9
        __asm _emit 0x88
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 3D FA FF: call 0x41cd9b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 EC F7 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
