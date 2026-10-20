// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471E00 .. +0x49 bytes.
extern "C" __declspec(naked) void __FF_MSGBANNER_00471E00() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 14 72 68 00 01: cmp dword ptr [0x687214], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 12: je 0x471e1e
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 3D 14 72 68 00 00: cmp dword ptr [0x687214], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 32: jne 0x471e47
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D 44 DA 67 00 01: cmp dword ptr [0x67da44], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 29: jne 0x471e47
        __asm _emit 0x75
        __asm _emit 0x29
        push 0fch
        ; Exact mapped bytes E8 28 00 00 00: call 0x471e50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 83 3D 30 74 68 00 00: cmp dword ptr [0x687430], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x471e3a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 30 74 68 00: call dword ptr [0x687430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes E8 0C 00 00 00: call 0x471e50
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
