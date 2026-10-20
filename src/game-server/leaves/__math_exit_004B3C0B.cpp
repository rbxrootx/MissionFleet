// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3C0B .. +0x2A bytes.
extern "C" __declspec(naked) void __math_exit_004B3C0B() {
    __asm {
        ; Exact mapped bytes 66 8B 04 24: mov ax, word ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 3D 7F 02: cmp ax, 0x27f
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes 74 1E: je 0x4b3c33
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 74 15: je 0x4b3c30
        __asm _emit 0x74
        __asm _emit 0x15
        wait
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        ; Exact mapped bytes 66 83 E0 20: and ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x20
        ; Exact mapped bytes 74 0C: je 0x4b3c30
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, 8
        ; Exact mapped bytes E8 E9 FE FF FF: call 0x4b3b17
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edx
        ret
        ; Exact mapped bytes D9 2C 24: fldcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x24
        pop edx
        ret
    }
}
