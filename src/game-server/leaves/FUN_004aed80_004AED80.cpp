// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AED80 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004aed80_004AED80() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 68 02 5E 00 00: cmp dword ptr [0x5e0268], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4aeda0
        __asm _emit 0x75
        __asm _emit 0x14
        push -3
        ; Exact mapped bytes E8 0D F8 FF FF: call 0x4ae5a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes C7 05 68 02 5E 00 01 00 00 00: mov dword ptr [0x5e0268], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
