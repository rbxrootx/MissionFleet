// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425AF0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00425af0_00425AF0() {
    __asm {
        ; Exact mapped bytes 83 3D 40 FF 44 00 00: cmp dword ptr [0x44ff40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x425b1d
        __asm _emit 0x75
        __asm _emit 0x24
        push 0bh
        ; Exact mapped bytes E8 0A CB FF FF: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 40 FF 44 00 00: cmp dword ptr [0x44ff40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 75 0B: jne 0x425b15
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 0F 00 00 00: call 0x425b1e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 05 40 FF 44 00: inc dword ptr [0x44ff40]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes E8 4F CB FF FF: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
    }
}
