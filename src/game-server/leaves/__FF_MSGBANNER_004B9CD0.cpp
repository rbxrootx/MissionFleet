// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B9CD0 .. +0x49 bytes.
extern "C" __declspec(naked) void __FF_MSGBANNER_004B9CD0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 2C ED 5D 00 01: cmp dword ptr [0x5ded2c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 12: je 0x4b9cee
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 2C ED 5D 00 00: cmp dword ptr [0x5ded2c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 32: jne 0x4b9d17
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D E4 12 5D 00 01: cmp dword ptr [0x5d12e4], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 29: jne 0x4b9d17
        __asm _emit 0x75
        __asm _emit 0x29
        push 0fch
        ; Exact mapped bytes E8 28 00 00 00: call 0x4b9d20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 83 3D E0 EF 5D 00 00: cmp dword ptr [0x5defe0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x4b9d0a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 E0 EF 5D 00: call dword ptr [0x5defe0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes E8 0C 00 00 00: call 0x4b9d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop ebp
        ret
    }
}
