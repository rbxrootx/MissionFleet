// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054791F .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0054791f_0054791F() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x547955
        __asm _emit 0x74
        __asm _emit 0x2a
        push 2
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 98 E8 5D 00: mov dword ptr [0x5de898], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 9C E8 5D 00: mov dword ptr [0x5de89c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 00 E9 5D 00 01 00 00 00: mov dword ptr [0x5de900], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
