// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0470 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004b0470_004B0470() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 68 12 5D 00 00: cmp dword ptr [0x5d1268], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x4b0482
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 68 12 5D 00: call dword ptr [0x5d1268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5a0214h
        push 5a0200h
        ; Exact mapped bytes E8 AF 01 00 00: call 0x4b0640
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 5a01fch
        push 5a0000h
        ; Exact mapped bytes E8 9D 01 00 00: call 0x4b0640
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop ebp
        ret
    }
}
