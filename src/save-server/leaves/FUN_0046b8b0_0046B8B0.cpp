// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B8B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0046b8b0_0046B8B0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D B8 8D 68 00 00: cmp dword ptr [0x688db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x46b8d0
        __asm _emit 0x75
        __asm _emit 0x14
        push -3
        ; Exact mapped bytes E8 0D F8 FF FF: call 0x46b0d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes C7 05 B8 8D 68 00 01 00 00 00: mov dword ptr [0x688db8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
