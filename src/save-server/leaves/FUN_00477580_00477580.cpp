// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477580 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00477580_00477580() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 18 75 68 00 00: cmp dword ptr [0x687518], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2F: jne 0x4775bb
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0bh
        ; Exact mapped bytes E8 1D 93 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes 83 3D 18 75 68 00 00: cmp dword ptr [0x687518], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x4775b1
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 3C 00 00 00: call 0x4775e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 75 68 00: mov eax, dword ptr [0x687518]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 18 75 68 00: mov dword ptr [0x687518], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes E8 98 93 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        pop ebp
        ret
    }
}
