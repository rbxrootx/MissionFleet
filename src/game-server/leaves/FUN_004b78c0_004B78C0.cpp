// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B78C0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_004b78c0_004B78C0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D C8 EE 5D 00 00: cmp dword ptr [0x5deec8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2F: jne 0x4b78fb
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0bh
        ; Exact mapped bytes E8 1D D9 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 83 3D C8 EE 5D 00 00: cmp dword ptr [0x5deec8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4b78f1
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 3C 00 00 00: call 0x4b7920
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 EE 5D 00: mov eax, dword ptr [0x5deec8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 C8 EE 5D 00: mov dword ptr [0x5deec8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes E8 98 D9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop ebp
        ret
    }
}
