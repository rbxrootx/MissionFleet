// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469FD0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00469fd0_00469FD0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 8C DA 67 00 00: cmp dword ptr [0x67da8c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x469fe2
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 8C DA 67 00: call dword ptr [0x67da8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        push 6578f4h
        push 6575dch
        ; Exact mapped bytes E8 AF 01 00 00: call 0x46a1a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 6574d8h
        push 657000h
        ; Exact mapped bytes E8 9D 01 00 00: call 0x46a1a0
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
